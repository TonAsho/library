#pragma once
#include "graph-template.hpp"
#include "datastructure/UnionFind.hpp"

template< typename T >
struct MinimumSpanningTree {
  T cost;
  Edges< T > edges;
};

template< typename T >
MinimumSpanningTree< T > kruskal(Edges< T > &edges, int N) {
  sort(begin(edges), end(edges), [](const Edge< T > &a, const Edge< T > &b) {
    return a.cost < b.cost;
  });
  UnionFind tree(N);
  T total = T();
  Edges< T > es;
  for(auto &e : edges) {
    if(!tree.same(e.from, e.to)) {
        tree.unite(e.from, e.to);
        es.emplace_back(e);
        total += e.cost;
    }
  }
  return {total, es};
}