---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: graph/bellman-ford.hpp
    title: Bellman-Ford
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: Dijkstra
  - icon: ':heavy_check_mark:'
    path: graph/lca.hpp
    title: LCA
  - icon: ':warning:'
    path: graph/topo_sort.hpp
    title: graph/topo_sort.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/GRL_5_C.test.cpp
    title: tests/aoj/GRL_5_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/dijkstra.test.cpp
    title: tests/aoj/dijkstra.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/lca.test.cpp
    title: tests/yosupo/lca.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/shortest_path.test.cpp
    title: tests/yosupo/shortest_path.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Graph Template
    links: []
  bundledCode: "#line 2 \"graph/graph-template.hpp\"\n\n/**\n * @brief Graph Template\n\
    \ */\ntemplate< typename T = int >\nstruct Edge {\n  int from, to;\n  T cost;\n\
    \  int idx;\n  Edge() = default;\n  Edge(int from, int to, T cost = 1, int idx\
    \ = -1) : from(from), to(to), cost(cost), idx(idx) {}\n  operator int() const\
    \ { return to; }\n};\ntemplate< typename T = int >\nstruct Graph {\n  vector<\
    \ vector< Edge< T > > > g;\n  int es;\n  Graph() = default;\n  explicit Graph(int\
    \ n) : g(n), es(0) {}\n  size_t size() const {\n    return g.size();\n  }\n  void\
    \ add_directed_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from,\
    \ to, cost, es++);\n  }\n  void add_edge(int from, int to, T cost = 1) {\n   \
    \ g[from].emplace_back(from, to, cost, es);\n    g[to].emplace_back(to, from,\
    \ cost, es++);\n  }\n  void read(int M, int padding = -1, bool weighted = false,\
    \ bool directed = false) {\n    for(int i = 0; i < M; i++) {\n      int a, b;\n\
    \      cin >> a >> b;\n      a += padding;\n      b += padding;\n      T c = T(1);\n\
    \      if(weighted) cin >> c;\n      if(directed) add_directed_edge(a, b, c);\n\
    \      else add_edge(a, b, c);\n    }\n  }\n  inline vector< Edge< T > > &operator[](const\
    \ int &k) {\n    return g[k];\n  }\n  inline const vector< Edge< T > > &operator[](const\
    \ int &k) const {\n    return g[k];\n  }\n};\ntemplate< typename T = int >\nusing\
    \ Edges = vector< Edge< T > >;\n"
  code: "#pragma once\n\n/**\n * @brief Graph Template\n */\ntemplate< typename T\
    \ = int >\nstruct Edge {\n  int from, to;\n  T cost;\n  int idx;\n  Edge() = default;\n\
    \  Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost),\
    \ idx(idx) {}\n  operator int() const { return to; }\n};\ntemplate< typename T\
    \ = int >\nstruct Graph {\n  vector< vector< Edge< T > > > g;\n  int es;\n  Graph()\
    \ = default;\n  explicit Graph(int n) : g(n), es(0) {}\n  size_t size() const\
    \ {\n    return g.size();\n  }\n  void add_directed_edge(int from, int to, T cost\
    \ = 1) {\n    g[from].emplace_back(from, to, cost, es++);\n  }\n  void add_edge(int\
    \ from, int to, T cost = 1) {\n    g[from].emplace_back(from, to, cost, es);\n\
    \    g[to].emplace_back(to, from, cost, es++);\n  }\n  void read(int M, int padding\
    \ = -1, bool weighted = false, bool directed = false) {\n    for(int i = 0; i\
    \ < M; i++) {\n      int a, b;\n      cin >> a >> b;\n      a += padding;\n  \
    \    b += padding;\n      T c = T(1);\n      if(weighted) cin >> c;\n      if(directed)\
    \ add_directed_edge(a, b, c);\n      else add_edge(a, b, c);\n    }\n  }\n  inline\
    \ vector< Edge< T > > &operator[](const int &k) {\n    return g[k];\n  }\n  inline\
    \ const vector< Edge< T > > &operator[](const int &k) const {\n    return g[k];\n\
    \  }\n};\ntemplate< typename T = int >\nusing Edges = vector< Edge< T > >;"
  dependsOn: []
  isVerificationFile: false
  path: graph/graph-template.hpp
  requiredBy:
  - graph/bellman-ford.hpp
  - graph/dijkstra.hpp
  - graph/topo_sort.hpp
  - graph/lca.hpp
  timestamp: '2023-02-05 22:51:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/shortest_path.test.cpp
  - tests/yosupo/lca.test.cpp
  - tests/aoj/dijkstra.test.cpp
  - tests/aoj/GRL_5_C.test.cpp
documentation_of: graph/graph-template.hpp
layout: document
title: Graph Template
---

## 説明

グラフのテンプレートです。無向、有向グラフどちらも使えます。