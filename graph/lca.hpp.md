---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template.hpp
    title: Graph Template
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/GRL_5_C.test.cpp
    title: tests/aoj/GRL_5_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/lca.test.cpp
    title: tests/yosupo/lca.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: LCA
    links: []
  bundledCode: "#line 2 \"graph/lca.hpp\"\n/**\n * @brief LCA\n */\n#line 2 \"graph/graph-template.hpp\"\
    \n\n/**\n * @brief Graph Template\n */\ntemplate< typename T = int >\nstruct Edge\
    \ {\n    int from, to;\n    T cost;\n    int idx;\n    Edge() = default;\n   \
    \ Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost),\
    \ idx(idx) {}\n    operator int() const { return to; }\n    bool operator<(const\
    \ Edge& o) const{return cost<o.cost;}\n};\ntemplate< typename T = int >\nstruct\
    \ Graph {\n    vector< vector< Edge< T > > > g;\n    int es;\n    Graph() = default;\n\
    \    explicit Graph(int n) : g(n), es(0) {}\n    size_t size() const {\n     \
    \   return g.size();\n    }\n    void add_directed_edge(int from, int to, T cost\
    \ = 1) {\n        g[from].emplace_back(from, to, cost, es++);\n    }\n    void\
    \ add_edge(int from, int to, T cost = 1) {\n        g[from].emplace_back(from,\
    \ to, cost, es);\n        g[to].emplace_back(to, from, cost, es++);\n    }\n \
    \   void read(int M, int padding = -1, bool weighted = false, bool directed =\
    \ false) {\n        for(int i = 0; i < M; i++) {\n        int a, b;\n        cin\
    \ >> a >> b;\n        a += padding;\n        b += padding;\n        T c = T(1);\n\
    \        if(weighted) cin >> c;\n        if(directed) add_directed_edge(a, b,\
    \ c);\n        else add_edge(a, b, c);\n        }\n    }\n    inline vector< Edge<\
    \ T > > &operator[](const int &k) {\n        return g[k];\n    }\n    inline const\
    \ vector< Edge< T > > &operator[](const int &k) const {\n        return g[k];\n\
    \    }\n};\ntemplate< typename T = int >\nusing Edges = vector< Edge< T > >;\n\
    #line 6 \"graph/lca.hpp\"\n\ntemplate<class T>\nstruct LCA : Graph<T> {\n  private:\n\
    \    std::vector<std::vector<int>> parent;\n    std::vector<int> depth; // dist\
    \ from root\n    void dfs(int v, int p, int d) {\n        parent[0][v] = p;\n\
    \        depth[v] = d;\n        for(auto e : g[v]) if(e.to != p) {\n         \
    \   dfs(e.to, v, d + 1);\n        }\n    }\n  public:\n    using Graph<T>::g;\n\
    \    LCA(int n) : Graph<T>(n) {} \n    void build(int root = 0) {\n        int\
    \ V = g.size();\n        int K = 1;\n        while((1 << K) < V) K++;\n      \
    \  parent.assign(K, vector<int>(V, -1));\n        depth.assign(V, -1);\n     \
    \   dfs(root, -1, 0);\n        rep(i, K - 1) rep(j, V) {\n            if(parent[i][j]\
    \ < 0) {\n                parent[i + 1][j] = -1;\n            } else {\n     \
    \           parent[i + 1][j] = parent[i][parent[i][j]];\n            }\n     \
    \   }\n    }\n    int lca(int u, int v) {\n        if(depth[u] < depth[v]) swap(u,\
    \ v);\n        int K = parent.size();\n        rep(i, K) if(depth[u]-depth[v]\
    \ & 1 << i) u = parent[i][u];\n        if(u == v) return u;\n        for(int i\
    \ = K - 1; i >= 0; i--) {\n            if(parent[i][u] != parent[i][v]) {\n  \
    \              u = parent[i][u];\n                v = parent[i][v];\n        \
    \    }\n        }\n        return parent[0][u];\n    }\n    int dist(int u, int\
    \ v) {\n        return depth[u] + depth[v] - 2 * depth[lca(u, v)];\n    }\n  \
    \  bool is_on_pass(int u, int v, int a) {\n        return (dist(u, v) == dist(u,\
    \ a) + dist(a, v));\n    }\n};\n"
  code: "#pragma once\n/**\n * @brief LCA\n */\n#include \"graph/graph-template.hpp\"\
    \n\ntemplate<class T>\nstruct LCA : Graph<T> {\n  private:\n    std::vector<std::vector<int>>\
    \ parent;\n    std::vector<int> depth; // dist from root\n    void dfs(int v,\
    \ int p, int d) {\n        parent[0][v] = p;\n        depth[v] = d;\n        for(auto\
    \ e : g[v]) if(e.to != p) {\n            dfs(e.to, v, d + 1);\n        }\n   \
    \ }\n  public:\n    using Graph<T>::g;\n    LCA(int n) : Graph<T>(n) {} \n   \
    \ void build(int root = 0) {\n        int V = g.size();\n        int K = 1;\n\
    \        while((1 << K) < V) K++;\n        parent.assign(K, vector<int>(V, -1));\n\
    \        depth.assign(V, -1);\n        dfs(root, -1, 0);\n        rep(i, K - 1)\
    \ rep(j, V) {\n            if(parent[i][j] < 0) {\n                parent[i +\
    \ 1][j] = -1;\n            } else {\n                parent[i + 1][j] = parent[i][parent[i][j]];\n\
    \            }\n        }\n    }\n    int lca(int u, int v) {\n        if(depth[u]\
    \ < depth[v]) swap(u, v);\n        int K = parent.size();\n        rep(i, K) if(depth[u]-depth[v]\
    \ & 1 << i) u = parent[i][u];\n        if(u == v) return u;\n        for(int i\
    \ = K - 1; i >= 0; i--) {\n            if(parent[i][u] != parent[i][v]) {\n  \
    \              u = parent[i][u];\n                v = parent[i][v];\n        \
    \    }\n        }\n        return parent[0][u];\n    }\n    int dist(int u, int\
    \ v) {\n        return depth[u] + depth[v] - 2 * depth[lca(u, v)];\n    }\n  \
    \  bool is_on_pass(int u, int v, int a) {\n        return (dist(u, v) == dist(u,\
    \ a) + dist(a, v));\n    }\n};"
  dependsOn:
  - graph/graph-template.hpp
  isVerificationFile: false
  path: graph/lca.hpp
  requiredBy: []
  timestamp: '2023-12-14 20:01:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/lca.test.cpp
  - tests/aoj/GRL_5_C.test.cpp
documentation_of: graph/lca.hpp
layout: document
redirect_from:
- /library/graph/lca.hpp
- /library/graph/lca.hpp.html
title: LCA
---
