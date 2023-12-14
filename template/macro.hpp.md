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
  bundledCode: '#line 2 "template/macro.hpp"

    #include <bits/stdc++.h>


    #define overload4(_1, _2, _3, _4, name, ...) name

    #define rep1(i, n) for (int i = 0; i < int(n); ++i)

    #define rep2(i, s, n) for (int i = int(s); i < int(n); ++i)

    #define rep3(i, s, n, d) for(int i = int(s); i < int(n); i+=d)

    #define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)

    #define all(x) (x).begin(),(x).end()

    #define rall(x) (x).rbegin(),(x).rend()

    #define SUM(a) accumulate(all(a),0LL)

    #define MIN(a) *min_element(all(a))

    #define MAX(a) *max_element(all(a))

    #define INT(...) int __VA_ARGS__;input(__VA_ARGS__)

    #define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)

    #define STR(...) string __VA_ARGS__;input(__VA_ARGS__)

    #define CHR(...) char __VA_ARGS__;input(__VA_ARGS__)

    #define DBL(...) double __VA_ARGS__;input(__VA_ARGS__)

    #define LD(...) ld __VA_ARGS__;input(__VA_ARGS__)

    #define pb push_back

    #define eb emplace_back

    '
  code: '#pragma once;

    #include <bits/stdc++.h>


    #define overload4(_1, _2, _3, _4, name, ...) name

    #define rep1(i, n) for (int i = 0; i < int(n); ++i)

    #define rep2(i, s, n) for (int i = int(s); i < int(n); ++i)

    #define rep3(i, s, n, d) for(int i = int(s); i < int(n); i+=d)

    #define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)

    #define all(x) (x).begin(),(x).end()

    #define rall(x) (x).rbegin(),(x).rend()

    #define SUM(a) accumulate(all(a),0LL)

    #define MIN(a) *min_element(all(a))

    #define MAX(a) *max_element(all(a))

    #define INT(...) int __VA_ARGS__;input(__VA_ARGS__)

    #define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)

    #define STR(...) string __VA_ARGS__;input(__VA_ARGS__)

    #define CHR(...) char __VA_ARGS__;input(__VA_ARGS__)

    #define DBL(...) double __VA_ARGS__;input(__VA_ARGS__)

    #define LD(...) ld __VA_ARGS__;input(__VA_ARGS__)

    #define pb push_back

    #define eb emplace_back'
  dependsOn: []
  isVerificationFile: false
  path: template/macro.hpp
  requiredBy:
  - template/template.hpp
  timestamp: '2023-11-15 21:48:39+09:00'
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
documentation_of: template/macro.hpp
layout: document
redirect_from:
- /library/template/macro.hpp
- /library/template/macro.hpp.html
title: template/macro.hpp
---
