---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: Dijkstra
  - icon: ':heavy_check_mark:'
    path: graph/graph-template.hpp
    title: Graph Template
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  bundledCode: "#line 1 \"tests/aoj/dijkstra.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#line 2 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
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
    \ ll>;\nusing mii = std::map<int, int>;\nusing mll = std::map<ll, ll>;\nconst\
    \ int inf = INT_MAX / 2; \nconst ll infl = 1LL << 60;\nconstexpr ld PI = 3.1415926535897932384626;\n\
    #line 3 \"template/inout.hpp\"\n\ntemplate<typename T,typename U>\nstd::istream\
    \ &operator>>(std::istream&is,std::pair<T,U>&p){is>>p.first>>p.second;return is;}\n\
    template<typename T>\nstd::istream &operator>>(std::istream&is,std::vector<T>&v){for(T\
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
    );}return os;}\ntemplate<typename T,typename U>\nstd::ostream &operator<<(std::ostream&os,const\
    \ std::pair<T,U>&p){os<<p.first<<\" \"<<p.second;return os;}\ntemplate<class T>\n\
    inline void print(const T &t){std::cout<<t<<'\\n';}\ntemplate<class Head, class...\
    \ Tail>\ninline void print(const Head &head, const Tail &... tail){std::cout<<head<<'\
    \ ';print(tail...);}\ntemplate<class... T>\ninline void fin(const T &... a){print(a...);exit(0);}\n\
    template<class T>\ninline void printl(const T &t){std::cout<<t<<'\\n';}\ntemplate\
    \ <class T>\ninline void printl(const std::vector<T> &a){for(const auto &v : a)\
    \ std::cout << v << '\\n';}\ntemplate<class Head, class... Tail>\ninline void\
    \ printl(const Head &head, const Tail &... tail){std::cout<<head<<' ';print(tail...);}\n\
    inline void Yes(const bool b = true) { std::cout << (b ? \"Yes\\n\" : \"No\\n\"\
    ); }\ninline void No() { std::cout << \"No\\n\"; }\ninline void YES(const bool\
    \ b = true) { std::cout << (b ? \"YES\\n\" : \"NO\\n\"); }\ninline void NO() {\
    \ std::cout << \"NO\\n\"; }\n\ntemplate<class T>\nvoid trace(const T &t){std::cerr<<t<<'\\\
    n';}\ntemplate<class Head, class... Tail>\nvoid trace(const Head &head, const\
    \ Tail &... tail){std::cerr<<head<<' ';trace(tail...);}\n#ifdef ONLINE_JUDGE\n\
    #define debug(...) (void(0))\n#else\n#define debug(...) do{std::cerr<<#__VA_ARGS__<<\"\
    =\";trace(__VA_ARGS__);}while(0)\n#endif\n#line 3 \"template/func.hpp\"\n\ntemplate<class...\
    \ T>\nconstexpr auto my_max(T... a){ return max(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<class... T>\nconstexpr auto my_min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ninline constexpr bool is_prime(ll n){\n    if(n<=1)return\
    \ false;\n    for(ll i=2;i*i<=n;i++){\n        if(n%i==0)return false;\n    }\n\
    \    return true;\n}\ninline constexpr ll my_pow(ll a,ll b){\n    ll res=1;\n\
    \    while(b){\n        if(b&1)res*=a;\n        a*=a;\n        b>>=1;\n    }\n\
    \    return res;\n}\ninline constexpr ll mod_pow(ll a,ll b,const ll&mod){\n  \
    \  if(mod==1)return 0;\n    a%=mod;\n    ll res=1;\n    while(b){\n        if(b&1)(res*=a)%=mod;\n\
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\n#line 2 \"graph/graph-template.hpp\"\
    \n\n/**\n * @brief Graph Template\n */\ntemplate< typename T = int >\nstruct Edge\
    \ {\n  int from, to;\n  T cost;\n  int idx;\n  Edge() = default;\n  Edge(int from,\
    \ int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx)\
    \ {}\n  operator int() const { return to; }\n};\ntemplate< typename T = int >\n\
    struct Graph {\n  vector< vector< Edge< T > > > g;\n  int es;\n  Graph() = default;\n\
    \  explicit Graph(int n) : g(n), es(0) {}\n  size_t size() const {\n    return\
    \ g.size();\n  }\n  void add_directed_edge(int from, int to, T cost = 1) {\n \
    \   g[from].emplace_back(from, to, cost, es++);\n  }\n  void add_edge(int from,\
    \ int to, T cost = 1) {\n    g[from].emplace_back(from, to, cost, es);\n    g[to].emplace_back(to,\
    \ from, cost, es++);\n  }\n  void read(int M, int padding = -1, bool weighted\
    \ = false, bool directed = false) {\n    for(int i = 0; i < M; i++) {\n      int\
    \ a, b;\n      cin >> a >> b;\n      a += padding;\n      b += padding;\n    \
    \  T c = T(1);\n      if(weighted) cin >> c;\n      if(directed) add_directed_edge(a,\
    \ b, c);\n      else add_edge(a, b, c);\n    }\n  }\n  inline vector< Edge< T\
    \ > > &operator[](const int &k) {\n    return g[k];\n  }\n  inline const vector<\
    \ Edge< T > > &operator[](const int &k) const {\n    return g[k];\n  }\n};\ntemplate<\
    \ typename T = int >\nusing Edges = vector< Edge< T > >;\n#line 2 \"graph/dijkstra.hpp\"\
    \n\n#line 4 \"graph/dijkstra.hpp\"\n\n/**\n * @brief Dijkstra\n */\ntemplate<\
    \ typename T >\nstruct ShortestPath {\n  vector< T > dist;\n  vector< int > from,\
    \ id;\n};\n\ntemplate< typename T >\nShortestPath< T > dijkstra(const Graph< T\
    \ > &g, int s, ll INF_NUM) {\n  vector< T > dist(g.size(), INF_NUM);\n  vector<\
    \ int > from(g.size(), -1), id(g.size(), -1);\n  using Pi = pair< T, int >;\n\
    \  priority_queue< Pi, vector< Pi >, greater<> > que;\n  dist[s] = 0;\n  que.emplace(dist[s],\
    \ s);\n  while(!que.empty()) {\n    T cost;\n    int idx;\n    tie(cost, idx)\
    \ = que.top();\n    que.pop();\n    if(dist[idx] < cost) continue;\n    for(auto\
    \ &e : g[idx]) {\n      auto next_cost = cost + e.cost;\n      if(dist[e.to] <=\
    \ next_cost) continue;\n      dist[e.to] = next_cost;\n      from[e.to] = idx;\n\
    \      id[e.to] = e.idx;\n      que.emplace(dist[e.to], e.to);\n    }\n  }\n \
    \ return {dist, from, id};\n}\n#line 6 \"tests/aoj/dijkstra.test.cpp\"\n\nvoid\
    \ _main() {\n    int N, M, S;\n    cin >> N >> M >> S;\n    Graph<ll> G(N);\n\
    \    G.read(M, 0, true, true);\n    ShortestPath<ll> d = dijkstra(G, S, infl);\n\
    \    rep(i, N) {\n        if(d.dist[i] == infl) cout << \"INF\" << endl;\n   \
    \     else cout << d.dist[i] << endl;\n    }\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#include \"template/template.hpp\"\n#include \"graph/graph-template.hpp\"\n\
    #include \"graph/dijkstra.hpp\"\n\nvoid _main() {\n    int N, M, S;\n    cin >>\
    \ N >> M >> S;\n    Graph<ll> G(N);\n    G.read(M, 0, true, true);\n    ShortestPath<ll>\
    \ d = dijkstra(G, S, infl);\n    rep(i, N) {\n        if(d.dist[i] == infl) cout\
    \ << \"INF\" << endl;\n        else cout << d.dist[i] << endl;\n    }\n}"
  dependsOn:
  - template/template.hpp
  - template/macro.hpp
  - template/alias.hpp
  - template/inout.hpp
  - template/func.hpp
  - graph/graph-template.hpp
  - graph/dijkstra.hpp
  isVerificationFile: true
  path: tests/aoj/dijkstra.test.cpp
  requiredBy: []
  timestamp: '2023-11-15 21:48:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/aoj/dijkstra.test.cpp
layout: document
redirect_from:
- /verify/tests/aoj/dijkstra.test.cpp
- /verify/tests/aoj/dijkstra.test.cpp.html
title: tests/aoj/dijkstra.test.cpp
---
