---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Binomial
    links: []
  bundledCode: "#line 1 \"math/nCr.hpp\"\n/**\n * @brief Binomial\n */\ntemplate<\
    \ typename T >\nT nCr(ll N, ll K) {\n  if(K < 0 || N < K) return 0;\n  static\
    \ vector< T > invs;\n  if(invs.size() < K + 1) {\n    int pre_sz = max(1, (int)\
    \ invs.size());\n    invs.resize(K + 1);\n    for(int i = pre_sz; i <= K; i++)\
    \ {\n      invs[i] = T(1) / i;\n    }\n  }\n  T ret = 1;\n  for(ll i = 1; i <=\
    \ K; ++i) {\n    ret *= N;\n    N--;\n    ret *= invs[i];\n  }\n  return ret;\n\
    }\n"
  code: "/**\n * @brief Binomial\n */\ntemplate< typename T >\nT nCr(ll N, ll K) {\n\
    \  if(K < 0 || N < K) return 0;\n  static vector< T > invs;\n  if(invs.size()\
    \ < K + 1) {\n    int pre_sz = max(1, (int) invs.size());\n    invs.resize(K +\
    \ 1);\n    for(int i = pre_sz; i <= K; i++) {\n      invs[i] = T(1) / i;\n   \
    \ }\n  }\n  T ret = 1;\n  for(ll i = 1; i <= K; ++i) {\n    ret *= N;\n    N--;\n\
    \    ret *= invs[i];\n  }\n  return ret;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/nCr.hpp
  requiredBy: []
  timestamp: '2023-11-15 23:42:03+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/nCr.hpp
layout: document
redirect_from:
- /library/math/nCr.hpp
- /library/math/nCr.hpp.html
title: Binomial
---
