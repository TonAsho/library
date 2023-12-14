---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/alias.hpp
    title: template/alias.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: datastructure/segment-tree.hpp
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
  bundledCode: "#line 2 \"others/monoid.hpp\"\n#include <bits/stdc++.h>\n#line 3 \"\
    template/alias.hpp\"\n\nusing ll = long long;\nusing ull = unsigned long long;\n\
    using ld = long double;\nusing vi = std::vector<int>;\nusing vvi = std::vector<vi>;\n\
    using vl = std::vector<ll>;\nusing vvl = std::vector<vl>;\nusing vd = std::vector<double>;\n\
    using vvd = std::vector<vd>;\nusing vs = std::vector<std::string>;\nusing vvs\
    \ = std::vector<vs>;\nusing vb = std::vector<bool>;\nusing vvb = std::vector<vb>;\n\
    using vc = std::vector<char>;\nusing vvc = std::vector<vc>;\nusing pii = std::pair<int,\
    \ int>;\nusing pll = std::pair<ll, ll>;\nusing mii = std::map<int, int>;\nusing\
    \ mll = std::map<ll, ll>;\ntemplate<typename T>\nstruct infinity{\n    static\
    \ constexpr T max=std::numeric_limits<T>::max();\n    static constexpr T min=std::numeric_limits<T>::min();\n\
    \    static constexpr T value=std::numeric_limits<T>::max()/2;\n    static constexpr\
    \ T mvalue=std::numeric_limits<T>::min()/2;\n};\ntemplate<typename T>constexpr\
    \ T INF=infinity<T>::value;\nconstexpr ll infl=INF<ll>;\nconstexpr int inf = INF<int>;\n\
    constexpr ld PI = 3.1415926535897932384626;\n#line 4 \"others/monoid.hpp\"\n\n\
    namespace Monoid {\n    template<typename T>\n    struct Sum {\n        using\
    \ value_type = T;\n        static constexpr T op(const T &x, const T &y) { return\
    \ x + y; }\n        static constexpr T e() { return T(0); }\n    };\n    template<typename\
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
  code: "#pragma once\n#include <bits/stdc++.h>\n#include \"template/alias.hpp\"\n\
    \nnamespace Monoid {\n    template<typename T>\n    struct Sum {\n        using\
    \ value_type = T;\n        static constexpr T op(const T &x, const T &y) { return\
    \ x + y; }\n        static constexpr T e() { return T(0); }\n    };\n    template<typename\
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
  dependsOn:
  - template/alias.hpp
  isVerificationFile: false
  path: others/monoid.hpp
  requiredBy:
  - datastructure/segment-tree.hpp
  timestamp: '2023-12-14 15:11:54+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/point_add_range_sum.test.cpp
  - tests/aoj/DSL_2_B.test.cpp
  - tests/aoj/DSL_2_A.test.cpp
documentation_of: others/monoid.hpp
layout: document
redirect_from:
- /library/others/monoid.hpp
- /library/others/monoid.hpp.html
title: others/monoid.hpp
---
