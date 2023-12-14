---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: datastructure/binary-indexed-tree.hpp
    title: BinaryIndexedTree
  - icon: ':heavy_check_mark:'
    path: others/compressor.hpp
    title: others/compressor.hpp
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
  bundledCode: "#line 2 \"datastructure/inversion-number.hpp\"\n/**\n * @brief Inversion\
    \ Number(\u8EE2\u5012\u6570)\n*/\n#include <bits/stdc++.h>\n#line 2 \"datastructure/binary-indexed-tree.hpp\"\
    \n/**\n * @brief BinaryIndexedTree\n**/\n#line 6 \"datastructure/binary-indexed-tree.hpp\"\
    \n\ntemplate<typename T>\nstruct BinaryIndexedTree {\n  private:\n    int n;\n\
    \    std::vector<T> data;\n    T sum(int x) {\n        T res = 0;\n        while(x)\
    \ {\n            res += data[x];\n            x -= x & -x;\n        }\n      \
    \  return res;\n    }\n  public:\n    BinaryIndexedTree() : n(0) {}\n    BinaryIndexedTree(int\
    \ n) : n(n), data(n + 1, 0) {}\n    BinaryIndexedTree(const std::vector<T> &v)\
    \ : n(v.size()), data(v.size() + 1, 0) {\n        for(int i = 0; i < n; ++i) add(i,\
    \ v[i]);\n    }\n    void add(int x, T val) {\n        x++;\n        while(x <=\
    \ n) {\n            data[x] += val;\n            x += x & -x;\n        }\n   \
    \ }\n    T sum(int l, int r) {\n        return sum(r) - sum(l);\n    }\n    T\
    \ operator[](int x) const { return sum(x, x + 1); }\n};\n#line 3 \"others/compressor.hpp\"\
    \n\ntemplate<typename T, typename Comp = std::less<T>>\nstruct Compressor {\n\
    \  private:\n    std::vector<T> data;\n    Comp cmp;\n    bool sorted = false;\n\
    \  public:\n    Compressor() : Compressor(Comp()) {}\n    Compressor(const Comp\
    \ &cmp) : cmp(cmp) {}\n    Compressor(const std::vector<T> &v, const Comp &cmp\
    \ = Comp()) : data(v), cmp(cmp) {}\n    Compressor(std::vector<T> &&v, const Comp\
    \ &cmp = Comp()) : data(std::move(v)), cmp(cmp) {}\n    Compressor(std::initializer_list<T>\
    \ li, const Comp &cmp = Comp()) : data(li.begin(), li.end()), cmp(cmp) {}\n  \
    \  void push_back(const T &v) { assert(!sorted); data.push_back(v); }\n    void\
    \ push_back(T &&v) { assert(!sorted); data.push_back(std::move(v)); }\n    void\
    \ push(const std::vector<T> &v) {\n        assert(!sorted);\n        const int\
    \ n = data.size();\n        data.resize(v.size() + n);\n        for(int i = 0;\
    \ i < (int)v.size(); i++) data[i + n] = v[i];\n    }\n    void build() {\n   \
    \     assert(!sorted);\n        sorted = 1;\n        std::sort(data.begin(), data.end(),\
    \ cmp);\n        data.erase(std::unique(data.begin(), data.end(), [&](const T\
    \ &l, const T &r) { return !cmp(l, r) && !cmp(r, l); }), data.end());\n    }\n\
    \    int get_index(const T &v) {\n        assert(sorted);\n        return int(std::lower_bound(data.begin(),\
    \ data.end(), v) - data.begin());\n    }\n    void press(std::vector<T> &v) {\n\
    \        assert(sorted);\n        for(auto &i : v) i = get_index(i);\n    }\n\
    \    std::vector<int> pressed(const std::vector<T> &v) {\n        assert(sorted);\n\
    \        std::vector<int> res(v.size());\n        for(int i = 0; i < (int)v.size();\
    \ ++i) res[i] = get_index(v[i]);\n        return res;\n    }\n    int size() const\
    \ {\n        assert(sorted);\n        return (int)data.size();\n    }\n};\n#line\
    \ 8 \"datastructure/inversion-number.hpp\"\n\ntemplate<typename T>\nlong long\
    \ inversion(std::vector<T> a) {\n    int n = a.size();\n    Compressor<int> c(a);\n\
    \    c.build();\n    std::vector<int> b = c.pressed(a);\n    long long res = 0;\n\
    \    BinaryIndexedTree<ll> bit(c.size());\n    for(int i = 0; i < n; ++i) {\n\
    \        res += i - bit.sum(0, b[i] + 1);\n        bit.add(b[i], 1);\n    }\n\
    \    return res;\n}\n"
  code: "#pragma once\n/**\n * @brief Inversion Number(\u8EE2\u5012\u6570)\n*/\n#include\
    \ <bits/stdc++.h>\n#include \"binary-indexed-tree.hpp\"\n#include \"others/compressor.hpp\"\
    \n\ntemplate<typename T>\nlong long inversion(std::vector<T> a) {\n    int n =\
    \ a.size();\n    Compressor<int> c(a);\n    c.build();\n    std::vector<int> b\
    \ = c.pressed(a);\n    long long res = 0;\n    BinaryIndexedTree<ll> bit(c.size());\n\
    \    for(int i = 0; i < n; ++i) {\n        res += i - bit.sum(0, b[i] + 1);\n\
    \        bit.add(b[i], 1);\n    }\n    return res;\n}"
  dependsOn:
  - datastructure/binary-indexed-tree.hpp
  - others/compressor.hpp
  isVerificationFile: false
  path: datastructure/inversion-number.hpp
  requiredBy: []
  timestamp: '2023-12-14 20:01:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/aoj/ALDS1_5_D.test.cpp
documentation_of: datastructure/inversion-number.hpp
layout: document
redirect_from:
- /library/datastructure/inversion-number.hpp
- /library/datastructure/inversion-number.hpp.html
title: "Inversion Number(\u8EE2\u5012\u6570)"
---
