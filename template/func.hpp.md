---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: Template
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/ALDS1_5_D.test.cpp
    title: tests/aoj/ALDS1_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_1_B.test.cpp
    title: tests/aoj/DSL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_2_A.test.cpp
    title: tests/aoj/DSL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_2_B.test.cpp
    title: tests/aoj/DSL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_2_B_2.test.cpp
    title: tests/aoj/DSL_2_B_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/GRL_2_A.test.cpp
    title: tests/aoj/GRL_2_A.test.cpp
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
    path: tests/yosupo/point_add_range_sum.test.cpp
    title: tests/yosupo/point_add_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/point_add_range_sum_2.test.cpp
    title: tests/yosupo/point_add_range_sum_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/shortest_path.test.cpp
    title: tests/yosupo/shortest_path.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/static_range_sum.test.cpp
    title: tests/yosupo/static_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/unionfind.test.cpp
    title: tests/yosupo/unionfind.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yukicoder/599.test.cpp
    title: tests/yukicoder/599.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/func.hpp\"\n#include <bits/stdc++.h>\n\ntemplate<class...\
    \ T>\nconstexpr auto max(T... a){ return max(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<class... T>\nconstexpr auto min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ntemplate<typename T>\nstruct CumulativeSum {\n  private:\
    \    \n    std::vector<T> data;\n    bool sorted = false;\n  public:\n    CumulativeSum(int\
    \ n) : data(n + 1, 0) {}\n    CumulativeSum(const std::vector<T> &v) : data(v.size()\
    \ + 1, 0) {\n        for(int i = 0; i < (int)v.size(); i++) add(i, v[i]);\n  \
    \  }\n    void add(int k, const T &val) { data[k + 1] += val; }\n    void build()\
    \ {\n        assert(!sorted); sorted = true;\n        for(int i = 1; i < (int)data.size();\
    \ i++) data[i] += data[i - 1];\n    }\n    T prod(int r) {\n        assert(sorted);\n\
    \        return (r < 0 ? 0 : data[min(r, (int)data.size() - 1)]);\n    }\n   \
    \ T prod(int l, int r) {\n        assert(sorted);\n        return prod(r) - prod(l);\
    \ \n    }\n};\ninline constexpr bool is_prime(ll n){\n    if(n<=1)return false;\n\
    \    for(ll i=2;i*i<=n;i++){\n        if(n%i==0)return false;\n    }\n    return\
    \ true;\n}\ninline constexpr ll my_pow(ll a,ll b){\n    ll res=1;\n    while(b){\n\
    \        if(b&1)res*=a;\n        a*=a;\n        b>>=1;\n    }\n    return res;\n\
    }\ninline constexpr ll mod_pow(ll a, ll b, const ll &mod){\n    if(mod==1)return\
    \ 0;\n    a%=mod;\n    ll res=1;\n    while(b){\n        if(b&1)(res*=a)%=mod;\n\
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\ninline ll mod_inv(ll\
    \ a, const ll &mod){\n    ll b=mod,x=1,u=0,t;\n    while(b){\n        t=a/b;\n\
    \        std::swap(a-=t*b,b);\n        std::swap(x-=t*u,u);\n    }\n    if(x<0)x+=mod;\n\
    \    return x;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n\ntemplate<class... T>\nconstexpr\
    \ auto max(T... a){ return max(initializer_list<common_type_t<T...>>{a...}); }\n\
    template<class... T>\nconstexpr auto min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ntemplate<typename T>\nstruct CumulativeSum {\n  private:\
    \    \n    std::vector<T> data;\n    bool sorted = false;\n  public:\n    CumulativeSum(int\
    \ n) : data(n + 1, 0) {}\n    CumulativeSum(const std::vector<T> &v) : data(v.size()\
    \ + 1, 0) {\n        for(int i = 0; i < (int)v.size(); i++) add(i, v[i]);\n  \
    \  }\n    void add(int k, const T &val) { data[k + 1] += val; }\n    void build()\
    \ {\n        assert(!sorted); sorted = true;\n        for(int i = 1; i < (int)data.size();\
    \ i++) data[i] += data[i - 1];\n    }\n    T prod(int r) {\n        assert(sorted);\n\
    \        return (r < 0 ? 0 : data[min(r, (int)data.size() - 1)]);\n    }\n   \
    \ T prod(int l, int r) {\n        assert(sorted);\n        return prod(r) - prod(l);\
    \ \n    }\n};\ninline constexpr bool is_prime(ll n){\n    if(n<=1)return false;\n\
    \    for(ll i=2;i*i<=n;i++){\n        if(n%i==0)return false;\n    }\n    return\
    \ true;\n}\ninline constexpr ll my_pow(ll a,ll b){\n    ll res=1;\n    while(b){\n\
    \        if(b&1)res*=a;\n        a*=a;\n        b>>=1;\n    }\n    return res;\n\
    }\ninline constexpr ll mod_pow(ll a, ll b, const ll &mod){\n    if(mod==1)return\
    \ 0;\n    a%=mod;\n    ll res=1;\n    while(b){\n        if(b&1)(res*=a)%=mod;\n\
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\ninline ll mod_inv(ll\
    \ a, const ll &mod){\n    ll b=mod,x=1,u=0,t;\n    while(b){\n        t=a/b;\n\
    \        std::swap(a-=t*b,b);\n        std::swap(x-=t*u,u);\n    }\n    if(x<0)x+=mod;\n\
    \    return x;\n}"
  dependsOn: []
  isVerificationFile: false
  path: template/func.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2023-12-14 20:01:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/static_range_sum.test.cpp
  - tests/yosupo/unionfind.test.cpp
  - tests/yosupo/shortest_path.test.cpp
  - tests/yosupo/lca.test.cpp
  - tests/yosupo/point_add_range_sum_2.test.cpp
  - tests/yosupo/point_add_range_sum.test.cpp
  - tests/aoj/DSL_2_A.test.cpp
  - tests/aoj/GRL_5_C.test.cpp
  - tests/aoj/ALDS1_5_D.test.cpp
  - tests/aoj/DSL_1_B.test.cpp
  - tests/aoj/DSL_2_B.test.cpp
  - tests/aoj/GRL_2_A.test.cpp
  - tests/aoj/DSL_2_B_2.test.cpp
  - tests/aoj/dijkstra.test.cpp
  - tests/yukicoder/599.test.cpp
documentation_of: template/func.hpp
layout: document
redirect_from:
- /library/template/func.hpp
- /library/template/func.hpp.html
title: template/func.hpp
---
