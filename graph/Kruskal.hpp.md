---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: datastructure/UnionFind.hpp
    title: UnionFind
  - icon: ':heavy_check_mark:'
    path: graph/graph-template.hpp
    title: Graph Template
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/GRL_2_A.test.cpp
    title: tests/aoj/GRL_2_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
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
    \ Edges = vector< Edge< T > >;\n#line 2 \"datastructure/UnionFind.hpp\"\n/**\n\
    \ * @brief UnionFind\n**/\nstruct UnionFind {\n    private :\n    int n, cnt;\n\
    \    vector<int> ps, sz;\n\n    public :\n    UnionFind(int n) : n(n), cnt(n),\
    \ ps(n,0), sz(n,1) {\n        for(int i = 0; i < n; ++i) ps[i] = i;\n    }\n \
    \   int leader(int x) {\n        return (ps[x] == x ? x : ps[x] = leader(ps[x]));\n\
    \    }\n    bool same(int x, int y) {\n        return leader(x) == leader(y);\n\
    \    }\n    int unite(int x, int y) {\n        x = leader(x); y = leader(y);\n\
    \        if(x == y) return x;\n        if(sz[x] < sz[y]) swap(x, y);\n       \
    \ sz[x] += sz[y];\n        ps[y] = x;\n        cnt--;\n        return x;\n   \
    \ }\n    int size(int x) {\n        return sz[leader(x)];\n    }\n    vector<vector<int>>\
    \ groups() {\n        vector<vector<int>> res(n);\n        for(int i = 0; i <\
    \ n; ++i) res[leader(i)].push_back(i);\n        res.erase(remove_if(res.begin(),\
    \ res.end(), [&](const vector<int>& v) {return v.empty();}), res.end());\n   \
    \     return res;\n    }\n    int count() const {\n        return cnt;\n    }\n\
    };\n#line 4 \"graph/Kruskal.hpp\"\n\ntemplate< typename T >\nstruct MinimumSpanningTree\
    \ {\n  T cost;\n  Edges< T > edges;\n};\n\ntemplate< typename T >\nMinimumSpanningTree<\
    \ T > kruskal(Edges< T > &edges, int N) {\n  sort(begin(edges), end(edges), [](const\
    \ Edge< T > &a, const Edge< T > &b) {\n    return a.cost < b.cost;\n  });\n  UnionFind\
    \ tree(N);\n  T total = T();\n  Edges< T > es;\n  for(auto &e : edges) {\n   \
    \ if(!tree.same(e.from, e.to)) {\n        tree.unite(e.from, e.to);\n        es.emplace_back(e);\n\
    \        total += e.cost;\n    }\n  }\n  return {total, es};\n}\n"
  code: "#pragma once\n#include \"graph-template.hpp\"\n#include \"datastructure/UnionFind.hpp\"\
    \n\ntemplate< typename T >\nstruct MinimumSpanningTree {\n  T cost;\n  Edges<\
    \ T > edges;\n};\n\ntemplate< typename T >\nMinimumSpanningTree< T > kruskal(Edges<\
    \ T > &edges, int N) {\n  sort(begin(edges), end(edges), [](const Edge< T > &a,\
    \ const Edge< T > &b) {\n    return a.cost < b.cost;\n  });\n  UnionFind tree(N);\n\
    \  T total = T();\n  Edges< T > es;\n  for(auto &e : edges) {\n    if(!tree.same(e.from,\
    \ e.to)) {\n        tree.unite(e.from, e.to);\n        es.emplace_back(e);\n \
    \       total += e.cost;\n    }\n  }\n  return {total, es};\n}"
  dependsOn:
  - graph/graph-template.hpp
  - datastructure/UnionFind.hpp
  isVerificationFile: false
  path: graph/Kruskal.hpp
  requiredBy: []
  timestamp: '2023-11-12 15:03:31+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/aoj/GRL_2_A.test.cpp
documentation_of: graph/Kruskal.hpp
layout: document
redirect_from:
- /library/graph/Kruskal.hpp
- /library/graph/Kruskal.hpp.html
title: graph/Kruskal.hpp
---
