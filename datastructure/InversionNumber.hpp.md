---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: datastructure/BinaryIndexedTree.hpp
    title: BinaryIndexedTree
  - icon: ':heavy_check_mark:'
    path: others/Compressor.hpp
    title: others/Compressor.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/ALDS1_5_D.test.cpp
    title: tests/aoj/ALDS1_5_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Inversion Number(\u8EE2\u5012\u6570)"
    links: []
  bundledCode: "#line 2 \"datastructure/InversionNumber.hpp\"\n/**\n * @brief Inversion\
    \ Number(\u8EE2\u5012\u6570)\n*/\n#include <bits/stdc++.h>\n#line 2 \"datastructure/BinaryIndexedTree.hpp\"\
    \n/**\n * @brief BinaryIndexedTree\n**/\n#line 6 \"datastructure/BinaryIndexedTree.hpp\"\
    \n\ntemplate<typename T>\nstruct BinaryIndexedTree {\nprivate:\n    int n;\n \
    \   std::vector<T> data;\n    T sum(int x) {\n        T res = 0;\n        while(x)\
    \ {\n            res += data[x];\n            x -= x & -x;\n        }\n      \
    \  return res;\n    }\npublic:\n    BinaryIndexedTree() : n(0) {}\n    BinaryIndexedTree(int\
    \ n) : n(n), data(n + 1, 0) {}\n    BinaryIndexedTree(const std::vector<T> &v)\
    \ : n(v.size()), data(v.size() + 1, 0) {\n        for(int i = 0; i < n; ++i) add(i,\
    \ v[i]);\n    }\n    void add(int x, T val) {\n        x++;\n        while(x <=\
    \ n) {\n            data[x] += val;\n            x += x & -x;\n        }\n   \
    \ }\n    T sum(int l, int r) {\n        return sum(r) - sum(l);\n    }\n    T\
    \ operator[](int x) const { return sum(x, x + 1); }\n};\n#line 3 \"others/Compressor.hpp\"\
    \n\ntemplate<typename T>\nstruct Compressor {\nprivate:\n    std::vector<T> data;\n\
    \    bool sorted = false;\npublic:\n    Compressor(const std::vector<T> &v) :\
    \ data(std::move(v)) {}\n    void build() {\n        assert(!sorted);\n      \
    \  sorted = 1;\n        std::sort(data.begin(), data.end());\n        data.erase(std::unique(data.begin(),\
    \ data.end()), data.end());\n    }\n    int get_index(const T &v) {\n        assert(sorted);\n\
    \        return int(std::lower_bound(data.begin(), data.end(), v) - data.begin());\n\
    \    }\n    void press(std::vector<T> &v) {\n        assert(sorted);\n       \
    \ for(auto &i : v) i = get_index(i);\n    }\n    std::vector<int> pressed(const\
    \ std::vector<T> &v) {\n        assert(sorted);\n        std::vector<int> res(v.size());\n\
    \        for(int i = 0; i < (int)v.size(); ++i) res[i] = get_index(v[i]);\n  \
    \      return res;\n    }\n    int size() const {\n        return (int)data.size();\n\
    \    }\n};\n#line 8 \"datastructure/InversionNumber.hpp\"\n\ntemplate<typename\
    \ T>\nlong long inversion(std::vector<T> a) {\n    int n = a.size();\n    Compressor<int>\
    \ c(a);\n    c.build();\n    std::vector<int> b = c.pressed(a);\n    long long\
    \ res = 0;\n    BinaryIndexedTree<ll> bit(c.size());\n    for(int i = 0; i < n;\
    \ ++i) {\n        res += i - bit.sum(0, b[i] + 1);\n        bit.add(b[i], 1);\n\
    \    }\n    return res;\n}\n"
  code: "#pragma once\n/**\n * @brief Inversion Number(\u8EE2\u5012\u6570)\n*/\n#include\
    \ <bits/stdc++.h>\n#include \"BinaryIndexedTree.hpp\"\n#include \"others/Compressor.hpp\"\
    \n\ntemplate<typename T>\nlong long inversion(std::vector<T> a) {\n    int n =\
    \ a.size();\n    Compressor<int> c(a);\n    c.build();\n    std::vector<int> b\
    \ = c.pressed(a);\n    long long res = 0;\n    BinaryIndexedTree<ll> bit(c.size());\n\
    \    for(int i = 0; i < n; ++i) {\n        res += i - bit.sum(0, b[i] + 1);\n\
    \        bit.add(b[i], 1);\n    }\n    return res;\n}"
  dependsOn:
  - datastructure/BinaryIndexedTree.hpp
  - others/Compressor.hpp
  isVerificationFile: false
  path: datastructure/InversionNumber.hpp
  requiredBy: []
  timestamp: '2023-11-24 19:27:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/aoj/ALDS1_5_D.test.cpp
documentation_of: datastructure/InversionNumber.hpp
layout: document
redirect_from:
- /library/datastructure/InversionNumber.hpp
- /library/datastructure/InversionNumber.hpp.html
title: "Inversion Number(\u8EE2\u5012\u6570)"
---
