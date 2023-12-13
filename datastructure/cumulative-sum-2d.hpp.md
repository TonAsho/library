---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: CumulativeSum2D
    links: []
  bundledCode: "#line 2 \"datastructure/cumulative-sum-2d.hpp\"\n#include <bits/stdc++.h>\n\
    /**\n * @brief CumulativeSum2D\n*/\n\ntemplate<typename T>\nstruct CumulativeSum2D\
    \ {\n  private: \n    std::vector<std::vector<T>> data;\n    bool sorted = false;\n\
    \  public:\n    CumulativeSum2D(int H, int W) : data(H + 1, std::vector<T>(W +\
    \ 1, 0)) {}\n    void add(int h, int w, T val) {\n        h++, w++;\n        data[h][w]\
    \ += val;\n    }\n    void build() {\n        assert(!sorted); sorted = true;\n\
    \        for(int i = 1; i < data.size(); i++) {\n            for(int j = 1; j\
    \ < data[0].size(); j++) {\n                data[i][j] += data[i][j - 1] + data[i\
    \ - 1][j] - data[i - 1][j - 1];\n            }\n        }\n    }\n    T prod(int\
    \ x1, int y1, int x2, int y2) {\n        assert(sorted);\n        return (data[x2][y2]\
    \ - data[x1][y2] - data[x2][y1] + data[x1][y1]);\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n/**\n * @brief CumulativeSum2D\n\
    */\n\ntemplate<typename T>\nstruct CumulativeSum2D {\n  private: \n    std::vector<std::vector<T>>\
    \ data;\n    bool sorted = false;\n  public:\n    CumulativeSum2D(int H, int W)\
    \ : data(H + 1, std::vector<T>(W + 1, 0)) {}\n    void add(int h, int w, T val)\
    \ {\n        h++, w++;\n        data[h][w] += val;\n    }\n    void build() {\n\
    \        assert(!sorted); sorted = true;\n        for(int i = 1; i < data.size();\
    \ i++) {\n            for(int j = 1; j < data[0].size(); j++) {\n            \
    \    data[i][j] += data[i][j - 1] + data[i - 1][j] - data[i - 1][j - 1];\n   \
    \         }\n        }\n    }\n    T prod(int x1, int y1, int x2, int y2) {\n\
    \        assert(sorted);\n        return (data[x2][y2] - data[x1][y2] - data[x2][y1]\
    \ + data[x1][y1]);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/cumulative-sum-2d.hpp
  requiredBy: []
  timestamp: '2023-12-13 18:06:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: datastructure/cumulative-sum-2d.hpp
layout: document
redirect_from:
- /library/datastructure/cumulative-sum-2d.hpp
- /library/datastructure/cumulative-sum-2d.hpp.html
title: CumulativeSum2D
---
