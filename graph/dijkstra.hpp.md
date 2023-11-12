---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template.hpp
    title: Graph Template
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/dijkstra.test.cpp
    title: tests/dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Dijkstra
    links: []
  bundledCode: "#line 2 \"graph/dijkstra.hpp\"\n\n#line 2 \"graph/graph-template.hpp\"\
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
    \ typename T = int >\nusing Edges = vector< Edge< T > >;\n#line 4 \"graph/dijkstra.hpp\"\
    \n\n/**\n * @brief Dijkstra\n */\ntemplate< typename T >\nstruct ShortestPath\
    \ {\n  vector< T > dist;\n  vector< int > from, id;\n};\n\ntemplate< typename\
    \ T >\nShortestPath< T > dijkstra(const Graph< T > &g, int s, ll INF_NUM) {\n\
    \  vector< T > dist(g.size(), INF_NUM);\n  vector< int > from(g.size(), -1), id(g.size(),\
    \ -1);\n  using Pi = pair< T, int >;\n  priority_queue< Pi, vector< Pi >, greater<>\
    \ > que;\n  dist[s] = 0;\n  que.emplace(dist[s], s);\n  while(!que.empty()) {\n\
    \    T cost;\n    int idx;\n    tie(cost, idx) = que.top();\n    que.pop();\n\
    \    if(dist[idx] < cost) continue;\n    for(auto &e : g[idx]) {\n      auto next_cost\
    \ = cost + e.cost;\n      if(dist[e.to] <= next_cost) continue;\n      dist[e.to]\
    \ = next_cost;\n      from[e.to] = idx;\n      id[e.to] = e.idx;\n      que.emplace(dist[e.to],\
    \ e.to);\n    }\n  }\n  return {dist, from, id};\n}\n"
  code: "#pragma once\n\n#include \"graph-template.hpp\"\n\n/**\n * @brief Dijkstra\n\
    \ */\ntemplate< typename T >\nstruct ShortestPath {\n  vector< T > dist;\n  vector<\
    \ int > from, id;\n};\n\ntemplate< typename T >\nShortestPath< T > dijkstra(const\
    \ Graph< T > &g, int s, ll INF_NUM) {\n  vector< T > dist(g.size(), INF_NUM);\n\
    \  vector< int > from(g.size(), -1), id(g.size(), -1);\n  using Pi = pair< T,\
    \ int >;\n  priority_queue< Pi, vector< Pi >, greater<> > que;\n  dist[s] = 0;\n\
    \  que.emplace(dist[s], s);\n  while(!que.empty()) {\n    T cost;\n    int idx;\n\
    \    tie(cost, idx) = que.top();\n    que.pop();\n    if(dist[idx] < cost) continue;\n\
    \    for(auto &e : g[idx]) {\n      auto next_cost = cost + e.cost;\n      if(dist[e.to]\
    \ <= next_cost) continue;\n      dist[e.to] = next_cost;\n      from[e.to] = idx;\n\
    \      id[e.to] = e.idx;\n      que.emplace(dist[e.to], e.to);\n    }\n  }\n \
    \ return {dist, from, id};\n}"
  dependsOn:
  - graph/graph-template.hpp
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/dijkstra.test.cpp
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: Dijkstra
---
