.. _api-sampling:

dgl.sampling
=================================

.. automodule:: dgl.sampling

Sampling algorithms on graphs.

Random walk sampling functions
------------------------------

.. autosummary::
    :toctree: ../../generated/

    random_walk
    pack_traces

Neighbor sampling functions
---------------------------

.. autosummary::
    :toctree: ../../generated/

    sample_neighbors
    select_topk

PyTorch DataLoaders with neighborhood sampling
----------------------------------------------
.. autoclass:: pytorch.NeighborSamplerNodeDataLoader

Builtin sampler classes for more complicated sampling algorithms
----------------------------------------------------------------
.. autoclass:: RandomWalkNeighborSampler
.. autoclass:: PinSAGESampler

Neighborhood samplers for multilayer GNNs
-----------------------------------------
.. autoclass:: MultiLayerNeighborSampler

Data loaders for minibatch iteration
------------------------------------
.. autoclass:: NodeCollator

Abstract class for neighborhood sampler
---------------------------------------
.. autoclass:: BlockSampler
