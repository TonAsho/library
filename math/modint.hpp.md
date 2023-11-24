---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: Cumulative Sum
    links: []
  bundledCode: "#line 2 \"math/modint.hpp\"\n/**\n * @brief Cumulative Sum\n */\n\
    #include <bits/stdc++.h>\n\ntemplate <long long mod>\nstruct modint {\n    modint(ll\
    \ v = 0) : value(normalize(v)) {}\n    ll val() const { return value; }\n    void\
    \ normalize() { value = normalize(value); }\n    ll normalize(ll v) {\n      \
    \  if (v <= mod && v >= -mod) {\n        if (v < 0) v += mod;\n        return\
    \ v;\n        }\n        if (v > 0 && v < 2 * mod) {\n        v -= mod;\n    \
    \    return v;\n        }\n        if (v < 0 && v > -2 * mod) {\n        v +=\
    \ 2 * mod;\n        return v;\n        }\n        v %= mod;\n        if (v < 0)\
    \ v += mod;\n        return v;\n    }\n    modint<mod>& operator=(ll v) {\n  \
    \      value = normalize(v);\n        return *this;\n    }\n    bool operator==(const\
    \ modint& o) const { return value == o.val(); }\n    bool operator!=(const modint&\
    \ o) const { return value != o.val(); }\n    const modint& operator+() const {\
    \ return *this; }\n    const modint& operator-() const { return value ? mod -\
    \ value : 0; }\n    const modint operator+(const modint& o) const {\n        return\
    \ value + o.val();\n    }\n    modint& operator+=(const modint& o) {\n       \
    \ value += o.val();\n        if (value >= mod) value -= mod;\n        return *this;\n\
    \    }\n    const modint operator-(const modint& o) const {\n        return value\
    \ - o.val();\n    }\n    modint& operator-=(const modint& o) {\n        value\
    \ -= o.val();\n        if (value < 0) value += mod;\n        return *this;\n \
    \   }\n    const modint operator*(const modint& o) const {\n        return (value\
    \ * o.val()) % mod;\n    }\n    modint& operator*=(const modint& o) {\n      \
    \  value *= o.val();\n        value %= mod;\n        return *this;\n    }\n  \
    \  const modint operator/(const modint& o) const { return operator*(o.inv());\
    \ }\n    modint& operator/=(const modint& o) { return operator*=(o.inv()); }\n\
    \    const modint pow(ll n) const {\n        modint ans = 1, x(value);\n     \
    \   while (n > 0) {\n        if (n & 1) ans *= x;\n        x *= x;\n        n\
    \ >>= 1;\n        }\n        return ans;\n    }\n    const modint inv() const\
    \ {\n        ll a = value, b = mod, u = 1, v = 0;\n        while (b) {\n     \
    \   ll t = a / b;\n        a -= t * b;\n        swap(a, b);\n        u -= t *\
    \ v;\n        swap(u, v);\n        }\n        return u;\n    }\n    friend ostream&\
    \ operator<<(ostream& os, const modint& x) {\n        return os << x.val();\n\
    \    }\n    template <typename T>\n    friend modint operator+(T t, const modint&\
    \ o) {\n        return o + t;\n    }\n    template <typename T>\n    friend modint\
    \ operator-(T t, const modint& o) {\n        return -o + t;\n    }\n    template\
    \ <typename T>\n    friend modint operator*(T t, const modint& o) {\n        return\
    \ o * t;\n    }\n    template <typename T>\n    friend modint operator/(T t, const\
    \ modint& o) {\n        return o.inv() * t;\n    }\n\n    private:\n    ll value;\n\
    };\nusing modint1000000007 = modint<1000000007>;\nusing modint998244353 = modint<998244353>;\n"
  code: "#pragma once\n/**\n * @brief Cumulative Sum\n */\n#include <bits/stdc++.h>\n\
    \ntemplate <long long mod>\nstruct modint {\n    modint(ll v = 0) : value(normalize(v))\
    \ {}\n    ll val() const { return value; }\n    void normalize() { value = normalize(value);\
    \ }\n    ll normalize(ll v) {\n        if (v <= mod && v >= -mod) {\n        if\
    \ (v < 0) v += mod;\n        return v;\n        }\n        if (v > 0 && v < 2\
    \ * mod) {\n        v -= mod;\n        return v;\n        }\n        if (v < 0\
    \ && v > -2 * mod) {\n        v += 2 * mod;\n        return v;\n        }\n  \
    \      v %= mod;\n        if (v < 0) v += mod;\n        return v;\n    }\n   \
    \ modint<mod>& operator=(ll v) {\n        value = normalize(v);\n        return\
    \ *this;\n    }\n    bool operator==(const modint& o) const { return value ==\
    \ o.val(); }\n    bool operator!=(const modint& o) const { return value != o.val();\
    \ }\n    const modint& operator+() const { return *this; }\n    const modint&\
    \ operator-() const { return value ? mod - value : 0; }\n    const modint operator+(const\
    \ modint& o) const {\n        return value + o.val();\n    }\n    modint& operator+=(const\
    \ modint& o) {\n        value += o.val();\n        if (value >= mod) value -=\
    \ mod;\n        return *this;\n    }\n    const modint operator-(const modint&\
    \ o) const {\n        return value - o.val();\n    }\n    modint& operator-=(const\
    \ modint& o) {\n        value -= o.val();\n        if (value < 0) value += mod;\n\
    \        return *this;\n    }\n    const modint operator*(const modint& o) const\
    \ {\n        return (value * o.val()) % mod;\n    }\n    modint& operator*=(const\
    \ modint& o) {\n        value *= o.val();\n        value %= mod;\n        return\
    \ *this;\n    }\n    const modint operator/(const modint& o) const { return operator*(o.inv());\
    \ }\n    modint& operator/=(const modint& o) { return operator*=(o.inv()); }\n\
    \    const modint pow(ll n) const {\n        modint ans = 1, x(value);\n     \
    \   while (n > 0) {\n        if (n & 1) ans *= x;\n        x *= x;\n        n\
    \ >>= 1;\n        }\n        return ans;\n    }\n    const modint inv() const\
    \ {\n        ll a = value, b = mod, u = 1, v = 0;\n        while (b) {\n     \
    \   ll t = a / b;\n        a -= t * b;\n        swap(a, b);\n        u -= t *\
    \ v;\n        swap(u, v);\n        }\n        return u;\n    }\n    friend ostream&\
    \ operator<<(ostream& os, const modint& x) {\n        return os << x.val();\n\
    \    }\n    template <typename T>\n    friend modint operator+(T t, const modint&\
    \ o) {\n        return o + t;\n    }\n    template <typename T>\n    friend modint\
    \ operator-(T t, const modint& o) {\n        return -o + t;\n    }\n    template\
    \ <typename T>\n    friend modint operator*(T t, const modint& o) {\n        return\
    \ o * t;\n    }\n    template <typename T>\n    friend modint operator/(T t, const\
    \ modint& o) {\n        return o.inv() * t;\n    }\n\n    private:\n    ll value;\n\
    };\nusing modint1000000007 = modint<1000000007>;\nusing modint998244353 = modint<998244353>;"
  dependsOn: []
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy: []
  timestamp: '2023-11-24 17:52:33+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/modint.hpp
layout: document
redirect_from:
- /library/math/modint.hpp
- /library/math/modint.hpp.html
title: Cumulative Sum
---
