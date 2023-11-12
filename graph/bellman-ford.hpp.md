---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template.hpp
    title: Graph Template
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/bellman-ford.md
    document_title: Bellman-Ford
    links: []
  bundledCode: "#line 2 \"graph/bellman-ford.hpp\"\n\n#line 2 \"graph/graph-template.hpp\"\
    \n\n/**\n * @brief Graph Template\n */\ntemplate< typename T = int >\nstruct Edge\
    \ {\n  int from, to;\n  T cost;\n  int idx;\n  Edge() = default;\n  Edge(int from,\
    \ int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx)\
    \ {}\n  operator int() const { return to; }\n};\ntemplate< typename T = int >\n\
    struct Graph {\n  vector< vector< Edge< T > > > g;\n  int es;\n  Graph() = default;\n\
    \  explicit Graph(int n) : g(n), es(0) {}\n  size_t size() const {\n    return\
    \ g.size();\n  }\n  void add_directed_edge(int from, int to, T cost = 1) {\n \
    \   g[from].emplace_back(from, to, cost, es++);\n  }\n  void add_edge(int from,\
    \ int to, T cost = 1) {\n    g[from].emplace_back(from, to, cost, es);\n    g[to].emplace_back(to,\
    \ from, cost, es++);\n  }\n  void read(int M, int padding = -1, bool weighted\
    \ = false, bool directed = false) {\n    for(int i = 0; i < M; i++) {\n      int\
    \ a, b;\n      cin >> a >> b;\n      a += padding;\n      b += padding;\n    \
    \  T c = T(1);\n      if(weighted) cin >> c;\n      if(directed) add_directed_edge(a,\
    \ b, c);\n      else add_edge(a, b, c);\n    }\n  }\n  inline vector< Edge< T\
    \ > > &operator[](const int &k) {\n    return g[k];\n  }\n  inline const vector<\
    \ Edge< T > > &operator[](const int &k) const {\n    return g[k];\n  }\n};\ntemplate<\
    \ typename T = int >\nusing Edges = vector< Edge< T > >;\n#line 4 \"graph/bellman-ford.hpp\"\
    \n\n/**\n * @brief Bellman-Ford\n * @docs docs/bellman-ford.md\n */\ntemplate<\
    \ typename T >\nvector< T > bellman_ford(const Edges< T > &edges, int V, int s)\
    \ {\n  const auto INF = numeric_limits< T >::max();\n  vector< T > dist(V, INF);\n\
    \  dist[s] = 0;\n  for(int i = 0; i < V - 1; i++) {\n    for(auto &e : edges)\
    \ {\n      if(dist[e.from] == INF) continue;\n      dist[e.to] = min(dist[e.to],\
    \ dist[e.from] + e.cost);\n    }\n  }\n  for(auto &e : edges) {\n    if(dist[e.from]\
    \ == INF) continue;\n    if(dist[e.from] + e.cost < dist[e.to]) return vector<\
    \ T >();\n  }\n  return dist;\n}\n"
  code: "#pragma once\n\n#include \"graph/graph-template.hpp\"\n\n/**\n * @brief Bellman-Ford\n\
    \ * @docs docs/bellman-ford.md\n */\ntemplate< typename T >\nvector< T > bellman_ford(const\
    \ Edges< T > &edges, int V, int s) {\n  const auto INF = numeric_limits< T >::max();\n\
    \  vector< T > dist(V, INF);\n  dist[s] = 0;\n  for(int i = 0; i < V - 1; i++)\
    \ {\n    for(auto &e : edges) {\n      if(dist[e.from] == INF) continue;\n   \
    \   dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);\n    }\n  }\n  for(auto\
    \ &e : edges) {\n    if(dist[e.from] == INF) continue;\n    if(dist[e.from] +\
    \ e.cost < dist[e.to]) return vector< T >();\n  }\n  return dist;\n}"
  dependsOn:
  - graph/graph-template.hpp
  isVerificationFile: false
  path: graph/bellman-ford.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/bellman-ford.hpp
layout: document
redirect_from:
- /library/graph/bellman-ford.hpp
- /library/graph/bellman-ford.hpp.html
title: Bellman-Ford
---
