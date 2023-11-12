---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: datastructure/UnionFind.hpp
    title: UnionFind
  - icon: ':question:'
    path: template/template.hpp
    title: Template
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: 'https:'
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"tests/yosupo/unionfind.test.cpp\"\n#define PROBLEM https://judge.yosupo.jp/problem/unionfind\n\
    #line 2 \"template/template.hpp\"\n/**\n * @brief Header\n */\n#include <bits/stdc++.h>\n\
    using namespace std;\ntypedef long long ll;\nvoid _main(); int main() { cin.tie(0);\
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
    using mii = map<int, int>;\nusing mll = map<ll, ll>;\n#line 2 \"datastructure/UnionFind.hpp\"\
    \n/**\n * @brief UnionFind\n**/\nstruct UnionFind {\n    private :\n    int n,\
    \ cnt;\n    vector<int> ps, sz;\n\n    public :\n    UnionFind(int n) : n(n),\
    \ cnt(n), ps(n,0), sz(n,1) {\n        for(int i = 0; i < n; ++i) ps[i] = i;\n\
    \    }\n    int leader(int x) {\n        return (ps[x] == x ? x : ps[x] = leader(ps[x]));\n\
    \    }\n    bool same(int x, int y) {\n        return leader(x) == leader(y);\n\
    \    }\n    int unite(int x, int y) {\n        x = leader(x); y = leader(y);\n\
    \        if(x == y) return x;\n        if(sz[x] < sz[y]) swap(x, y);\n       \
    \ sz[x] += sz[y];\n        ps[y] = x;\n        cnt--;\n        return x;\n   \
    \ }\n    int size(int x) {\n        return sz[leader(x)];\n    }\n    vector<vector<int>>\
    \ groups() {\n        vector<vector<int>> res(n);\n        for(int i = 0; i <\
    \ n; ++i) res[leader(i)].push_back(i);\n        res.erase(remove_if(res.begin(),\
    \ res.end(), [&](const vector<int>& v) {return v.empty();}), res.end());\n   \
    \     return res;\n    }\n    int count() const {\n        return cnt;\n    }\n\
    };\n#line 4 \"tests/yosupo/unionfind.test.cpp\"\n\nvoid _main() {\n    int N,\
    \ Q;\n    cin >> N >> Q;\n    UnionFind uni(N);\n    rep(qi, Q) {\n        int\
    \ t, u, v;\n        cin >> t >> u >> v;\n        if(t == 0) uni.unite(u, v);\n\
    \        else cout << uni.same(u, v) << '\\n';\n    }\n}\n"
  code: "#define PROBLEM https://judge.yosupo.jp/problem/unionfind\n#include \"template/template.hpp\"\
    \n#include \"datastructure/UnionFind.hpp\"\n\nvoid _main() {\n    int N, Q;\n\
    \    cin >> N >> Q;\n    UnionFind uni(N);\n    rep(qi, Q) {\n        int t, u,\
    \ v;\n        cin >> t >> u >> v;\n        if(t == 0) uni.unite(u, v);\n     \
    \   else cout << uni.same(u, v) << '\\n';\n    }\n}"
  dependsOn:
  - template/template.hpp
  - datastructure/UnionFind.hpp
  isVerificationFile: true
  path: tests/yosupo/unionfind.test.cpp
  requiredBy: []
  timestamp: '2023-11-12 14:36:27+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: tests/yosupo/unionfind.test.cpp
layout: document
redirect_from:
- /verify/tests/yosupo/unionfind.test.cpp
- /verify/tests/yosupo/unionfind.test.cpp.html
title: tests/yosupo/unionfind.test.cpp
---
