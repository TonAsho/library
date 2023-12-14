---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: datastructure/inversion-number.hpp
    title: "Inversion Number(\u8EE2\u5012\u6570)"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/ALDS1_5_D.test.cpp
    title: tests/aoj/ALDS1_5_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"others/compressor.hpp\"\n#include <bits/stdc++.h>\n\ntemplate<typename\
    \ T, typename Comp = std::less<T>>\nstruct Compressor {\n  private:\n    std::vector<T>\
    \ data;\n    Comp cmp;\n    bool sorted = false;\n  public:\n    Compressor()\
    \ : Compressor(Comp()) {}\n    Compressor(const Comp &cmp) : cmp(cmp) {}\n   \
    \ Compressor(const std::vector<T> &v, const Comp &cmp = Comp()) : data(v), cmp(cmp)\
    \ {}\n    Compressor(std::vector<T> &&v, const Comp &cmp = Comp()) : data(std::move(v)),\
    \ cmp(cmp) {}\n    Compressor(std::initializer_list<T> li, const Comp &cmp = Comp())\
    \ : data(li.begin(), li.end()), cmp(cmp) {}\n    void push_back(const T &v) {\
    \ assert(!sorted); data.push_back(v); }\n    void push_back(T &&v) { assert(!sorted);\
    \ data.push_back(std::move(v)); }\n    void push(const std::vector<T> &v) {\n\
    \        assert(!sorted);\n        const int n = data.size();\n        data.resize(v.size()\
    \ + n);\n        for(int i = 0; i < (int)v.size(); i++) data[i + n] = v[i];\n\
    \    }\n    void build() {\n        assert(!sorted);\n        sorted = 1;\n  \
    \      std::sort(data.begin(), data.end(), cmp);\n        data.erase(std::unique(data.begin(),\
    \ data.end(), [&](const T &l, const T &r) { return !cmp(l, r) && !cmp(r, l); }),\
    \ data.end());\n    }\n    int get_index(const T &v) {\n        assert(sorted);\n\
    \        return int(std::lower_bound(data.begin(), data.end(), v) - data.begin());\n\
    \    }\n    void press(std::vector<T> &v) {\n        assert(sorted);\n       \
    \ for(auto &i : v) i = get_index(i);\n    }\n    std::vector<int> pressed(const\
    \ std::vector<T> &v) {\n        assert(sorted);\n        std::vector<int> res(v.size());\n\
    \        for(int i = 0; i < (int)v.size(); ++i) res[i] = get_index(v[i]);\n  \
    \      return res;\n    }\n    int size() const {\n        assert(sorted);\n \
    \       return (int)data.size();\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n\ntemplate<typename T, typename Comp\
    \ = std::less<T>>\nstruct Compressor {\n  private:\n    std::vector<T> data;\n\
    \    Comp cmp;\n    bool sorted = false;\n  public:\n    Compressor() : Compressor(Comp())\
    \ {}\n    Compressor(const Comp &cmp) : cmp(cmp) {}\n    Compressor(const std::vector<T>\
    \ &v, const Comp &cmp = Comp()) : data(v), cmp(cmp) {}\n    Compressor(std::vector<T>\
    \ &&v, const Comp &cmp = Comp()) : data(std::move(v)), cmp(cmp) {}\n    Compressor(std::initializer_list<T>\
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
    \ {\n        assert(sorted);\n        return (int)data.size();\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: others/compressor.hpp
  requiredBy:
  - datastructure/inversion-number.hpp
  timestamp: '2023-12-14 20:01:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/aoj/ALDS1_5_D.test.cpp
documentation_of: others/compressor.hpp
layout: document
redirect_from:
- /library/others/compressor.hpp
- /library/others/compressor.hpp.html
title: others/compressor.hpp
---
