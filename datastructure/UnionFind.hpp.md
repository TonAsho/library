---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/Kruskal.hpp
    title: Kruskal
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/GRL_2_A.test.cpp
    title: tests/aoj/GRL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/unionfind.test.cpp
    title: tests/yosupo/unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: UnionFind
    links: []
  bundledCode: "#line 2 \"datastructure/UnionFind.hpp\"\n#include <bits/stdc++.h>\n\
    /**\n * @brief UnionFind\n**/\nstruct UnionFind {\nprivate :\n    int n, cnt;\n\
    \    std::vector<int> ps, sz;\n\npublic :\n    UnionFind(int n) : n(n), cnt(n),\
    \ ps(n,0), sz(n,1) {\n        for(int i = 0; i < n; ++i) ps[i] = i;\n    }\n \
    \   int leader(int x) {\n        return (ps[x] == x ? x : ps[x] = leader(ps[x]));\n\
    \    }\n    bool same(int x, int y) {\n        return leader(x) == leader(y);\n\
    \    }\n    int unite(int x, int y) {\n        x = leader(x); y = leader(y);\n\
    \        if(x == y) return x;\n        if(sz[x] < sz[y]) swap(x, y);\n       \
    \ sz[x] += sz[y];\n        ps[y] = x;\n        cnt--;\n        return x;\n   \
    \ }\n    int size(int x) {\n        return sz[leader(x)];\n    }\n    std::vector<std::vector<int>>\
    \ groups() {\n        std::vector<std::vector<int>> res(n);\n        for(int i\
    \ = 0; i < n; ++i) res[leader(i)].push_back(i);\n        res.erase(std::remove_if(res.begin(),\
    \ res.end(), [&](const std::vector<int>& v) {return v.empty();}), res.end());\n\
    \        return res;\n    }\n    int count() const {\n        return cnt;\n  \
    \  }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n/**\n * @brief UnionFind\n**/\nstruct\
    \ UnionFind {\nprivate :\n    int n, cnt;\n    std::vector<int> ps, sz;\n\npublic\
    \ :\n    UnionFind(int n) : n(n), cnt(n), ps(n,0), sz(n,1) {\n        for(int\
    \ i = 0; i < n; ++i) ps[i] = i;\n    }\n    int leader(int x) {\n        return\
    \ (ps[x] == x ? x : ps[x] = leader(ps[x]));\n    }\n    bool same(int x, int y)\
    \ {\n        return leader(x) == leader(y);\n    }\n    int unite(int x, int y)\
    \ {\n        x = leader(x); y = leader(y);\n        if(x == y) return x;\n   \
    \     if(sz[x] < sz[y]) swap(x, y);\n        sz[x] += sz[y];\n        ps[y] =\
    \ x;\n        cnt--;\n        return x;\n    }\n    int size(int x) {\n      \
    \  return sz[leader(x)];\n    }\n    std::vector<std::vector<int>> groups() {\n\
    \        std::vector<std::vector<int>> res(n);\n        for(int i = 0; i < n;\
    \ ++i) res[leader(i)].push_back(i);\n        res.erase(std::remove_if(res.begin(),\
    \ res.end(), [&](const std::vector<int>& v) {return v.empty();}), res.end());\n\
    \        return res;\n    }\n    int count() const {\n        return cnt;\n  \
    \  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/UnionFind.hpp
  requiredBy:
  - graph/Kruskal.hpp
  timestamp: '2023-12-03 11:28:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/unionfind.test.cpp
  - tests/aoj/GRL_2_A.test.cpp
documentation_of: datastructure/UnionFind.hpp
layout: document
title: UnionFind
---
# 使い方
### unite
```c++
int unite(int x, int y)
```
辺(x, y)を追加する.<br>
新たな代表元を返す.<br>
### same
```c++
bool same(int x, int y)
```
頂点x, yが連結かどうか返す.
### leader
```c++
int leader(int x)
```
頂点xの属する連結成分の代表元を返す.
### size
```c++
int size(int x)
```
頂点xの属する連結成分のサイズを返す.
### groups
```c++
vector<vector<int>> groups()
```
グラフを連結成分に分け、それぞれの頂点集合を返す.