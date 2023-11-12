---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/lca.hpp\"\n//#include \"graph/graph-template.hpp\"\
    \n\ntemplate<class T>\nstruct LCA {\n    vector<vector<int>> parent;\n    vector<int>\
    \ depth; // dist from root\n    LCA(const Graph<T> &g, int root = 0) {init(g,\
    \ root);};\n    void init(const Graph<T> &g, int root = 0) {\n        int V =\
    \ g.size();\n        int K = 1;\n        while((1 << K) < V) K++;\n        parent.assign(K,\
    \ vector<int>(V, -1));\n        depth.assign(V, -1);\n        dfs(g, root, -1,\
    \ 0);\n        rep(i, K - 1) rep(j, V) {\n            if(parent[i][j] < 0) {\n\
    \                parent[i + 1][j] = -1;\n            } else {\n              \
    \  parent[i + 1][j] = parent[i][parent[i][j]];\n            }\n        }\n   \
    \ }\n    void dfs(const Graph<T> &g, int v, int p, int d) {\n        parent[0][v]\
    \ = p;\n        depth[v] = d;\n        for(auto e : g[v]) if(e.to != p) {\n  \
    \          dfs(g, e.to, v, d + 1);\n        }\n    }\n    int lca(int u, int v)\
    \ {\n        if(depth[u] < depth[v]) swap(u, v);\n        int K = parent.size();\n\
    \        rep(i, K) if(depth[u]-depth[v] & 1 << i) u = parent[i][u];\n        if(u\
    \ == v) return u;\n        for(int i = K - 1; i >= 0; i--) {\n            if(parent[i][u]\
    \ != parent[i][v]) {\n                u = parent[i][u];\n                v = parent[i][v];\n\
    \            }\n        }\n        return parent[0][u];\n    }\n    int dist(int\
    \ u, int v) {\n        return depth[u] + depth[v] - 2 * depth[lca(u, v)];\n  \
    \  }\n    bool is_on_pass(int u, int v, int a) {\n        return (dist(u, v) ==\
    \ dist(u, a) + dist(a, v));\n    }\n};\n"
  code: "#pragma once\n//#include \"graph/graph-template.hpp\"\n\ntemplate<class T>\n\
    struct LCA {\n    vector<vector<int>> parent;\n    vector<int> depth; // dist\
    \ from root\n    LCA(const Graph<T> &g, int root = 0) {init(g, root);};\n    void\
    \ init(const Graph<T> &g, int root = 0) {\n        int V = g.size();\n       \
    \ int K = 1;\n        while((1 << K) < V) K++;\n        parent.assign(K, vector<int>(V,\
    \ -1));\n        depth.assign(V, -1);\n        dfs(g, root, -1, 0);\n        rep(i,\
    \ K - 1) rep(j, V) {\n            if(parent[i][j] < 0) {\n                parent[i\
    \ + 1][j] = -1;\n            } else {\n                parent[i + 1][j] = parent[i][parent[i][j]];\n\
    \            }\n        }\n    }\n    void dfs(const Graph<T> &g, int v, int p,\
    \ int d) {\n        parent[0][v] = p;\n        depth[v] = d;\n        for(auto\
    \ e : g[v]) if(e.to != p) {\n            dfs(g, e.to, v, d + 1);\n        }\n\
    \    }\n    int lca(int u, int v) {\n        if(depth[u] < depth[v]) swap(u, v);\n\
    \        int K = parent.size();\n        rep(i, K) if(depth[u]-depth[v] & 1 <<\
    \ i) u = parent[i][u];\n        if(u == v) return u;\n        for(int i = K -\
    \ 1; i >= 0; i--) {\n            if(parent[i][u] != parent[i][v]) {\n        \
    \        u = parent[i][u];\n                v = parent[i][v];\n            }\n\
    \        }\n        return parent[0][u];\n    }\n    int dist(int u, int v) {\n\
    \        return depth[u] + depth[v] - 2 * depth[lca(u, v)];\n    }\n    bool is_on_pass(int\
    \ u, int v, int a) {\n        return (dist(u, v) == dist(u, a) + dist(a, v));\n\
    \    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: graph/lca.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/lca.hpp
layout: document
redirect_from:
- /library/graph/lca.hpp
- /library/graph/lca.hpp.html
title: graph/lca.hpp
---
