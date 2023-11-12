---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: math/prime.hpp
    title: Prime Table
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/prime.hpp\"\n/**\n * @brief Prime Table\n*/\nvector<\
    \ bool > prime(int n) {\n  vector< bool > primes(n + 1, true);\n  if(n >= 0) primes[0]\
    \ = false;\n  if(n >= 1) primes[1] = false;\n  for(int i = 2; i * i <= n; i++)\
    \ {\n    if(!primes[i]) continue;\n    for(int j = i * i; j <= n; j += i) {\n\
    \      primes[j] = false;\n    }\n  }\n  return primes;\n}\n#line 2 \"math/prime-table.hpp\"\
    \n\nvector< ll >  prime_table(int n) {\n    if(n <= 1) return {};\n    auto d\
    \ = prime(n);\n    vector< ll > primes;\n    rep(i, d.size()) {\n        if(d[i])\
    \ primes.push_back(i);\n    }\n    return primes;\n}\n"
  code: "#include \"math/prime.hpp\"\n\nvector< ll >  prime_table(int n) {\n    if(n\
    \ <= 1) return {};\n    auto d = prime(n);\n    vector< ll > primes;\n    rep(i,\
    \ d.size()) {\n        if(d[i]) primes.push_back(i);\n    }\n    return primes;\n\
    }"
  dependsOn:
  - math/prime.hpp
  isVerificationFile: false
  path: math/prime-table.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/prime-table.hpp
layout: document
redirect_from:
- /library/math/prime-table.hpp
- /library/math/prime-table.hpp.html
title: math/prime-table.hpp
---
