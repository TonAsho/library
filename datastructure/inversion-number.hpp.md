---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "Inversion Number(\u8EE2\u5012\u6570)"
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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: others/compressor.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n/**\n * @brief Inversion Number(\u8EE2\u5012\u6570)\n*/\n#include\
    \ <bits/stdc++.h>\n#include \"binary-indexed-tree.hpp\"\n#include \"others/compressor.hpp\"\
    \n\ntemplate<typename T>\nlong long inversion(std::vector<T> a) {\n    int n =\
    \ a.size();\n    Compressor<int> c(a);\n    c.build();\n    std::vector<int> b\
    \ = c.pressed(a);\n    long long res = 0;\n    BinaryIndexedTree<ll> bit(c.size());\n\
    \    for(int i = 0; i < n; ++i) {\n        res += i - bit.sum(0, b[i] + 1);\n\
    \        bit.add(b[i], 1);\n    }\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: datastructure/inversion-number.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: datastructure/inversion-number.hpp
layout: document
redirect_from:
- /library/datastructure/inversion-number.hpp
- /library/datastructure/inversion-number.hpp.html
title: "Inversion Number(\u8EE2\u5012\u6570)"
---
