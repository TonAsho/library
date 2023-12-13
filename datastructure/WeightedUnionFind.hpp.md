---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_1_B.test.cpp
    title: tests/aoj/DSL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: WeightedUnionFind
    links: []
  bundledCode: "#line 2 \"datastructure/WeightedUnionFind.hpp\"\n/**\n * @brief WeightedUnionFind\n\
    **/\ntemplate <typename T>\nstruct WeightedUnionFind{\n  private :\n    int n,\
    \ cnt;\n    std::vector<int> ps, sz;\n    std::vector<T> ws;\n\n  public :\n \
    \   WeightedUnionFind(int n) : n(n), cnt(n), ps(n,0), sz(n,1), ws(n,0) {\n   \
    \     for(int i = 0; i < n; ++i) ps[i] = i;\n    }\n    int leader(int x) {\n\
    \        if(x == ps[x]) return x;\n        int t = leader(ps[x]);\n        ws[x]\
    \ += ws[ps[x]];\n        return ps[x] = t;\n    }\n    T weight(int x) {\n   \
    \     leader(x);\n        return ws[x];\n    }\n    T diff(int x, int y) {\n \
    \       return weight(y) - weight(x);\n    }\n    bool same(int x, int y) {\n\
    \        return leader(x) == leader(y);\n    }\n    int unite(int x, int y, T\
    \ w) {\n        w += weight(x); w -= weight(y);\n        x = leader(x); y = leader(y);\n\
    \        if(x == y) return x;\n        if(sz[x] < sz[y]) swap(x, y), w = -w;\n\
    \        sz[x] += sz[y];\n        ps[y] = x;\n        ws[y] = w;\n        cnt--;\n\
    \        return x;\n    }\n    int size(int x) {\n        return sz[leader(x)];\n\
    \    }\n    std::vector<std::vector<int>> groups() {\n        std::vector<std::vector<int>>\
    \ res(n);\n        for(int i = 0; i < n; ++i) res[leader(i)].push_back(i);\n \
    \       res.erase(std::remove_if(res.begin(), res.end(), [&](const std::vector<int>&\
    \ v) {return v.empty();}), res.end());\n        return res;\n    }\n    int count()\
    \ const {\n        return cnt;\n    }\n};\n"
  code: "#pragma once\n/**\n * @brief WeightedUnionFind\n**/\ntemplate <typename T>\n\
    struct WeightedUnionFind{\n  private :\n    int n, cnt;\n    std::vector<int>\
    \ ps, sz;\n    std::vector<T> ws;\n\n  public :\n    WeightedUnionFind(int n)\
    \ : n(n), cnt(n), ps(n,0), sz(n,1), ws(n,0) {\n        for(int i = 0; i < n; ++i)\
    \ ps[i] = i;\n    }\n    int leader(int x) {\n        if(x == ps[x]) return x;\n\
    \        int t = leader(ps[x]);\n        ws[x] += ws[ps[x]];\n        return ps[x]\
    \ = t;\n    }\n    T weight(int x) {\n        leader(x);\n        return ws[x];\n\
    \    }\n    T diff(int x, int y) {\n        return weight(y) - weight(x);\n  \
    \  }\n    bool same(int x, int y) {\n        return leader(x) == leader(y);\n\
    \    }\n    int unite(int x, int y, T w) {\n        w += weight(x); w -= weight(y);\n\
    \        x = leader(x); y = leader(y);\n        if(x == y) return x;\n       \
    \ if(sz[x] < sz[y]) swap(x, y), w = -w;\n        sz[x] += sz[y];\n        ps[y]\
    \ = x;\n        ws[y] = w;\n        cnt--;\n        return x;\n    }\n    int\
    \ size(int x) {\n        return sz[leader(x)];\n    }\n    std::vector<std::vector<int>>\
    \ groups() {\n        std::vector<std::vector<int>> res(n);\n        for(int i\
    \ = 0; i < n; ++i) res[leader(i)].push_back(i);\n        res.erase(std::remove_if(res.begin(),\
    \ res.end(), [&](const std::vector<int>& v) {return v.empty();}), res.end());\n\
    \        return res;\n    }\n    int count() const {\n        return cnt;\n  \
    \  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/WeightedUnionFind.hpp
  requiredBy: []
  timestamp: '2023-12-13 17:49:19+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/aoj/DSL_1_B.test.cpp
documentation_of: datastructure/WeightedUnionFind.hpp
layout: document
redirect_from:
- /library/datastructure/WeightedUnionFind.hpp
- /library/datastructure/WeightedUnionFind.hpp.html
title: WeightedUnionFind
---
