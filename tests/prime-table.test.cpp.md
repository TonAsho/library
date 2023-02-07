---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/prime-table.hpp
    title: math/prime-table.hpp
  - icon: ':x:'
    path: math/prime.hpp
    title: "Prime Table(\u7D20\u6570\u30C6\u30FC\u30D6\u30EB)"
  - icon: ':question:'
    path: template/template-yosupo.hpp
    title: Header
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/counting_primes
    links:
    - https://judge.yosupo.jp/problem/counting_primes
  bundledCode: "#line 1 \"tests/prime-table.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/counting_primes\"\
    \n#line 2 \"template/template-yosupo.hpp\"\n/**\n * @brief Header\n */\n#include\
    \ <algorithm>\n#include <cmath>\n#include <complex>\n#include <cstdio>\n#include\
    \ <iostream>\n#include <map>\n#include <numeric>\n#include <queue>\n#include <set>\n\
    #include <stack>\n#include <string>\n#include <vector>\n#include <climits>\n#include\
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
    using mll = map<ll, ll>;\n#line 1 \"math/prime.hpp\"\n/**\n * @brief Prime Table(\u7D20\
    \u6570\u30C6\u30FC\u30D6\u30EB)\n*/\nvector< bool > prime(int n) {\n  vector<\
    \ bool > primes(n + 1, true);\n  if(n >= 0) primes[0] = false;\n  if(n >= 1) primes[1]\
    \ = false;\n  for(int i = 2; i * i <= n; i++) {\n    if(!primes[i]) continue;\n\
    \    for(int j = i * i; j <= n; j += i) {\n      primes[j] = false;\n    }\n \
    \ }\n  return primes;\n}\n#line 2 \"math/prime-table.hpp\"\n\nvector< int >  prime_table(int\
    \ n) {\n    if(n <= 1) return {};\n    auto d = prime(n);\n    vector< int > primes;\n\
    \    rep(i, d.size()) {\n        if(d[i]) primes.push_back(i);\n    }\n    return\
    \ primes;\n}\n#line 4 \"tests/prime-table.test.cpp\"\n\nint main() {\n    LL(n);\n\
    \    cout << prime_table(n).size() << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/counting_primes\"\n#include\
    \ \"template/template-yosupo.hpp\"\n#include \"math/prime-table.hpp\"\n\nint main()\
    \ {\n    LL(n);\n    cout << prime_table(n).size() << endl;\n    return 0;\n}"
  dependsOn:
  - template/template-yosupo.hpp
  - math/prime-table.hpp
  - math/prime.hpp
  isVerificationFile: true
  path: tests/prime-table.test.cpp
  requiredBy: []
  timestamp: '2023-02-07 22:31:03+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: tests/prime-table.test.cpp
layout: document
redirect_from:
- /verify/tests/prime-table.test.cpp
- /verify/tests/prime-table.test.cpp.html
title: tests/prime-table.test.cpp
---
