#pragma once
#include "graph-template.hpp"

template< typename T >
struct MinimumSpanningTree {
  T cost;
  Edges< T > edges;
};

template< typename T >
MinimumSpanningTree< T > kruskal(Edges< T > &edges, int V) {
  sort(begin(edges), end(edges), [](const Edge< T > &a, const Edge< T > &b) {
    return a.cost < b.cost;
  });
  dsu tree(V);
  T total = T();
  Edges< T > es;
  for(auto &e : edges) {
    if(!tree.same(e.from, e.to)) {
        tree.merge(e.from, e.to);
        es.emplace_back(e);
        total += e.cost;
    }
  }
  return {total, es};
}