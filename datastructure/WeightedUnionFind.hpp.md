---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: WeightedUnionFind
    links: []
  bundledCode: "#line 2 \"datastructure/WeightedUnionFind.hpp\"\n/**\n * @brief WeightedUnionFind\n\
    **/\n#include <bits/stdc++.h>\ntemplate <typename T>\nstruct WeightedUnionFind{\n\
    \  private :\n    vector<int> rs,ps;\n    vector<T> ws;\n  public :\n    WeightedUnionFind(int\
    \ n):rs(n,1),ps(n),ws(n,T(0)){\n      iota(ps.begin(),ps.end(),0);\n    }\n  \
    \  int find(int x){\n      if(x==ps[x]) return x;\n      int t=find(ps[x]);\n\
    \      ws[x]+=ws[ps[x]];\n      return ps[x]=t;\n    }\n\n    T weight(int x){\n\
    \      find(x);\n      return ws[x];\n    }\n\n    bool same(int x,int y){\n \
    \     return find(x)==find(y);\n    }\n\n    void unite(int x,int y,T w){\n  \
    \    w+=weight(x);\n      w-=weight(y);\n      x=find(x);y=find(y);\n      if(x==y)\
    \ return;\n      if(rs[x]<rs[y]) swap(x,y),w=-w;\n      rs[x]+=rs[y];\n      ps[y]=x;\n\
    \      ws[y]=w;\n    }\n\n    T diff(int x,int y){\n      return weight(y)-weight(x);\n\
    \    }\n};\n"
  code: "#pragma once\n/**\n * @brief WeightedUnionFind\n**/\n#include <bits/stdc++.h>\n\
    template <typename T>\nstruct WeightedUnionFind{\n  private :\n    vector<int>\
    \ rs,ps;\n    vector<T> ws;\n  public :\n    WeightedUnionFind(int n):rs(n,1),ps(n),ws(n,T(0)){\n\
    \      iota(ps.begin(),ps.end(),0);\n    }\n    int find(int x){\n      if(x==ps[x])\
    \ return x;\n      int t=find(ps[x]);\n      ws[x]+=ws[ps[x]];\n      return ps[x]=t;\n\
    \    }\n\n    T weight(int x){\n      find(x);\n      return ws[x];\n    }\n\n\
    \    bool same(int x,int y){\n      return find(x)==find(y);\n    }\n\n    void\
    \ unite(int x,int y,T w){\n      w+=weight(x);\n      w-=weight(y);\n      x=find(x);y=find(y);\n\
    \      if(x==y) return;\n      if(rs[x]<rs[y]) swap(x,y),w=-w;\n      rs[x]+=rs[y];\n\
    \      ps[y]=x;\n      ws[y]=w;\n    }\n\n    T diff(int x,int y){\n      return\
    \ weight(y)-weight(x);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/WeightedUnionFind.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: datastructure/WeightedUnionFind.hpp
layout: document
redirect_from:
- /library/datastructure/WeightedUnionFind.hpp
- /library/datastructure/WeightedUnionFind.hpp.html
title: WeightedUnionFind
---
