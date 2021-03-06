/*!
 *  Copyright (c) 2020 by Contributors
 * \file dgl/aten/kernel.h
 * \brief Sparse matrix operators.
 */
#ifndef DGL_KERNEL_H_
#define DGL_KERNEL_H_

#include <string>
#include <vector>

#include "array.h"
#include "./bcast.h"
#include "./base_heterograph.h"

namespace dgl {
namespace aten {

/*!
 * \brief Generalized Sparse Matrix-Matrix Multiplication.
 * \param op The binary operator, could be `add`, `sub', `mul`, 'div',
 *        `copy_u`, `copy_e'.
 * \param op The reduce operator, could be `sum`, `min`, `max'.
 * \param graph The graph we apply SpMM on.
 * \param ufeat The source node feature.
 * \param efeat The edge feature.
 * \param out The output feature on destination nodes.
 * \param out_aux A list of NDArray's that contains auxiliary information such
 *        as the argmax on source nodes and edges for reduce operators such as
 *        `min` and `max`.
 * \param format The format of sparse matrix.
 */
void SpMM(const std::string& op, const std::string& reduce,
          HeteroGraphPtr graph,
          NDArray ufeat,
          NDArray efeat,
          NDArray out,
          std::vector<NDArray> out_aux,
          SparseFormat format = SparseFormat::kAny);

/*!
 * \brief Generalized Sampled Dense-Dense Matrix Multiplication.
 * \param op The binary operator, could be `add`, `sub', `mul`, 'div',
 *        `dot`, `copy_u`, `copy_e'.
 * \param graph The graph we apply SpMM on.
 * \param ufeat The source node feature.
 * \param vfeat The destination node feature.
 * \param out The output feature on edge.
 * \param format The format of sparse matrix.
 */
void SDDMM(const std::string& op,
           HeteroGraphPtr graph,
           NDArray ufeat,
           NDArray efeat,
           NDArray out,
           SparseFormat format = SparseFormat::kAny);

}  // namespace aten
}  // namespace dgl

#endif  // DGL_KERNEL_H_
