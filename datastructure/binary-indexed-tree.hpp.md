---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_2_B_2.test.cpp
    title: tests/aoj/DSL_2_B_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/point_add_range_sum_2.test.cpp
    title: tests/yosupo/point_add_range_sum_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: BinaryIndexedTree
    links: []
  bundledCode: "#line 2 \"datastructure/binary-indexed-tree.hpp\"\n/**\n * @brief\
    \ BinaryIndexedTree\n**/\n#include <bits/stdc++.h>\n\ntemplate<typename T>\nstruct\
    \ BinaryIndexedTree {\n  private:\n    int n;\n    std::vector<T> data;\n    T\
    \ sum(int x) {\n        T res = 0;\n        while(x) {\n            res += data[x];\n\
    \            x -= x & -x;\n        }\n        return res;\n    }\n  public:\n\
    \    BinaryIndexedTree() : n(0) {}\n    BinaryIndexedTree(int n) : n(n), data(n\
    \ + 1, 0) {}\n    BinaryIndexedTree(const std::vector<T> &v) : n(v.size()), data(v.size()\
    \ + 1, 0) {\n        for(int i = 0; i < n; ++i) add(i, v[i]);\n    }\n    void\
    \ add(int x, T val) {\n        x++;\n        while(x <= n) {\n            data[x]\
    \ += val;\n            x += x & -x;\n        }\n    }\n    T sum(int l, int r)\
    \ {\n        return sum(r) - sum(l);\n    }\n    T operator[](int x) const { return\
    \ sum(x, x + 1); }\n};\n"
  code: "#pragma once\n/**\n * @brief BinaryIndexedTree\n**/\n#include <bits/stdc++.h>\n\
    \ntemplate<typename T>\nstruct BinaryIndexedTree {\n  private:\n    int n;\n \
    \   std::vector<T> data;\n    T sum(int x) {\n        T res = 0;\n        while(x)\
    \ {\n            res += data[x];\n            x -= x & -x;\n        }\n      \
    \  return res;\n    }\n  public:\n    BinaryIndexedTree() : n(0) {}\n    BinaryIndexedTree(int\
    \ n) : n(n), data(n + 1, 0) {}\n    BinaryIndexedTree(const std::vector<T> &v)\
    \ : n(v.size()), data(v.size() + 1, 0) {\n        for(int i = 0; i < n; ++i) add(i,\
    \ v[i]);\n    }\n    void add(int x, T val) {\n        x++;\n        while(x <=\
    \ n) {\n            data[x] += val;\n            x += x & -x;\n        }\n   \
    \ }\n    T sum(int l, int r) {\n        return sum(r) - sum(l);\n    }\n    T\
    \ operator[](int x) const { return sum(x, x + 1); }\n};"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/binary-indexed-tree.hpp
  requiredBy: []
  timestamp: '2023-12-13 18:06:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/point_add_range_sum_2.test.cpp
  - tests/aoj/DSL_2_B_2.test.cpp
documentation_of: datastructure/binary-indexed-tree.hpp
layout: document
redirect_from:
- /library/datastructure/binary-indexed-tree.hpp
- /library/datastructure/binary-indexed-tree.hpp.html
title: BinaryIndexedTree
---
