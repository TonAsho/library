---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: graph/dijkstra.hpp
    title: "Dijkstra(\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u8DEF)"
  - icon: ':warning:'
    path: graph/graph-template.hpp
    title: Graph Template
  - icon: ':question:'
    path: template/template-yosupo.hpp
    title: Header
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
  bundledCode: "#line 1 \"tests/dijkstra.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#line 2 \"template/template-yosupo.hpp\"\n/**\n * @brief Header\n */\n#include\
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
    using mll = map<ll, ll>;\n#line 2 \"graph/graph-template.hpp\"\n\n/**\n * @brief\
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
    \ Edges = vector< Edge< T > >;\n#line 2 \"graph/dijkstra.hpp\"\n\n#line 4 \"graph/dijkstra.hpp\"\
    \n\n/**\n * @brief Dijkstra(\u5358\u4E00\u59CB\u70B9\u6700\u77ED\u8DEF)\n */\n\
    template< typename T >\nstruct ShortestPath {\n  vector< T > dist;\n  vector<\
    \ int > from, id;\n};\n\ntemplate< typename T >\nShortestPath< T > dijkstra(const\
    \ Graph< T > &g, int s) {\n  vector< T > dist(g.size(), inf);\n  vector< int >\
    \ from(g.size(), -1), id(g.size(), -1);\n  using Pi = pair< T, int >;\n  priority_queue<\
    \ Pi, vector< Pi >, greater<> > que;\n  dist[s] = 0;\n  que.emplace(dist[s], s);\n\
    \  while(!que.empty()) {\n    T cost;\n    int idx;\n    tie(cost, idx) = que.top();\n\
    \    que.pop();\n    if(dist[idx] < cost) continue;\n    for(auto &e : g[idx])\
    \ {\n      auto next_cost = cost + e.cost;\n      if(dist[e.to] <= next_cost)\
    \ continue;\n      dist[e.to] = next_cost;\n      from[e.to] = idx;\n      id[e.to]\
    \ = e.idx;\n      que.emplace(dist[e.to], e.to);\n    }\n  }\n  return {dist,\
    \ from, id};\n}\n#line 6 \"tests/dijkstra.cpp\"\n\nint main() {\n    int n, m,\
    \ s; cin >> n >> m >> s;\n    Graph<int> g(n);\n    g.read(m, 0, true, true);\n\
    \    auto d = dijkstra(g, s);\n    for(auto x : d.dist) {\n        if(x == inf)\
    \ cout << \"INF\" << endl;\n        else cout << x << endl;\n    }\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A\"\
    \n\n#include \"template/template-yosupo.hpp\"\n#include \"graph/graph-template.hpp\"\
    \n#include \"graph/dijkstra.hpp\"\n\nint main() {\n    int n, m, s; cin >> n >>\
    \ m >> s;\n    Graph<int> g(n);\n    g.read(m, 0, true, true);\n    auto d = dijkstra(g,\
    \ s);\n    for(auto x : d.dist) {\n        if(x == inf) cout << \"INF\" << endl;\n\
    \        else cout << x << endl;\n    }\n    return 0;\n}"
  dependsOn:
  - template/template-yosupo.hpp
  - graph/graph-template.hpp
  - graph/dijkstra.hpp
  isVerificationFile: false
  path: tests/dijkstra.cpp
  requiredBy: []
  timestamp: '2023-03-23 17:37:11+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: tests/dijkstra.cpp
layout: document
redirect_from:
- /library/tests/dijkstra.cpp
- /library/tests/dijkstra.cpp.html
title: tests/dijkstra.cpp
---
