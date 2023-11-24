---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: Template
  _extendedVerifiedWith:
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
    path: tests/yosupo/shortest_path.test.cpp
    title: tests/yosupo/shortest_path.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/static_range_sum.test.cpp
    title: tests/yosupo/static_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/unionfind.test.cpp
    title: tests/yosupo/unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template/func.hpp\"\n#include <bits/stdc++.h>\n\ntemplate<class...\
    \ T>\nconstexpr auto my_max(T... a){ return max(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<class... T>\nconstexpr auto my_min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ninline constexpr bool is_prime(ll n){\n    if(n<=1)return\
    \ false;\n    for(ll i=2;i*i<=n;i++){\n        if(n%i==0)return false;\n    }\n\
    \    return true;\n}\ninline constexpr ll my_pow(ll a,ll b){\n    ll res=1;\n\
    \    while(b){\n        if(b&1)res*=a;\n        a*=a;\n        b>>=1;\n    }\n\
    \    return res;\n}\ninline constexpr ll mod_pow(ll a,ll b,const ll&mod){\n  \
    \  if(mod==1)return 0;\n    a%=mod;\n    ll res=1;\n    while(b){\n        if(b&1)(res*=a)%=mod;\n\
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n\ntemplate<class... T>\nconstexpr\
    \ auto my_max(T... a){ return max(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<class... T>\nconstexpr auto my_min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ninline constexpr bool is_prime(ll n){\n    if(n<=1)return\
    \ false;\n    for(ll i=2;i*i<=n;i++){\n        if(n%i==0)return false;\n    }\n\
    \    return true;\n}\ninline constexpr ll my_pow(ll a,ll b){\n    ll res=1;\n\
    \    while(b){\n        if(b&1)res*=a;\n        a*=a;\n        b>>=1;\n    }\n\
    \    return res;\n}\ninline constexpr ll mod_pow(ll a,ll b,const ll&mod){\n  \
    \  if(mod==1)return 0;\n    a%=mod;\n    ll res=1;\n    while(b){\n        if(b&1)(res*=a)%=mod;\n\
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: template/func.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2023-11-15 21:48:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/point_add_range_sum.test.cpp
  - tests/yosupo/unionfind.test.cpp
  - tests/yosupo/shortest_path.test.cpp
  - tests/yosupo/static_range_sum.test.cpp
  - tests/yosupo/lca.test.cpp
  - tests/aoj/dijkstra.test.cpp
  - tests/aoj/DSL_2_A.test.cpp
  - tests/aoj/DSL_1_B.test.cpp
  - tests/aoj/DSL_2_B.test.cpp
  - tests/aoj/GRL_5_C.test.cpp
  - tests/aoj/GRL_2_A.test.cpp
documentation_of: template/func.hpp
layout: document
redirect_from:
- /library/template/func.hpp
- /library/template/func.hpp.html
title: template/func.hpp
---
