---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"others/Compressor.hpp\"\n#include <bits/stdc++.h>\n\ntemplate<typename\
    \ T>\nstruct Compressor {\n  private:\n    std::vector<T> data;\n    bool sorted\
    \ = false;\n  public:\n    Compressor(const std::vector<T> &v) : data(std::move(v))\
    \ {}\n    void build() {\n        assert(!sorted);\n        sorted = 1;\n    \
    \    std::sort(data.begin(), data.end());\n        data.erase(std::unique(data.begin(),\
    \ data.end()), data.end());\n    }\n    int get_index(const T &v) {\n        assert(sorted);\n\
    \        return int(std::lower_bound(data.begin(), data.end(), v) - data.begin());\n\
    \    }\n    void press(std::vector<T> &v) {\n        assert(sorted);\n       \
    \ for(auto &i : v) i = get_index(i);\n    }\n    std::vector<int> pressed(const\
    \ std::vector<T> &v) {\n        assert(sorted);\n        std::vector<int> res(v.size());\n\
    \        for(int i = 0; i < (int)v.size(); ++i) res[i] = get_index(v[i]);\n  \
    \      return res;\n    }\n    int size() const {\n        return (int)data.size();\n\
    \    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n\ntemplate<typename T>\nstruct Compressor\
    \ {\n  private:\n    std::vector<T> data;\n    bool sorted = false;\n  public:\n\
    \    Compressor(const std::vector<T> &v) : data(std::move(v)) {}\n    void build()\
    \ {\n        assert(!sorted);\n        sorted = 1;\n        std::sort(data.begin(),\
    \ data.end());\n        data.erase(std::unique(data.begin(), data.end()), data.end());\n\
    \    }\n    int get_index(const T &v) {\n        assert(sorted);\n        return\
    \ int(std::lower_bound(data.begin(), data.end(), v) - data.begin());\n    }\n\
    \    void press(std::vector<T> &v) {\n        assert(sorted);\n        for(auto\
    \ &i : v) i = get_index(i);\n    }\n    std::vector<int> pressed(const std::vector<T>\
    \ &v) {\n        assert(sorted);\n        std::vector<int> res(v.size());\n  \
    \      for(int i = 0; i < (int)v.size(); ++i) res[i] = get_index(v[i]);\n    \
    \    return res;\n    }\n    int size() const {\n        return (int)data.size();\n\
    \    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: others/Compressor.hpp
  requiredBy: []
  timestamp: '2023-12-13 17:49:19+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: others/Compressor.hpp
layout: document
redirect_from:
- /library/others/Compressor.hpp
- /library/others/Compressor.hpp.html
title: others/Compressor.hpp
---
