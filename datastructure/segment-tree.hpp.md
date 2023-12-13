---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: SegmentTree
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: others/monoid.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n/**\n * @brief SegmentTree\n**/\n#include <bits/stdc++.h>\n\
    \n#include \"others/monoid.hpp\"\n\ntemplate<class M>\nstruct SegmentTree {\n\
    \  private:\n    using T = typename M::value_type;\n    int n, sz;\n    std::vector<T>\
    \ data;\n  public:\n    SegmentTree() : SegmentTree(0) {}\n    SegmentTree(int\
    \ n, const T &e = M::e()) : SegmentTree(std::vector<T>(n, e)) {}\n    SegmentTree(const\
    \ std::vector<T> &v) : n(v.size()), sz(1) {\n        while(sz < n) sz <<= 1;\n\
    \        data.resize(sz << 1, M::e());\n        for(int i = 0; i < n; ++i) data[sz\
    \ + i] = v[i];\n        for(int i = sz - 1; i >= 1; i--) data[i] = M::op(data[i\
    \ << 1], data[i << 1 ^ 1]);\n    }\n    void update(int x, T val) {\n        x\
    \ += sz;\n        data[x] = val;\n        while(x >>= 1) data[x] = M::op(data[x\
    \ << 1], data[x << 1 ^ 1]);\n    }\n    T prod(int l, int r) const {\n       \
    \ l += sz, r += sz;\n        T lsm = M::e(), rsm = M::e();\n        while(l !=\
    \ r) {\n            if(l & 1) lsm = M::op(lsm, data[l++]);\n            if(r &\
    \ 1) rsm = M::op(data[--r], rsm);\n            l >>= 1;\n            r >>= 1;\n\
    \        }\n        return M::op(lsm, rsm);\n    }\n    T all_prod() const { return\
    \ data[1]; }\n    T get(int x) const { return data[sz + x]; }\n    T operator[](int\
    \ x) const { return get(x); }\n    template<class F>\n    int max_right(int l,\
    \ const F &f) const {\n        if(l == n) return n;\n        l += sz;\n      \
    \  T sum = M::e();\n        do {\n            while((l & 1) == 0) l >>= 1;\n \
    \           if(!f(M::op(sum, data[l]))) {\n                while(l < sz) {\n \
    \                   l <<= 1;\n                    if(f(M::op(sum, data[l]))) sum\
    \ = M::op(sum, data[l++]);\n                }\n                return l-sz;\n\
    \            }\n            sum = M::op(sum, data[l++]);\n        } while((l &\
    \ -l) != l);\n        return n;\n    }\n    template<class F>\n    int min_left(int\
    \ r, const F &f) const {\n        if(r == 0) return 0;\n        r += sz;\n   \
    \     T sum = M::e();\n        do{\n            --r;\n            while((r & 1)\
    \ && r > 1) r >>= 1;\n            if(!f(M::op(data[r],sum))) {\n             \
    \   while(r < sz) {\n                    r = (r << 1) ^ 1;\n                 \
    \   if(f(M::op(data[r],sum))) sum = M::op(data[r--], sum);\n                }\n\
    \                return r + 1 - sz;\n            }\n            sum = M::op(data[r],\
    \ sum);\n        } while((r & -r) != r);\n        return 0;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/segment-tree.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: datastructure/segment-tree.hpp
layout: document
redirect_from:
- /library/datastructure/segment-tree.hpp
- /library/datastructure/segment-tree.hpp.html
title: SegmentTree
---
