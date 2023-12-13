---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: datastructure/SegmentTree.hpp
    title: SegmentTree
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_2_A.test.cpp
    title: tests/aoj/DSL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/aoj/DSL_2_B.test.cpp
    title: tests/aoj/DSL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/yosupo/point_add_range_sum.test.cpp
    title: tests/yosupo/point_add_range_sum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"others/Monoid.hpp\"\n#include <bits/stdc++.h>\n\nnamespace\
    \ Monoid {\n    template<typename T>\n    struct Sum {\n        using value_type\
    \ = T;\n        static constexpr T op(const T &x, const T &y) { return x + y;\
    \ }\n        static constexpr T e() { return T(0); }\n    };\n    template<typename\
    \ T, T max_value = infinity<T>::value>\n    struct Min {\n        using value_type\
    \ = T;\n        static constexpr T op(const T &x, const T &y) { return x < y ?\
    \ x : y; }\n        static constexpr T e() { return max_value; }\n    };\n   \
    \ template<typename T, T min_value = infinity<T>::mvalue>\n    struct Max {\n\
    \        using value_type = T;\n        static constexpr T op(const T &x, const\
    \ T &y){ return x < y ? y : x; }\n        static constexpr T e(){ return min_value;\
    \ }\n    };\n    template<typename T>\n    struct GCD{\n        using value_type\
    \ = T;\n        static T op(const T &x, const T &y) { return gcd(x, y); }\n  \
    \      static T id() { return T(0); }\n    };\n    template<typename T>\n    struct\
    \ LCM{\n        using value_type = T;\n        static T op(const T &x,const T\
    \ &y){ return lcm(x, y); }\n        static T id(){ return T(1); }\n    };\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n\nnamespace Monoid {\n    template<typename\
    \ T>\n    struct Sum {\n        using value_type = T;\n        static constexpr\
    \ T op(const T &x, const T &y) { return x + y; }\n        static constexpr T e()\
    \ { return T(0); }\n    };\n    template<typename T, T max_value = infinity<T>::value>\n\
    \    struct Min {\n        using value_type = T;\n        static constexpr T op(const\
    \ T &x, const T &y) { return x < y ? x : y; }\n        static constexpr T e()\
    \ { return max_value; }\n    };\n    template<typename T, T min_value = infinity<T>::mvalue>\n\
    \    struct Max {\n        using value_type = T;\n        static constexpr T op(const\
    \ T &x, const T &y){ return x < y ? y : x; }\n        static constexpr T e(){\
    \ return min_value; }\n    };\n    template<typename T>\n    struct GCD{\n   \
    \     using value_type = T;\n        static T op(const T &x, const T &y) { return\
    \ gcd(x, y); }\n        static T id() { return T(0); }\n    };\n    template<typename\
    \ T>\n    struct LCM{\n        using value_type = T;\n        static T op(const\
    \ T &x,const T &y){ return lcm(x, y); }\n        static T id(){ return T(1); }\n\
    \    };\n}"
  dependsOn: []
  isVerificationFile: false
  path: others/Monoid.hpp
  requiredBy:
  - datastructure/SegmentTree.hpp
  timestamp: '2023-11-24 17:52:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/point_add_range_sum.test.cpp
  - tests/aoj/DSL_2_B.test.cpp
  - tests/aoj/DSL_2_A.test.cpp
documentation_of: others/Monoid.hpp
layout: document
redirect_from:
- /library/others/Monoid.hpp
- /library/others/Monoid.hpp.html
title: others/Monoid.hpp
---
