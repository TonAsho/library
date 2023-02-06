---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/cumulative-sum.test.cpp
    title: tests/cumulative-sum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Cumulative Sum(\u4E00\u6B21\u5143\u7D2F\u8A08\u548C)"
    links: []
  bundledCode: "#line 2 \"math/cumulative-sum.hpp\"\n/**\n * @brief Cumulative Sum(\u4E00\
    \u6B21\u5143\u7D2F\u8A08\u548C)\n */\ntemplate< class T >\nstruct CumulativeSum\
    \ {\n  vector< T > data;\n  CumulativeSum() = default;\n  explicit CumulativeSum(size_t\
    \ sz) : data(sz + 1, 0) {}\n  void add(int k, const T &x) {data[k + 1] += x;}\n\
    \  void build() {\n    for(int i = 1; i < data.size(); i++) {\n      data[i] +=\
    \ data[i - 1];\n    }\n  }\n  T get(int r) const {\n    if(r < 0) return 0;\n\
    \    return data[min(r, (int) data.size() - 1)];\n  }\n  T get(int l, int r) const\
    \ {\n    return get(r) - get(l);\n  }\n};\n"
  code: "#pragma once\n/**\n * @brief Cumulative Sum(\u4E00\u6B21\u5143\u7D2F\u8A08\
    \u548C)\n */\ntemplate< class T >\nstruct CumulativeSum {\n  vector< T > data;\n\
    \  CumulativeSum() = default;\n  explicit CumulativeSum(size_t sz) : data(sz +\
    \ 1, 0) {}\n  void add(int k, const T &x) {data[k + 1] += x;}\n  void build()\
    \ {\n    for(int i = 1; i < data.size(); i++) {\n      data[i] += data[i - 1];\n\
    \    }\n  }\n  T get(int r) const {\n    if(r < 0) return 0;\n    return data[min(r,\
    \ (int) data.size() - 1)];\n  }\n  T get(int l, int r) const {\n    return get(r)\
    \ - get(l);\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: math/cumulative-sum.hpp
  requiredBy: []
  timestamp: '2023-02-06 22:22:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/cumulative-sum.test.cpp
documentation_of: math/cumulative-sum.hpp
layout: document
title: "Cumulative Sum(\u4E00\u6B21\u5143\u7D2F\u7A4D\u548C)"
---

## 使い方

*add(k, x):位置kに値xを加算.
*build():累計和の構築
*get(k): 区間(0...r-1)の和を返す.
*get(l, r): 区間(l...r-1)の和を返す.