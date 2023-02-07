---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/prime.hpp
    title: "Prime Table(\u7D20\u6570\u30C6\u30FC\u30D6\u30EB)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: tests/prime-table.test.cpp
    title: tests/prime-table.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/prime.hpp\"\n/**\n * @brief Prime Table(\u7D20\u6570\
    \u30C6\u30FC\u30D6\u30EB)\n*/\nvector< bool > prime(int n) {\n  vector< bool >\
    \ primes(n + 1, true);\n  if(n >= 0) primes[0] = false;\n  if(n >= 1) primes[1]\
    \ = false;\n  for(int i = 2; i * i <= n; i++) {\n    if(!primes[i]) continue;\n\
    \    for(int j = i * i; j <= n; j += i) {\n      primes[j] = false;\n    }\n \
    \ }\n  return primes;\n}\n#line 2 \"math/prime-table.hpp\"\n\nvector< int >  prime_table(int\
    \ n) {\n    if(n <= 1) return {};\n    auto d = prime(n);\n    vector< int > primes;\n\
    \    rep(i, d.size()) {\n        if(d[i]) primes.push_back(i);\n    }\n    return\
    \ primes;\n}\n"
  code: "#include \"math/prime.hpp\"\n\nvector< int >  prime_table(int n) {\n    if(n\
    \ <= 1) return {};\n    auto d = prime(n);\n    vector< int > primes;\n    rep(i,\
    \ d.size()) {\n        if(d[i]) primes.push_back(i);\n    }\n    return primes;\n\
    }"
  dependsOn:
  - math/prime.hpp
  isVerificationFile: false
  path: math/prime-table.hpp
  requiredBy: []
  timestamp: '2023-02-07 22:31:03+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - tests/prime-table.test.cpp
documentation_of: math/prime-table.hpp
layout: document
redirect_from:
- /library/math/prime-table.hpp
- /library/math/prime-table.hpp.html
title: math/prime-table.hpp
---
