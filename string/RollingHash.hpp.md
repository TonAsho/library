---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/yukicoder/430.test.cpp
    title: tests/yukicoder/430.test.cpp
  - icon: ':x:'
    path: tests/yukicoder/599.test.cpp
    title: tests/yukicoder/599.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    document_title: RollingHash
    links: []
  bundledCode: "#line 2 \"string/RollingHash.hpp\"\n#include <bits/stdc++.h>\n/**\n\
    \ * @brief RollingHash\n */\n\nstruct RollingHash {\nprivate:\n    static const\
    \ uint64_t mod = (1ull << 61ull) - 1;\n    using uint128_t = __uint128_t;\n  \
    \  std::vector<uint64_t> power;\n    const uint64_t base;\n    static inline uint64_t\
    \ add(uint64_t a, uint64_t b) {\n        if((a += b) >= mod) a -= mod;\n     \
    \   return a;\n    }\n    static inline uint64_t mul(uint64_t a, uint64_t b) {\n\
    \        uint128_t c = (uint128_t)a * b;\n        return add(c >> 61, c & mod);\n\
    \    }\n    static inline uint64_t generate_base() {\n        std::mt19937_64\
    \ mt(std::chrono::steady_clock::now().time_since_epoch().count());\n        std::uniform_int_distribution<\
    \ uint64_t > rand(1, RollingHash::mod - 1);\n        return rand(mt);\n    }\n\
    \    inline void expand(size_t sz) {\n        if(power.size() < sz + 1) {\n  \
    \          int pre_sz = (int)power.size();\n            power.resize(sz + 1);\n\
    \            for(int i = pre_sz - 1; i < sz; i++) {\n                power[i +\
    \ 1] = mul(power[i], base);\n            }\n        }\n    }\npublic:\n    RollingHash(uint64_t\
    \ base = generate_base()) : base(base), power{1} {}\n    std::vector<uint64_t>\
    \ build(const std::string &s) const {\n        int sz = s.size();\n        std::vector<uint64_t>\
    \ hashed(sz + 1);\n        for(int i = 0; i < sz; i++) {\n            hashed[i\
    \ + 1] = add(mul(hashed[i], base), s[i]);\n        }\n        return hashed;\n\
    \    }\n    template<typename T>\n    std::vector<uint64_t> build(const std::vector<T>\
    \ &s) const {\n        int sz = s.size();\n        std::vector<uint64_t> hashed(sz\
    \ + 1);\n        for(int i = 0; i < sz; i++) {\n            hashed[i + 1] = add(mul(hashed[i],\
    \ base), s[i]);\n        }\n        return hashed;\n    }\n    uint64_t hash(const\
    \ std::vector<uint64_t> &s, int l, int r) {\n        expand(r - l);\n        return\
    \ add(s[r], mod - mul(s[l], power[r - l]));\n    }\n    uint64_t all_hash(const\
    \ std::vector<uint64_t> &s) {\n        return s.back();\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n/**\n * @brief RollingHash\n */\n\
    \nstruct RollingHash {\nprivate:\n    static const uint64_t mod = (1ull << 61ull)\
    \ - 1;\n    using uint128_t = __uint128_t;\n    std::vector<uint64_t> power;\n\
    \    const uint64_t base;\n    static inline uint64_t add(uint64_t a, uint64_t\
    \ b) {\n        if((a += b) >= mod) a -= mod;\n        return a;\n    }\n    static\
    \ inline uint64_t mul(uint64_t a, uint64_t b) {\n        uint128_t c = (uint128_t)a\
    \ * b;\n        return add(c >> 61, c & mod);\n    }\n    static inline uint64_t\
    \ generate_base() {\n        std::mt19937_64 mt(std::chrono::steady_clock::now().time_since_epoch().count());\n\
    \        std::uniform_int_distribution< uint64_t > rand(1, RollingHash::mod -\
    \ 1);\n        return rand(mt);\n    }\n    inline void expand(size_t sz) {\n\
    \        if(power.size() < sz + 1) {\n            int pre_sz = (int)power.size();\n\
    \            power.resize(sz + 1);\n            for(int i = pre_sz - 1; i < sz;\
    \ i++) {\n                power[i + 1] = mul(power[i], base);\n            }\n\
    \        }\n    }\npublic:\n    RollingHash(uint64_t base = generate_base()) :\
    \ base(base), power{1} {}\n    std::vector<uint64_t> build(const std::string &s)\
    \ const {\n        int sz = s.size();\n        std::vector<uint64_t> hashed(sz\
    \ + 1);\n        for(int i = 0; i < sz; i++) {\n            hashed[i + 1] = add(mul(hashed[i],\
    \ base), s[i]);\n        }\n        return hashed;\n    }\n    template<typename\
    \ T>\n    std::vector<uint64_t> build(const std::vector<T> &s) const {\n     \
    \   int sz = s.size();\n        std::vector<uint64_t> hashed(sz + 1);\n      \
    \  for(int i = 0; i < sz; i++) {\n            hashed[i + 1] = add(mul(hashed[i],\
    \ base), s[i]);\n        }\n        return hashed;\n    }\n    uint64_t hash(const\
    \ std::vector<uint64_t> &s, int l, int r) {\n        expand(r - l);\n        return\
    \ add(s[r], mod - mul(s[l], power[r - l]));\n    }\n    uint64_t all_hash(const\
    \ std::vector<uint64_t> &s) {\n        return s.back();\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/RollingHash.hpp
  requiredBy: []
  timestamp: '2023-12-03 15:37:02+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - tests/yukicoder/430.test.cpp
  - tests/yukicoder/599.test.cpp
documentation_of: string/RollingHash.hpp
layout: document
redirect_from:
- /library/string/RollingHash.hpp
- /library/string/RollingHash.hpp.html
title: RollingHash
---
