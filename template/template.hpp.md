---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/cumulative-sum.test.cpp
    title: tests/cumulative-sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: tests/dijkstra.test.cpp
    title: tests/dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Header
    links: []
  bundledCode: "#line 2 \"template/template.hpp\"\n/**\n * @brief Header\n */\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\ntypedef long long ll;\nvoid _main();\
    \ int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); return 0;}\n\
    #pragma GCC target(\"avx2\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#define overload4(_1, _2, _3, _4, name, ...) name\n#define rep1(i,\
    \ n) for (int i = 0; i < int(n); ++i)\n#define rep2(i, s, n) for (int i = int(s);\
    \ i < int(n); ++i)\n#define rep3(i, s, n, d) for(int i = int(s); i < int(n); i+=d)\n\
    #define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n#define all(x)\
    \ (x).begin(),(x).end()\n#define rall(x) (x).rbegin(),(x).rend()\n#define fir\
    \ first\n#define sec second\n#define pb push_back\n#define em emplace_back\n#define\
    \ mk make_pair\n#define SUM(a) accumulate(all(a),0LL)\n#define MIN(a) *min_element(all(a))\n\
    #define MAX(a) *max_element(all(a))\ntemplate<class... T>\nconstexpr auto my_max(T...\
    \ a){\n    return max(initializer_list<common_type_t<T...>>{a...});\n}\ntemplate<class...\
    \ T>\nconstexpr auto my_min(T... a){\n    return min(initializer_list<common_type_t<T...>>{a...});\n\
    }\ntemplate<class... T> void input(T&... a){(cin >> ... >> a);}\ntemplate<class\
    \ T> void scan(vector<T>& a){ for(auto& i : a) input(i); }\n#define INT(...) int\
    \ __VA_ARGS__;input(__VA_ARGS__)\n#define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)\n\
    #define STR(...) string __VA_ARGS__;input(__VA_ARGS__)\n#define DBL(...) double\
    \ __VA_ARGS__;input(__VA_ARGS__)\n// void in(){}\n// template <class Head, class...\
    \ Tail> void in(Head& head, Tail&... tail){ scan(head); in(tail...); }\n// #define\
    \ VEC(type,name,size) vector<type> name(size); in(name)\n// #define VVEC(type,\
    \ name, h, w) vector<vector<type>> name(h, vector<type>(w)); in(name)\nvoid Yes(bool\
    \ iSizIs=true) {if(iSizIs){cout<<\"Yes\"<<endl;}else{cout<<\"No\"<<endl;}}\nvoid\
    \ No() {cout<<\"No\"<<endl;}\ntemplate<class T> void OUT(T x) {cout << (x) <<\
    \ endl;}\ntemplate<class T> bool chmin(T &a, T b) {if (a > b) {a = b;return true;}return\
    \ false;}\ntemplate<class T> bool chmax(T &a, T b) {if (a < b) {a = b;return true;}return\
    \ false;}\nll POW(ll a, ll n, ll mod) {\n    if (n == 0) return 1;\n    if (n\
    \ == 1) return a % mod;\n    ll ret = POW(a, n / 2, mod) % mod;\n    (ret *= ret)\
    \ %= mod;\n    if (n % 2 == 1) {\n        (ret *= a) %= mod;\n    }\n    return\
    \ ret;\n}\ntemplate<class T>\nvector<vector<T>> ROTATE(vector<vector<T>> X) {\n\
    \    if(X.size() == 0) return X;\n    vector<vector<T>> res(X[0].size(),vector<T>(X.size()));\n\
    \    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n    return\
    \ res;\n}\nbool kaibun(string s) {\n    string t = s;\n    reverse(all(t));\n\
    \    return s == t;\n}\nconst int inf = INT_MAX / 2; \nconst ll infl = 1LL <<\
    \ 60;\nusing vi = vector<int>;\nusing vvi = vector<vi>;\nusing vl = vector<ll>;\n\
    using vvl = vector<vl>;\nusing vd = vector<double>;\nusing vvd = vector<vd>;\n\
    using vs = vector<string>;\nusing vvs = vector<vs>;\nusing vb = vector<bool>;\n\
    using vvb = vector<vb>;\nusing pii = pair<int, int>;\nusing pll = pair<ll, ll>;\n\
    using mii = map<int, int>;\nusing mll = map<ll, ll>;\n"
  code: "#pragma once\n/**\n * @brief Header\n */\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\ntypedef long long ll;\nvoid _main(); int main() { cin.tie(0);\
    \ ios::sync_with_stdio(false); _main(); return 0;}\n#pragma GCC target(\"avx2\"\
    )\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\n#define\
    \ overload4(_1, _2, _3, _4, name, ...) name\n#define rep1(i, n) for (int i = 0;\
    \ i < int(n); ++i)\n#define rep2(i, s, n) for (int i = int(s); i < int(n); ++i)\n\
    #define rep3(i, s, n, d) for(int i = int(s); i < int(n); i+=d)\n#define rep(...)\
    \ overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n#define all(x) (x).begin(),(x).end()\n\
    #define rall(x) (x).rbegin(),(x).rend()\n#define fir first\n#define sec second\n\
    #define pb push_back\n#define em emplace_back\n#define mk make_pair\n#define SUM(a)\
    \ accumulate(all(a),0LL)\n#define MIN(a) *min_element(all(a))\n#define MAX(a)\
    \ *max_element(all(a))\ntemplate<class... T>\nconstexpr auto my_max(T... a){\n\
    \    return max(initializer_list<common_type_t<T...>>{a...});\n}\ntemplate<class...\
    \ T>\nconstexpr auto my_min(T... a){\n    return min(initializer_list<common_type_t<T...>>{a...});\n\
    }\ntemplate<class... T> void input(T&... a){(cin >> ... >> a);}\ntemplate<class\
    \ T> void scan(vector<T>& a){ for(auto& i : a) input(i); }\n#define INT(...) int\
    \ __VA_ARGS__;input(__VA_ARGS__)\n#define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)\n\
    #define STR(...) string __VA_ARGS__;input(__VA_ARGS__)\n#define DBL(...) double\
    \ __VA_ARGS__;input(__VA_ARGS__)\n// void in(){}\n// template <class Head, class...\
    \ Tail> void in(Head& head, Tail&... tail){ scan(head); in(tail...); }\n// #define\
    \ VEC(type,name,size) vector<type> name(size); in(name)\n// #define VVEC(type,\
    \ name, h, w) vector<vector<type>> name(h, vector<type>(w)); in(name)\nvoid Yes(bool\
    \ iSizIs=true) {if(iSizIs){cout<<\"Yes\"<<endl;}else{cout<<\"No\"<<endl;}}\nvoid\
    \ No() {cout<<\"No\"<<endl;}\ntemplate<class T> void OUT(T x) {cout << (x) <<\
    \ endl;}\ntemplate<class T> bool chmin(T &a, T b) {if (a > b) {a = b;return true;}return\
    \ false;}\ntemplate<class T> bool chmax(T &a, T b) {if (a < b) {a = b;return true;}return\
    \ false;}\nll POW(ll a, ll n, ll mod) {\n    if (n == 0) return 1;\n    if (n\
    \ == 1) return a % mod;\n    ll ret = POW(a, n / 2, mod) % mod;\n    (ret *= ret)\
    \ %= mod;\n    if (n % 2 == 1) {\n        (ret *= a) %= mod;\n    }\n    return\
    \ ret;\n}\ntemplate<class T>\nvector<vector<T>> ROTATE(vector<vector<T>> X) {\n\
    \    if(X.size() == 0) return X;\n    vector<vector<T>> res(X[0].size(),vector<T>(X.size()));\n\
    \    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n    return\
    \ res;\n}\nbool kaibun(string s) {\n    string t = s;\n    reverse(all(t));\n\
    \    return s == t;\n}\nconst int inf = INT_MAX / 2; \nconst ll infl = 1LL <<\
    \ 60;\nusing vi = vector<int>;\nusing vvi = vector<vi>;\nusing vl = vector<ll>;\n\
    using vvl = vector<vl>;\nusing vd = vector<double>;\nusing vvd = vector<vd>;\n\
    using vs = vector<string>;\nusing vvs = vector<vs>;\nusing vb = vector<bool>;\n\
    using vvb = vector<vb>;\nusing pii = pair<int, int>;\nusing pll = pair<ll, ll>;\n\
    using mii = map<int, int>;\nusing mll = map<ll, ll>;"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2023-11-12 13:41:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/cumulative-sum.test.cpp
  - tests/dijkstra.test.cpp
documentation_of: template/template.hpp
layout: document
title: Template
---

## 説明

僕の競プロ用ヘッダーです。