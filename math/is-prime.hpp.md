---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Is Prime
    links: []
  bundledCode: "#line 1 \"math/is-prime.hpp\"\n/**\n * @brief Is Prime\n*/\nbool isPrime(ll\
    \ n) {\n    if(n < 2) return false;\n    for(ll i = 2; i * i <= n; ++i) {\n  \
    \      if(n % i == 0) return false;\n    }\n    return true;\n}\n"
  code: "/**\n * @brief Is Prime\n*/\nbool isPrime(ll n) {\n    if(n < 2) return false;\n\
    \    for(ll i = 2; i * i <= n; ++i) {\n        if(n % i == 0) return false;\n\
    \    }\n    return true;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/is-prime.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/is-prime.hpp
layout: document
redirect_from:
- /library/math/is-prime.hpp
- /library/math/is-prime.hpp.html
title: Is Prime
---
