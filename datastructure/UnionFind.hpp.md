---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: UnionFind
    links: []
  bundledCode: "#line 2 \"datastructure/UnionFind.hpp\"\n/**\n * @brief UnionFind\n\
    **/\nstruct UnionFind {\n    private :\n    int n, cnt;\n    vector<int> ps, sz;\n\
    \n    public :\n    UnionFind(int n) : n(n), cnt(n), ps(n,0), sz(n,1) {\n    \
    \    for(int i = 0; i < n; ++i) ps[i] = i;\n    }\n    int leader(int x) {\n \
    \       return (ps[x] == x ? x : ps[x] = leader(ps[x]));\n    }\n    bool same(int\
    \ x, int y) {\n        return leader(x) == leader(y);\n    }\n    int unite(int\
    \ x, int y) {\n        x = leader(x); y = leader(y);\n        if(x == y) return\
    \ x;\n        if(sz[x] < sz[y]) swap(x, y);\n        sz[x] += sz[y];\n       \
    \ ps[y] = x;\n        cnt--;\n        return x;\n    }\n    int size(int x) {\n\
    \        return sz[leader(x)];\n    }\n    vector<vector<int>> groups() {\n  \
    \      vector<vector<int>> res(n);\n        for(int i = 0; i < n; ++i) res[leader(i)].push_back(i);\n\
    \        res.erase(remove_if(res.begin(), res.end(), [&](const vector<int>& v)\
    \ {return v.empty();}), res.end());\n        return res;\n    }\n    int count()\
    \ const {\n        return cnt;\n    }\n};\n"
  code: "#pragma once\n/**\n * @brief UnionFind\n**/\nstruct UnionFind {\n    private\
    \ :\n    int n, cnt;\n    vector<int> ps, sz;\n\n    public :\n    UnionFind(int\
    \ n) : n(n), cnt(n), ps(n,0), sz(n,1) {\n        for(int i = 0; i < n; ++i) ps[i]\
    \ = i;\n    }\n    int leader(int x) {\n        return (ps[x] == x ? x : ps[x]\
    \ = leader(ps[x]));\n    }\n    bool same(int x, int y) {\n        return leader(x)\
    \ == leader(y);\n    }\n    int unite(int x, int y) {\n        x = leader(x);\
    \ y = leader(y);\n        if(x == y) return x;\n        if(sz[x] < sz[y]) swap(x,\
    \ y);\n        sz[x] += sz[y];\n        ps[y] = x;\n        cnt--;\n        return\
    \ x;\n    }\n    int size(int x) {\n        return sz[leader(x)];\n    }\n   \
    \ vector<vector<int>> groups() {\n        vector<vector<int>> res(n);\n      \
    \  for(int i = 0; i < n; ++i) res[leader(i)].push_back(i);\n        res.erase(remove_if(res.begin(),\
    \ res.end(), [&](const vector<int>& v) {return v.empty();}), res.end());\n   \
    \     return res;\n    }\n    int count() const {\n        return cnt;\n    }\n\
    };"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/UnionFind.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
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