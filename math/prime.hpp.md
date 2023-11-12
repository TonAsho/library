---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: math/prime-table.hpp
    title: math/prime-table.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Prime Table
    links: []
  bundledCode: "#line 1 \"math/prime.hpp\"\n/**\n * @brief Prime Table\n*/\nvector<\
    \ bool > prime(int n) {\n  vector< bool > primes(n + 1, true);\n  if(n >= 0) primes[0]\
    \ = false;\n  if(n >= 1) primes[1] = false;\n  for(int i = 2; i * i <= n; i++)\
    \ {\n    if(!primes[i]) continue;\n    for(int j = i * i; j <= n; j += i) {\n\
    \      primes[j] = false;\n    }\n  }\n  return primes;\n}\n"
  code: "/**\n * @brief Prime Table\n*/\nvector< bool > prime(int n) {\n  vector<\
    \ bool > primes(n + 1, true);\n  if(n >= 0) primes[0] = false;\n  if(n >= 1) primes[1]\
    \ = false;\n  for(int i = 2; i * i <= n; i++) {\n    if(!primes[i]) continue;\n\
    \    for(int j = i * i; j <= n; j += i) {\n      primes[j] = false;\n    }\n \
    \ }\n  return primes;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/prime.hpp
  requiredBy:
  - math/prime-table.hpp
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/prime.hpp
layout: document
redirect_from:
- /library/math/prime.hpp
- /library/math/prime.hpp.html
title: Prime Table
---
