#pragma once
//#include "graph/graph-template.hpp"

template<class T>
struct LCA {
    vector<vector<int>> parent;
    vector<int> depth; // dist from root
    LCA(const Graph<T> &g, int root = 0) {init(g, root);};
    void init(const Graph<T> &g, int root = 0) {
        int V = g.size();
        int K = 1;
        while((1 << K) < V) K++;
        parent.assign(K, vector<int>(V, -1));
        depth.assign(V, -1);
        dfs(g, root, -1, 0);
        rep(i, K - 1) rep(j, V) {
            if(parent[i][j] < 0) {
                parent[i + 1][j] = -1;
            } else {
                parent[i + 1][j] = parent[i][parent[i][j]];
            }
        }
    }
    void dfs(const Graph<T> &g, int v, int p, int d) {
        parent[0][v] = p;
        depth[v] = d;
        for(auto e : g[v]) if(e.to != p) {
            dfs(g, e.to, v, d + 1);
        }
    }
    int lca(int u, int v) {
        if(depth[u] < depth[v]) swap(u, v);
        int K = parent.size();
        rep(i, K) if(depth[u]-depth[v] & 1 << i) u = parent[i][u];
        if(u == v) return u;
        for(int i = K - 1; i >= 0; i--) {
            if(parent[i][u] != parent[i][v]) {
                u = parent[i][u];
                v = parent[i][v];
            }
        }
        return parent[0][u];
    }
    int dist(int u, int v) {
        return depth[u] + depth[v] - 2 * depth[lca(u, v)];
    }
    bool is_on_pass(int u, int v, int a) {
        return (dist(u, v) == dist(u, a) + dist(a, v));
    }
};