#pragma once
/**
 * @brief Kruskal
 */
#include "datastructure/union-find.hpp"

template<class T>
struct Kruskal : UnionFind {
    using UnionFind::UnionFind;
    struct Edge {
        int from, to;
        T cost;
        int used;
        int idx;
        Edge() = default;
        Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), used(0), cost(cost), idx(idx) {}
        bool operator<(const Edge& o) const{return cost<o.cost;}
    };
    vector<Edge> es;
    void add_edge(int u, int v, T c) {
        es.emplace_back(u, v, c);
    }
    T build() {
        sort(es.begin(), es.end());
        T res = 0;
        for(auto &e : es) {
            if(same(e.from, e.to)) continue;
            unite(e.from, e.to);
            res += e.cost;
            e.used = 1;
        }
        return res;
    }
};
