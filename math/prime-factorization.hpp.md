---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Prime Factorization
    links: []
  bundledCode: "#line 1 \"math/prime-factorization.hpp\"\n/**\n * @brief Prime Factorization\n\
    */\nmap< ll, int > prime_factorization(ll n) {\n  map< ll, int > ret;\n  for(ll\
    \ i = 2; i * i <= n; i++) {\n    while(n % i == 0) {\n      ret[i]++;\n      n\
    \ /= i;\n    }\n  }\n  if(n != 1) ret[n] = 1;\n  return ret;\n}\n"
  code: "/**\n * @brief Prime Factorization\n*/\nmap< ll, int > prime_factorization(ll\
    \ n) {\n  map< ll, int > ret;\n  for(ll i = 2; i * i <= n; i++) {\n    while(n\
    \ % i == 0) {\n      ret[i]++;\n      n /= i;\n    }\n  }\n  if(n != 1) ret[n]\
    \ = 1;\n  return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/prime-factorization.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/prime-factorization.hpp
layout: document
redirect_from:
- /library/math/prime-factorization.hpp
- /library/math/prime-factorization.hpp.html
title: Prime Factorization
---
