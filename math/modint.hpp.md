---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/alias.hpp
    title: template/alias.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/yukicoder/599.test.cpp
    title: tests/yukicoder/599.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: ModInt
    links: []
  bundledCode: "#line 2 \"math/modint.hpp\"\n/**\n * @brief ModInt\n */\n#include\
    \ <bits/stdc++.h>\n#line 3 \"template/alias.hpp\"\n\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nusing ld = long double;\nusing vi = std::vector<int>;\n\
    using vvi = std::vector<vi>;\nusing vl = std::vector<ll>;\nusing vvl = std::vector<vl>;\n\
    using vd = std::vector<double>;\nusing vvd = std::vector<vd>;\nusing vs = std::vector<std::string>;\n\
    using vvs = std::vector<vs>;\nusing vb = std::vector<bool>;\nusing vvb = std::vector<vb>;\n\
    using vc = std::vector<char>;\nusing vvc = std::vector<vc>;\nusing pii = std::pair<int,\
    \ int>;\nusing pll = std::pair<ll, ll>;\nusing mii = std::map<int, int>;\nusing\
    \ mll = std::map<ll, ll>;\ntemplate<typename T>\nstruct infinity{\n    static\
    \ constexpr T max=std::numeric_limits<T>::max();\n    static constexpr T min=std::numeric_limits<T>::min();\n\
    \    static constexpr T value=std::numeric_limits<T>::max()/2;\n    static constexpr\
    \ T mvalue=std::numeric_limits<T>::min()/2;\n};\ntemplate<typename T>constexpr\
    \ T INF=infinity<T>::value;\nconstexpr ll infl=INF<ll>;\nconstexpr int inf = INF<int>;\n\
    constexpr ld PI = 3.1415926535897932384626;\n#line 7 \"math/modint.hpp\"\n\ntemplate<std::size_t\
    \ size>\nstruct uint_least{\n    static_assert(size<=128,\"size must be less than\
    \ or equal to 128\");\n    using type=typename std::conditional<\n        size<=8,std::uint_least8_t,\n\
    \        typename std::conditional<\n            size<=16,std::uint_least16_t,\n\
    \            typename std::conditional<\n                size<=32,std::uint_least32_t,\n\
    \                typename std::conditional<size<=64,std::uint_least64_t,__uint128_t>::type>::type>::type>::type;\n\
    };\ntemplate<std::size_t size> using uint_least_t = typename uint_least<size>::type;\n\
    namespace internal{\n    struct modint_base{};\n}//naespace internal\ntemplate<typename\
    \ T>using is_modint = std::is_base_of<internal::modint_base,T>;\ntemplate<typename\
    \ T,T mod>\nstruct StaticModInt:internal::modint_base{\n    static_assert(std::is_integral<T>::value,\
    \ \"T must be integral\");\n    static_assert(std::is_unsigned<T>::value, \"T\
    \ must be unsgined\");\n    static_assert(mod>0, \"mod must be positive\");\n\
    \    static_assert(mod<=INF<T>, \"mod*2 must be less than or equal to T::max()\"\
    );\n  private:\n    using large_t = typename uint_least<std::numeric_limits<T>::digits\
    \ * 2>::type;\n    using signed_t = typename std::make_signed<T>::type;\n    T\
    \ val;\n  public:\n    constexpr StaticModInt():val(0){}\n    template<typename\
    \ U,typename std::enable_if<std::is_integral<U>::value&&std::is_unsigned<U>::value>::type*\
    \ =nullptr>\n    constexpr StaticModInt(U x):val(x%mod){}\n    template<typename\
    \ U,typename std::enable_if<std::is_integral<U>::value&&std::is_signed<U>::value>::type*\
    \ =nullptr>\n    constexpr StaticModInt(U x):val{}{\n        x%=static_cast<signed_t>(mod);\n\
    \        if(x<0)x+=static_cast<signed_t>(mod);\n        val=static_cast<T>(x);\n\
    \    }\n    T get()const{return val;}\n    static constexpr T get_mod(){return\
    \ mod;}\n    static StaticModInt raw(T v){\n        StaticModInt res;\n      \
    \  res.val=v;\n        return res;\n    }\n    StaticModInt inv()const{\n    \
    \    return mod_inv(val,mod);\n    }\n    StaticModInt& operator++(){\n      \
    \  ++val;\n        if(val==mod)val=0;\n        return *this;\n    }\n    StaticModInt\
    \ operator++(int){\n        StaticModInt res=*this;\n        ++*this;\n      \
    \  return res;\n    }\n    StaticModInt& operator--(){\n        if(val==0)val=mod;\n\
    \        --val;\n        return *this;\n    }\n    StaticModInt operator--(int){\n\
    \        StaticModInt res=*this;\n        --*this;\n        return res;\n    }\n\
    \    StaticModInt& operator+=(const StaticModInt&x){\n        val+=x.val;\n  \
    \      if(val>=mod)val-=mod;\n        return *this;\n    }\n    StaticModInt&\
    \ operator-=(const StaticModInt&x){\n        if(val<x.val)val+=mod;\n        val-=x.val;\n\
    \        return *this;\n    }\n    StaticModInt& operator*=(const StaticModInt&x){\n\
    \        val=static_cast<T>((static_cast<large_t>(val)*x.val)%mod);\n        return\
    \ *this;\n    }\n    StaticModInt& operator/=(const StaticModInt&x){\n       \
    \ return *this*=x.inv();\n    }\n    friend StaticModInt operator+(const StaticModInt&l,const\
    \ StaticModInt&r){return StaticModInt(l)+=r;}\n    friend StaticModInt operator-(const\
    \ StaticModInt&l,const StaticModInt&r){return StaticModInt(l)-=r;}\n    friend\
    \ StaticModInt operator*(const StaticModInt&l,const StaticModInt&r){return StaticModInt(l)*=r;}\n\
    \    friend StaticModInt operator/(const StaticModInt&l,const StaticModInt&r){return\
    \ StaticModInt(l)/=r;}\n    StaticModInt operator+()const{return StaticModInt(*this);}\n\
    \    StaticModInt operator-()const{return StaticModInt()-*this;}\n    friend bool\
    \ operator==(const StaticModInt&l,const StaticModInt&r){return l.val==r.val;}\n\
    \    friend bool operator!=(const StaticModInt&l,const StaticModInt&r){return\
    \ l.val!=r.val;}\n    StaticModInt pow(long long a)const{\n        StaticModInt\
    \ v=*this,res=1;\n        while(a){\n            if(a&1)res*=v;\n            v*=v;\n\
    \            a>>=1;\n        }\n        return res;\n    }\n    friend std::ostream\
    \ &operator<<(std::ostream &os,const StaticModInt&x){\n        return os<<x.val;\n\
    \    }\n    friend std::istream &operator>>(std::istream &is,StaticModInt&x){\n\
    \        long long tmp;\n        is>>tmp;\n        x=StaticModInt(tmp);\n    \
    \    return is;\n    }\n};\ntemplate<unsigned int p>using ModInt=StaticModInt<unsigned\
    \ int,p>;\nusing modint998244353 = ModInt<998244353>;\nusing modint1000000007\
    \ = ModInt<1000000007>;\n"
  code: "#pragma once\n/**\n * @brief ModInt\n */\n#include <bits/stdc++.h>\n#include\
    \ \"template/alias.hpp\"\n\ntemplate<std::size_t size>\nstruct uint_least{\n \
    \   static_assert(size<=128,\"size must be less than or equal to 128\");\n   \
    \ using type=typename std::conditional<\n        size<=8,std::uint_least8_t,\n\
    \        typename std::conditional<\n            size<=16,std::uint_least16_t,\n\
    \            typename std::conditional<\n                size<=32,std::uint_least32_t,\n\
    \                typename std::conditional<size<=64,std::uint_least64_t,__uint128_t>::type>::type>::type>::type;\n\
    };\ntemplate<std::size_t size> using uint_least_t = typename uint_least<size>::type;\n\
    namespace internal{\n    struct modint_base{};\n}//naespace internal\ntemplate<typename\
    \ T>using is_modint = std::is_base_of<internal::modint_base,T>;\ntemplate<typename\
    \ T,T mod>\nstruct StaticModInt:internal::modint_base{\n    static_assert(std::is_integral<T>::value,\
    \ \"T must be integral\");\n    static_assert(std::is_unsigned<T>::value, \"T\
    \ must be unsgined\");\n    static_assert(mod>0, \"mod must be positive\");\n\
    \    static_assert(mod<=INF<T>, \"mod*2 must be less than or equal to T::max()\"\
    );\n  private:\n    using large_t = typename uint_least<std::numeric_limits<T>::digits\
    \ * 2>::type;\n    using signed_t = typename std::make_signed<T>::type;\n    T\
    \ val;\n  public:\n    constexpr StaticModInt():val(0){}\n    template<typename\
    \ U,typename std::enable_if<std::is_integral<U>::value&&std::is_unsigned<U>::value>::type*\
    \ =nullptr>\n    constexpr StaticModInt(U x):val(x%mod){}\n    template<typename\
    \ U,typename std::enable_if<std::is_integral<U>::value&&std::is_signed<U>::value>::type*\
    \ =nullptr>\n    constexpr StaticModInt(U x):val{}{\n        x%=static_cast<signed_t>(mod);\n\
    \        if(x<0)x+=static_cast<signed_t>(mod);\n        val=static_cast<T>(x);\n\
    \    }\n    T get()const{return val;}\n    static constexpr T get_mod(){return\
    \ mod;}\n    static StaticModInt raw(T v){\n        StaticModInt res;\n      \
    \  res.val=v;\n        return res;\n    }\n    StaticModInt inv()const{\n    \
    \    return mod_inv(val,mod);\n    }\n    StaticModInt& operator++(){\n      \
    \  ++val;\n        if(val==mod)val=0;\n        return *this;\n    }\n    StaticModInt\
    \ operator++(int){\n        StaticModInt res=*this;\n        ++*this;\n      \
    \  return res;\n    }\n    StaticModInt& operator--(){\n        if(val==0)val=mod;\n\
    \        --val;\n        return *this;\n    }\n    StaticModInt operator--(int){\n\
    \        StaticModInt res=*this;\n        --*this;\n        return res;\n    }\n\
    \    StaticModInt& operator+=(const StaticModInt&x){\n        val+=x.val;\n  \
    \      if(val>=mod)val-=mod;\n        return *this;\n    }\n    StaticModInt&\
    \ operator-=(const StaticModInt&x){\n        if(val<x.val)val+=mod;\n        val-=x.val;\n\
    \        return *this;\n    }\n    StaticModInt& operator*=(const StaticModInt&x){\n\
    \        val=static_cast<T>((static_cast<large_t>(val)*x.val)%mod);\n        return\
    \ *this;\n    }\n    StaticModInt& operator/=(const StaticModInt&x){\n       \
    \ return *this*=x.inv();\n    }\n    friend StaticModInt operator+(const StaticModInt&l,const\
    \ StaticModInt&r){return StaticModInt(l)+=r;}\n    friend StaticModInt operator-(const\
    \ StaticModInt&l,const StaticModInt&r){return StaticModInt(l)-=r;}\n    friend\
    \ StaticModInt operator*(const StaticModInt&l,const StaticModInt&r){return StaticModInt(l)*=r;}\n\
    \    friend StaticModInt operator/(const StaticModInt&l,const StaticModInt&r){return\
    \ StaticModInt(l)/=r;}\n    StaticModInt operator+()const{return StaticModInt(*this);}\n\
    \    StaticModInt operator-()const{return StaticModInt()-*this;}\n    friend bool\
    \ operator==(const StaticModInt&l,const StaticModInt&r){return l.val==r.val;}\n\
    \    friend bool operator!=(const StaticModInt&l,const StaticModInt&r){return\
    \ l.val!=r.val;}\n    StaticModInt pow(long long a)const{\n        StaticModInt\
    \ v=*this,res=1;\n        while(a){\n            if(a&1)res*=v;\n            v*=v;\n\
    \            a>>=1;\n        }\n        return res;\n    }\n    friend std::ostream\
    \ &operator<<(std::ostream &os,const StaticModInt&x){\n        return os<<x.val;\n\
    \    }\n    friend std::istream &operator>>(std::istream &is,StaticModInt&x){\n\
    \        long long tmp;\n        is>>tmp;\n        x=StaticModInt(tmp);\n    \
    \    return is;\n    }\n};\ntemplate<unsigned int p>using ModInt=StaticModInt<unsigned\
    \ int,p>;\nusing modint998244353 = ModInt<998244353>;\nusing modint1000000007\
    \ = ModInt<1000000007>;"
  dependsOn:
  - template/alias.hpp
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy: []
  timestamp: '2023-12-14 20:01:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yukicoder/599.test.cpp
documentation_of: math/modint.hpp
layout: document
redirect_from:
- /library/math/modint.hpp
- /library/math/modint.hpp.html
title: ModInt
---
