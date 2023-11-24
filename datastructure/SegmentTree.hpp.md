---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: others/Monoid.hpp
    title: others/Monoid.hpp
  _extendedRequiredBy: []
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
  bundledCode: "#line 2 \"datastructure/SegmentTree.hpp\"\n#include <bits/stdc++.h>\n\
    \n#line 3 \"others/Monoid.hpp\"\n\nnamespace Monoid {\n    template<typename T>\n\
    \    struct Sum {\n        using value_type = T;\n        static constexpr T op(const\
    \ T &x, const T &y) { return x + y; }\n        static constexpr T e() { return\
    \ T(0); }\n    };\n    template<typename T, T max_value = infinity<T>::value>\n\
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
    \    };\n}\n#line 5 \"datastructure/SegmentTree.hpp\"\n\ntemplate<class M>\nstruct\
    \ SegmentTree {\nprivate:\n    using T = typename M::value_type;\n    int n, sz;\n\
    \    std::vector<T> data;\npublic:\n    SegmentTree() : SegmentTree(0) {}\n  \
    \  SegmentTree(int n, const T &e = M::e()) : SegmentTree(std::vector<T>(n, e))\
    \ {}\n    SegmentTree(const std::vector<T> &v) : n(v.size()), sz(1) {\n      \
    \  while(sz < n) sz <<= 1;\n        data.resize(sz << 1, M::e());\n        for(int\
    \ i = 0; i < n; ++i) data[sz + i] = v[i];\n        for(int i = sz - 1; i >= 1;\
    \ i--) data[i] = M::op(data[i << 1], data[i << 1 ^ 1]);\n    }\n    void update(int\
    \ x, T val) {\n        x += sz;\n        data[x] = val;\n        while(x >>= 1)\
    \ data[x] = M::op(data[x << 1], data[x << 1 ^ 1]);\n    }\n    T prod(int l, int\
    \ r) const {\n        l += sz, r += sz;\n        T lsm = M::e(), rsm = M::e();\n\
    \        while(l != r) {\n            if(l & 1) lsm = M::op(lsm, data[l++]);\n\
    \            if(r & 1) rsm = M::op(data[--r], rsm);\n            l >>= 1;\n  \
    \          r >>= 1;\n        }\n        return M::op(lsm, rsm);\n    }\n    T\
    \ all_prod() const { return data[1]; }\n    T get(int x) const { return data[sz\
    \ + x]; }\n    T operator[](int x) const { return get(x); }\n    template<class\
    \ F>\n    int max_right(int l, const F &f) const {\n        if(l == n) return\
    \ n;\n        l += sz;\n        T sum = M::e();\n        do {\n            while((l\
    \ & 1) == 0) l >>= 1;\n            if(!f(M::op(sum, data[l]))) {\n           \
    \     while(l < sz) {\n                    l <<= 1;\n                    if(f(M::op(sum,\
    \ data[l]))) sum = M::op(sum, data[l++]);\n                }\n               \
    \ return l-sz;\n            }\n            sum = M::op(sum, data[l++]);\n    \
    \    } while((l & -l) != l);\n        return n;\n    }\n    template<class F>\n\
    \    int min_left(int r, const F &f) const {\n        if(r == 0) return 0;\n \
    \       r += sz;\n        T sum = M::e();\n        do{\n            --r;\n   \
    \         while((r & 1) && r > 1) r >>= 1;\n            if(!f(M::op(data[r],sum)))\
    \ {\n                while(r < sz) {\n                    r = (r << 1) ^ 1;\n\
    \                    if(f(M::op(data[r],sum))) sum = M::op(data[r--], sum);\n\
    \                }\n                return r + 1 - sz;\n            }\n      \
    \      sum = M::op(data[r], sum);\n        } while((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\n\n#include \"others/Monoid.hpp\"\n\
    \ntemplate<class M>\nstruct SegmentTree {\nprivate:\n    using T = typename M::value_type;\n\
    \    int n, sz;\n    std::vector<T> data;\npublic:\n    SegmentTree() : SegmentTree(0)\
    \ {}\n    SegmentTree(int n, const T &e = M::e()) : SegmentTree(std::vector<T>(n,\
    \ e)) {}\n    SegmentTree(const std::vector<T> &v) : n(v.size()), sz(1) {\n  \
    \      while(sz < n) sz <<= 1;\n        data.resize(sz << 1, M::e());\n      \
    \  for(int i = 0; i < n; ++i) data[sz + i] = v[i];\n        for(int i = sz - 1;\
    \ i >= 1; i--) data[i] = M::op(data[i << 1], data[i << 1 ^ 1]);\n    }\n    void\
    \ update(int x, T val) {\n        x += sz;\n        data[x] = val;\n        while(x\
    \ >>= 1) data[x] = M::op(data[x << 1], data[x << 1 ^ 1]);\n    }\n    T prod(int\
    \ l, int r) const {\n        l += sz, r += sz;\n        T lsm = M::e(), rsm =\
    \ M::e();\n        while(l != r) {\n            if(l & 1) lsm = M::op(lsm, data[l++]);\n\
    \            if(r & 1) rsm = M::op(data[--r], rsm);\n            l >>= 1;\n  \
    \          r >>= 1;\n        }\n        return M::op(lsm, rsm);\n    }\n    T\
    \ all_prod() const { return data[1]; }\n    T get(int x) const { return data[sz\
    \ + x]; }\n    T operator[](int x) const { return get(x); }\n    template<class\
    \ F>\n    int max_right(int l, const F &f) const {\n        if(l == n) return\
    \ n;\n        l += sz;\n        T sum = M::e();\n        do {\n            while((l\
    \ & 1) == 0) l >>= 1;\n            if(!f(M::op(sum, data[l]))) {\n           \
    \     while(l < sz) {\n                    l <<= 1;\n                    if(f(M::op(sum,\
    \ data[l]))) sum = M::op(sum, data[l++]);\n                }\n               \
    \ return l-sz;\n            }\n            sum = M::op(sum, data[l++]);\n    \
    \    } while((l & -l) != l);\n        return n;\n    }\n    template<class F>\n\
    \    int min_left(int r, const F &f) const {\n        if(r == 0) return 0;\n \
    \       r += sz;\n        T sum = M::e();\n        do{\n            --r;\n   \
    \         while((r & 1) && r > 1) r >>= 1;\n            if(!f(M::op(data[r],sum)))\
    \ {\n                while(r < sz) {\n                    r = (r << 1) ^ 1;\n\
    \                    if(f(M::op(data[r],sum))) sum = M::op(data[r--], sum);\n\
    \                }\n                return r + 1 - sz;\n            }\n      \
    \      sum = M::op(data[r], sum);\n        } while((r & -r) != r);\n        return\
    \ 0;\n    }\n};"
  dependsOn:
  - others/Monoid.hpp
  isVerificationFile: false
  path: datastructure/SegmentTree.hpp
  requiredBy: []
  timestamp: '2023-11-24 17:52:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/yosupo/point_add_range_sum.test.cpp
  - tests/aoj/DSL_2_A.test.cpp
  - tests/aoj/DSL_2_B.test.cpp
documentation_of: datastructure/SegmentTree.hpp
layout: document
redirect_from:
- /library/datastructure/SegmentTree.hpp
- /library/datastructure/SegmentTree.hpp.html
title: datastructure/SegmentTree.hpp
---
