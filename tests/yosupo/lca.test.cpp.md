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
    path: template/alias.hpp
    title: template/alias.hpp
  - icon: ':heavy_check_mark:'
    path: template/func.hpp
    title: template/func.hpp
  - icon: ':heavy_check_mark:'
    path: template/inout.hpp
    title: template/inout.hpp
  - icon: ':heavy_check_mark:'
    path: template/macro.hpp
    title: template/macro.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/lca
    links:
    - https://judge.yosupo.jp/problem/lca
  bundledCode: "#line 1 \"tests/yosupo/lca.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\
    \n#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\nvoid _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main();\
    \ return 0;}\n#line 3 \"template/macro.hpp\"\n\n#define overload4(_1, _2, _3,\
    \ _4, name, ...) name\n#define rep1(i, n) for (int i = 0; i < int(n); ++i)\n#define\
    \ rep2(i, s, n) for (int i = int(s); i < int(n); ++i)\n#define rep3(i, s, n, d)\
    \ for(int i = int(s); i < int(n); i+=d)\n#define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n\
    #define all(x) (x).begin(),(x).end()\n#define rall(x) (x).rbegin(),(x).rend()\n\
    #define SUM(a) accumulate(all(a),0LL)\n#define MIN(a) *min_element(all(a))\n#define\
    \ MAX(a) *max_element(all(a))\n#define INT(...) int __VA_ARGS__;input(__VA_ARGS__)\n\
    #define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)\n#define STR(...) string __VA_ARGS__;input(__VA_ARGS__)\n\
    #define CHR(...) char __VA_ARGS__;input(__VA_ARGS__)\n#define DBL(...) double\
    \ __VA_ARGS__;input(__VA_ARGS__)\n#define LD(...) ld __VA_ARGS__;input(__VA_ARGS__)\n\
    #define pb push_back\n#define eb emplace_back\n#line 3 \"template/alias.hpp\"\n\
    \nusing ll = long long;\nusing ull = unsigned long long;\nusing ld = long double;\n\
    using vi = std::vector<int>;\nusing vvi = std::vector<vi>;\nusing vl = std::vector<ll>;\n\
    using vvl = std::vector<vl>;\nusing vd = std::vector<double>;\nusing vvd = std::vector<vd>;\n\
    using vs = std::vector<std::string>;\nusing vvs = std::vector<vs>;\nusing vb =\
    \ std::vector<bool>;\nusing vvb = std::vector<vb>;\nusing vc = std::vector<char>;\n\
    using vvc = std::vector<vc>;\nusing pii = std::pair<int, int>;\nusing pll = std::pair<ll,\
    \ ll>;\nusing mii = std::map<int, int>;\nusing mll = std::map<ll, ll>;\ntemplate<typename\
    \ T>\nstruct infinity{\n    static constexpr T max=std::numeric_limits<T>::max();\n\
    \    static constexpr T min=std::numeric_limits<T>::min();\n    static constexpr\
    \ T value=std::numeric_limits<T>::max()/2;\n    static constexpr T mvalue=std::numeric_limits<T>::min()/2;\n\
    };\ntemplate<typename T>constexpr T INF=infinity<T>::value;\nconstexpr ll infl=INF<ll>;\n\
    constexpr int inf = INF<int>;\nconstexpr ld PI = 3.1415926535897932384626;\n#line\
    \ 3 \"template/inout.hpp\"\n\ntemplate<typename T,typename U>\nstd::istream &operator>>(std::istream&is,std::pair<T,U>&p){is>>p.first>>p.second;return\
    \ is;}\ntemplate<typename T>\nstd::istream &operator>>(std::istream&is,std::vector<T>&v){for(T\
    \ &in:v){is>>in;}return is;}\ninline void scan(int &a) { std::cin >> a; }\ninline\
    \ void scan(long long &a) { std::cin >> a; }\ninline void scan(std::string &a)\
    \ { std::cin >> a; }\ninline void scan(char &a) { std::cin >> a; }\ninline void\
    \ scan(double &a) { std::cin >> a; }\ninline void scan(long double &a) { std::cin\
    \ >> a; }\ntemplate <class T, class U>\ninline void scan(std::pair<T, U> &p) {\
    \ std::cin >> p; }\ntemplate <class T>\ninline void scan(std::vector<T> &a) {\
    \ std::cin >> a; }\ninline void input() {}\ntemplate <class Head, class... Tail>\n\
    inline void input(Head &head, Tail &...tail) {scan(head);input(tail...);}\n\n\
    template<typename T>\nstd::ostream &operator<<(std::ostream&os,const std::vector<T>&v){for(auto\
    \ it=std::begin(v);it!=std::end(v);){os<<*it<<((++it)!=std::end(v)?\" \":\"\"\
    );}return os;}\ntemplate<typename T>\nstd::ostream &operator<<(std::ostream&os,const\
    \ std::set<T>&v){for(auto it=std::begin(v);it!=std::end(v);){os<<*it<<((++it)!=std::end(v)?\"\
    \ \":\"\");}return os;}\ntemplate<typename T,typename U>\nstd::ostream &operator<<(std::ostream&os,const\
    \ std::pair<T,U>&p){os<<p.first<<\" \"<<p.second;return os;}\ntemplate<class T>\n\
    inline void print(const T &t){std::cout<<t<<'\\n';}\ntemplate<class Head, class...\
    \ Tail>\ninline void print(const Head &head, const Tail &... tail){std::cout<<head<<'\
    \ ';print(tail...);}\ntemplate<class... T>\ninline void fin(const T &... a){print(a...);exit(0);}\n\
    template<class T>\ninline void printl(const T &t){std::cout<<t<<'\\n';}\ntemplate\
    \ <class T>\ninline void printl(const std::vector<T> &a){for(const auto &v : a)\
    \ std::cout << v << '\\n';}\ntemplate<class Head, class... Tail>\ninline void\
    \ printl(const Head &head, const Tail &... tail){std::cout<<head<<'\\n';printl(tail...);}\n\
    inline void Yes(const bool b = true) { std::cout << (b ? \"Yes\\n\" : \"No\\n\"\
    ); }\ninline void No() { std::cout << \"No\\n\"; }\ninline void YES(const bool\
    \ b = true) { std::cout << (b ? \"YES\\n\" : \"NO\\n\"); }\ninline void NO() {\
    \ std::cout << \"NO\\n\"; }\n\ntemplate<class T>\nvoid trace(const T &t){std::cerr<<t<<')'<<'\\\
    n';}\ntemplate<class Head, class... Tail>\nvoid trace(const Head &head, const\
    \ Tail &... tail){std::cerr<<head<<' ';trace(tail...);}\n#ifdef ONLINE_JUDGE\n\
    #define debug(...) (void(0))\n#else\n#define debug(...) do{std::cerr<<'('<<#__VA_ARGS__<<\"\
    ) = (\";trace(__VA_ARGS__);}while(0)\n#endif\n#line 3 \"template/func.hpp\"\n\n\
    template<class... T>\nconstexpr auto max(T... a){ return max(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<class... T>\nconstexpr auto min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ntemplate<typename T>\nstruct CumulativeSum {\n  private:\
    \    \n    std::vector<T> data;\n    bool sorted = false;\n  public:\n    CumulativeSum(int\
    \ n) : data(n + 1, 0) {}\n    CumulativeSum(const std::vector<T> &v) : data(v.size()\
    \ + 1, 0) {\n        for(int i = 0; i < (int)v.size(); i++) add(i, v[i]);\n  \
    \  }\n    void add(int k, const T &val) { data[k + 1] += val; }\n    void build()\
    \ {\n        assert(!sorted); sorted = true;\n        for(int i = 1; i < (int)data.size();\
    \ i++) data[i] += data[i - 1];\n    }\n    T prod(int r) {\n        assert(sorted);\n\
    \        return (r < 0 ? 0 : data[min(r, (int)data.size() - 1)]);\n    }\n   \
    \ T prod(int l, int r) {\n        assert(sorted);\n        return prod(r) - prod(l);\
    \ \n    }\n};\ninline constexpr bool is_prime(ll n){\n    if(n<=1)return false;\n\
    \    for(ll i=2;i*i<=n;i++){\n        if(n%i==0)return false;\n    }\n    return\
    \ true;\n}\ninline constexpr ll my_pow(ll a,ll b){\n    ll res=1;\n    while(b){\n\
    \        if(b&1)res*=a;\n        a*=a;\n        b>>=1;\n    }\n    return res;\n\
    }\ninline constexpr ll mod_pow(ll a,ll b,const ll&mod){\n    if(mod==1)return\
    \ 0;\n    a%=mod;\n    ll res=1;\n    while(b){\n        if(b&1)(res*=a)%=mod;\n\
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\n#line 2 \"graph/lca.hpp\"\
    \n/**\n * @brief LCA\n */\n#line 2 \"graph/graph-template.hpp\"\n\n/**\n * @brief\
    \ Graph Template\n */\ntemplate< typename T = int >\nstruct Edge {\n    int from,\
    \ to;\n    T cost;\n    int idx;\n    Edge() = default;\n    Edge(int from, int\
    \ to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}\n\
    \    operator int() const { return to; }\n    bool operator<(const Edge& o) const{return\
    \ cost<o.cost;}\n};\ntemplate< typename T = int >\nstruct Graph {\n    vector<\
    \ vector< Edge< T > > > g;\n    int es;\n    Graph() = default;\n    explicit\
    \ Graph(int n) : g(n), es(0) {}\n    size_t size() const {\n        return g.size();\n\
    \    }\n    void add_directed_edge(int from, int to, T cost = 1) {\n        g[from].emplace_back(from,\
    \ to, cost, es++);\n    }\n    void add_edge(int from, int to, T cost = 1) {\n\
    \        g[from].emplace_back(from, to, cost, es);\n        g[to].emplace_back(to,\
    \ from, cost, es++);\n    }\n    void read(int M, int padding = -1, bool weighted\
    \ = false, bool directed = false) {\n        for(int i = 0; i < M; i++) {\n  \
    \      int a, b;\n        cin >> a >> b;\n        a += padding;\n        b +=\
    \ padding;\n        T c = T(1);\n        if(weighted) cin >> c;\n        if(directed)\
    \ add_directed_edge(a, b, c);\n        else add_edge(a, b, c);\n        }\n  \
    \  }\n    inline vector< Edge< T > > &operator[](const int &k) {\n        return\
    \ g[k];\n    }\n    inline const vector< Edge< T > > &operator[](const int &k)\
    \ const {\n        return g[k];\n    }\n};\ntemplate< typename T = int >\nusing\
    \ Edges = vector< Edge< T > >;\n#line 6 \"graph/lca.hpp\"\n\ntemplate<class T>\n\
    struct LCA : Graph<T> {\n  private:\n    std::vector<std::vector<int>> parent;\n\
    \    std::vector<int> depth; // dist from root\n    void dfs(int v, int p, int\
    \ d) {\n        parent[0][v] = p;\n        depth[v] = d;\n        for(auto e :\
    \ g[v]) if(e.to != p) {\n            dfs(e.to, v, d + 1);\n        }\n    }\n\
    \  public:\n    using Graph<T>::g;\n    LCA(int n) : Graph<T>(n) {} \n    void\
    \ build(int root = 0) {\n        int V = g.size();\n        int K = 1;\n     \
    \   while((1 << K) < V) K++;\n        parent.assign(K, vector<int>(V, -1));\n\
    \        depth.assign(V, -1);\n        dfs(root, -1, 0);\n        rep(i, K - 1)\
    \ rep(j, V) {\n            if(parent[i][j] < 0) {\n                parent[i +\
    \ 1][j] = -1;\n            } else {\n                parent[i + 1][j] = parent[i][parent[i][j]];\n\
    \            }\n        }\n    }\n    int lca(int u, int v) {\n        if(depth[u]\
    \ < depth[v]) swap(u, v);\n        int K = parent.size();\n        rep(i, K) if(depth[u]-depth[v]\
    \ & 1 << i) u = parent[i][u];\n        if(u == v) return u;\n        for(int i\
    \ = K - 1; i >= 0; i--) {\n            if(parent[i][u] != parent[i][v]) {\n  \
    \              u = parent[i][u];\n                v = parent[i][v];\n        \
    \    }\n        }\n        return parent[0][u];\n    }\n    int dist(int u, int\
    \ v) {\n        return depth[u] + depth[v] - 2 * depth[lca(u, v)];\n    }\n  \
    \  bool is_on_pass(int u, int v, int a) {\n        return (dist(u, v) == dist(u,\
    \ a) + dist(a, v));\n    }\n};\n#line 4 \"tests/yosupo/lca.test.cpp\"\n\nvoid\
    \ _main() {\n    int N, Q;\n    cin >> N >> Q;\n    LCA<ll> G(N);\n    rep(i,\
    \ 1, N) {\n        int p; cin >> p;\n        G.add_edge(p, i);\n    }\n    G.build();\n\
    \    rep(qi, Q) {\n        int u, v;\n        cin >> u >> v;\n        cout <<\
    \ G.lca(u, v) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\n#include \"template/template.hpp\"\
    \n#include \"graph/lca.hpp\"\n\nvoid _main() {\n    int N, Q;\n    cin >> N >>\
    \ Q;\n    LCA<ll> G(N);\n    rep(i, 1, N) {\n        int p; cin >> p;\n      \
    \  G.add_edge(p, i);\n    }\n    G.build();\n    rep(qi, Q) {\n        int u,\
    \ v;\n        cin >> u >> v;\n        cout << G.lca(u, v) << endl;\n    }\n}"
  dependsOn:
  - template/template.hpp
  - template/macro.hpp
  - template/alias.hpp
  - template/inout.hpp
  - template/func.hpp
  - graph/lca.hpp
  - graph/graph-template.hpp
  isVerificationFile: true
  path: tests/yosupo/lca.test.cpp
  requiredBy: []
  timestamp: '2023-12-13 17:49:19+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/yosupo/lca.test.cpp
layout: document
redirect_from:
- /verify/tests/yosupo/lca.test.cpp
- /verify/tests/yosupo/lca.test.cpp.html
title: tests/yosupo/lca.test.cpp
---