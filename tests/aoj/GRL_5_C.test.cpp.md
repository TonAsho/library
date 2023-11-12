---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/graph-template.hpp
    title: Graph Template
  - icon: ':heavy_check_mark:'
    path: graph/lca.hpp
    title: LCA
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: Template
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C
  bundledCode: "#line 1 \"tests/aoj/GRL_5_C.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C\"\
    \n#line 2 \"template/template.hpp\"\n/**\n * @brief Header\n */\n#include <bits/stdc++.h>\n\
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
    using mii = map<int, int>;\nusing mll = map<ll, ll>;\n#line 2 \"graph/lca.hpp\"\
    \n/**\n * @brief LCA\n */\n#line 2 \"graph/graph-template.hpp\"\n\n/**\n * @brief\
    \ Graph Template\n */\ntemplate< typename T = int >\nstruct Edge {\n  int from,\
    \ to;\n  T cost;\n  int idx;\n  Edge() = default;\n  Edge(int from, int to, T\
    \ cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}\n  operator\
    \ int() const { return to; }\n};\ntemplate< typename T = int >\nstruct Graph {\n\
    \  vector< vector< Edge< T > > > g;\n  int es;\n  Graph() = default;\n  explicit\
    \ Graph(int n) : g(n), es(0) {}\n  size_t size() const {\n    return g.size();\n\
    \  }\n  void add_directed_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from,\
    \ to, cost, es++);\n  }\n  void add_edge(int from, int to, T cost = 1) {\n   \
    \ g[from].emplace_back(from, to, cost, es);\n    g[to].emplace_back(to, from,\
    \ cost, es++);\n  }\n  void read(int M, int padding = -1, bool weighted = false,\
    \ bool directed = false) {\n    for(int i = 0; i < M; i++) {\n      int a, b;\n\
    \      cin >> a >> b;\n      a += padding;\n      b += padding;\n      T c = T(1);\n\
    \      if(weighted) cin >> c;\n      if(directed) add_directed_edge(a, b, c);\n\
    \      else add_edge(a, b, c);\n    }\n  }\n  inline vector< Edge< T > > &operator[](const\
    \ int &k) {\n    return g[k];\n  }\n  inline const vector< Edge< T > > &operator[](const\
    \ int &k) const {\n    return g[k];\n  }\n};\ntemplate< typename T = int >\nusing\
    \ Edges = vector< Edge< T > >;\n#line 6 \"graph/lca.hpp\"\n\ntemplate<class T>\n\
    struct LCA : Graph<T> {\n    private:\n    vector<vector<int>> parent;\n    vector<int>\
    \ depth; // dist from root\n    void dfs(int v, int p, int d) {\n        parent[0][v]\
    \ = p;\n        depth[v] = d;\n        for(auto e : g[v]) if(e.to != p) {\n  \
    \          dfs(e.to, v, d + 1);\n        }\n    }\n    public:\n    using Graph<T>::g;\n\
    \    LCA(int n) : Graph<T>(n) {} \n    void build(int root = 0) {\n        int\
    \ V = g.size();\n        int K = 1;\n        while((1 << K) < V) K++;\n      \
    \  parent.assign(K, vector<int>(V, -1));\n        depth.assign(V, -1);\n     \
    \   dfs(root, -1, 0);\n        rep(i, K - 1) rep(j, V) {\n            if(parent[i][j]\
    \ < 0) {\n                parent[i + 1][j] = -1;\n            } else {\n     \
    \           parent[i + 1][j] = parent[i][parent[i][j]];\n            }\n     \
    \   }\n    }\n    int lca(int u, int v) {\n        if(depth[u] < depth[v]) swap(u,\
    \ v);\n        int K = parent.size();\n        rep(i, K) if(depth[u]-depth[v]\
    \ & 1 << i) u = parent[i][u];\n        if(u == v) return u;\n        for(int i\
    \ = K - 1; i >= 0; i--) {\n            if(parent[i][u] != parent[i][v]) {\n  \
    \              u = parent[i][u];\n                v = parent[i][v];\n        \
    \    }\n        }\n        return parent[0][u];\n    }\n    int dist(int u, int\
    \ v) {\n        return depth[u] + depth[v] - 2 * depth[lca(u, v)];\n    }\n  \
    \  bool is_on_pass(int u, int v, int a) {\n        return (dist(u, v) == dist(u,\
    \ a) + dist(a, v));\n    }\n};\n#line 4 \"tests/aoj/GRL_5_C.test.cpp\"\n\nvoid\
    \ _main() {\n    int N, Q;\n    cin >> N;\n    LCA<ll> G(N);\n    rep(i, N) {\n\
    \        int k; cin >> k;\n        rep(j, k) {\n            int p; cin >> p;\n\
    \            G.add_edge(i, p);\n        }\n    }\n    G.build();\n    cin >> Q;\n\
    \    rep(qi, Q) {\n        int u, v;\n        cin >> u >> v;\n        cout <<\
    \ G.lca(u, v) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C\"\
    \n#include \"template/template.hpp\"\n#include \"graph/lca.hpp\"\n\nvoid _main()\
    \ {\n    int N, Q;\n    cin >> N;\n    LCA<ll> G(N);\n    rep(i, N) {\n      \
    \  int k; cin >> k;\n        rep(j, k) {\n            int p; cin >> p;\n     \
    \       G.add_edge(i, p);\n        }\n    }\n    G.build();\n    cin >> Q;\n \
    \   rep(qi, Q) {\n        int u, v;\n        cin >> u >> v;\n        cout << G.lca(u,\
    \ v) << endl;\n    }\n}"
  dependsOn:
  - template/template.hpp
  - graph/lca.hpp
  - graph/graph-template.hpp
  isVerificationFile: true
  path: tests/aoj/GRL_5_C.test.cpp
  requiredBy: []
  timestamp: '2023-11-12 15:59:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/aoj/GRL_5_C.test.cpp
layout: document
redirect_from:
- /verify/tests/aoj/GRL_5_C.test.cpp
- /verify/tests/aoj/GRL_5_C.test.cpp.html
title: tests/aoj/GRL_5_C.test.cpp
---
