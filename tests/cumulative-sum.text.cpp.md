---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: math/cumulative-sum.hpp
    title: "Cumulative Sum(\u4E00\u6B21\u5143\u7D2F\u7A4D\u548C)"
  - icon: ':warning:'
    path: template/template.hpp
    title: Template
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"tests/cumulative-sum.text.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\
    \n#line 2 \"template/template.hpp\"\n/**\n * @brief Header\n */\n#include <algorithm>\n\
    #include <cmath>\n#include <complex>\n#include <cstdio>\n#include <iostream>\n\
    #include <map>\n#include <numeric>\n#include <queue>\n#include <set>\n#include\
    \ <stack>\n#include <string>\n#include <vector>\n#include <climits>\n#include\
    \ <deque>\n#include <iomanip>\n#include <limits>\nusing namespace std;\ntypedef\
    \ long long ll;\n#define overload4(_1, _2, _3, _4, name, ...) name\n#define rep1(i,\
    \ n) for (ll i = 0; i < ll(n); ++i)\n#define rep2(i, s, n) for (ll i = ll(s);\
    \ i < ll(n); ++i)\n#define rep3(i, s, n, d) for(ll i = ll(s); i < ll(n); i+=d)\n\
    #define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n#define all(x)\
    \ (x).begin(),(x).end()\n#define rall(x) (x).rbegin(),(x).rend()\n#define fir\
    \ first\n#define sec second\n#define pb push_back\n#define em emplace_back\n#define\
    \ mk make_pair\n#define SUM(a) accumulate(all(a),0LL)\n#define MIN(a) *min_element(all(a))\n\
    #define MAX(a) *max_element(all(a))\ntemplate<class... T> void input(T&... a){(cin\
    \ >> ... >> a);}\n#define INT(...) int __VA_ARGS__;input(__VA_ARGS__)\n#define\
    \ LL(...) ll __VA_ARGS__;input(__VA_ARGS__)\n#define STR(...) string __VA_ARGS__;input(__VA_ARGS__)\n\
    #define DBL(...) double __VA_ARGS__;input(__VA_ARGS__)\nvoid Yes(bool iSizIs=true)\
    \ {if(iSizIs){cout<<\"Yes\"<<endl;}else{cout<<\"No\"<<endl;}}\nvoid No() {cout<<\"\
    No\"<<endl;}\ntemplate<class T> void OUT(T x) {cout << (x) << endl;}\ntemplate<class\
    \ T> bool chmin(T &a, T b) {if (a > b) {a = b;return true;}return false;}\ntemplate<class\
    \ T> bool chmax(T &a, T b) {if (a < b) {a = b;return true;}return false;}\ntemplate<class\
    \ T> T POW(T a, T b) {T res = 1;for(int i=0;i<b;++i) res*= a;return res;}\nconst\
    \ int inf = INT_MAX / 2; \nconst ll infl = 1LL << 60;\nusing vi = vector<int>;\n\
    using vvi = vector<vi>;\nusing vl = vector<ll>;\nusing vvl = vector<vl>;\nusing\
    \ vd = vector<double>;\nusing vvd = vector<vd>;\nusing vs = vector<string>;\n\
    using vvs = vector<vs>;\nusing vb = vector<bool>;\nusing vvb = vector<vb>;\nusing\
    \ pii = pair<int, int>;\nusing pll = pair<ll, ll>;\nusing mii = map<int, int>;\n\
    using mll = map<ll, ll>;\n#include <atcoder/all>\nusing namespace atcoder;\n#line\
    \ 2 \"math/cumulative-sum.hpp\"\n/**\n * @brief Cumulative Sum(\u4E00\u6B21\u5143\
    \u7D2F\u8A08\u548C)\n */\ntemplate< class T >\nstruct CumulativeSum {\n  vector<\
    \ T > data;\n  CumulativeSum() = default;\n  explicit CumulativeSum(size_t sz)\
    \ : data(sz + 1, 0) {}\n  void add(int k, const T &x) {data[k + 1] += x;}\n  void\
    \ build() {\n    for(int i = 1; i < data.size(); i++) {\n      data[i] += data[i\
    \ - 1];\n    }\n  }\n  T get(int r) const {\n    if(r < 0) return 0;\n    return\
    \ data[min(r, (int) data.size() - 1)];\n  }\n  T get(int l, int r) const {\n \
    \   return get(r) - get(l);\n  }\n};\n#line 4 \"tests/cumulative-sum.text.cpp\"\
    \n\nint main() {\n    int n, q; cin >> n >> q;\n    CumulativeSum<ll> a(n);\n\
    \    rep(i, n) {\n        LL(x);\n        a.add(i, x);\n    }\n    rep(i,q) {\n\
    \        INT(l, r);\n        cout << a.get(l, r) << endl;\n    }\n    return 0;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n#include\
    \ \"template/template.hpp\"\n#include \"math/cumulative-sum.hpp\"\n\nint main()\
    \ {\n    int n, q; cin >> n >> q;\n    CumulativeSum<ll> a(n);\n    rep(i, n)\
    \ {\n        LL(x);\n        a.add(i, x);\n    }\n    rep(i,q) {\n        INT(l,\
    \ r);\n        cout << a.get(l, r) << endl;\n    }\n    return 0;\n}"
  dependsOn:
  - template/template.hpp
  - math/cumulative-sum.hpp
  isVerificationFile: false
  path: tests/cumulative-sum.text.cpp
  requiredBy: []
  timestamp: '2023-02-06 22:22:02+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: tests/cumulative-sum.text.cpp
layout: document
redirect_from:
- /library/tests/cumulative-sum.text.cpp
- /library/tests/cumulative-sum.text.cpp.html
title: tests/cumulative-sum.text.cpp
---
