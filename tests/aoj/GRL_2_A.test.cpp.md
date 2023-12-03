---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: datastructure/UnionFind.hpp
    title: UnionFind
  - icon: ':heavy_check_mark:'
    path: graph/Kruskal.hpp
    title: Kruskal
  - icon: ':question:'
    path: template/alias.hpp
    title: template/alias.hpp
  - icon: ':question:'
    path: template/func.hpp
    title: template/func.hpp
  - icon: ':question:'
    path: template/inout.hpp
    title: template/inout.hpp
  - icon: ':question:'
    path: template/macro.hpp
    title: template/macro.hpp
  - icon: ':question:'
    path: template/template.hpp
    title: Template
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A
  bundledCode: "#line 1 \"tests/aoj/GRL_2_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A\"\
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
    \ std::cout << \"NO\\n\"; }\n\ntemplate<class T>\nvoid trace(const T &t){std::cerr<<t<<')'<<'\\\
    n';}\ntemplate<class Head, class... Tail>\nvoid trace(const Head &head, const\
    \ Tail &... tail){std::cerr<<head<<' ';trace(tail...);}\n#ifdef ONLINE_JUDGE\n\
    #define debug(...) (void(0))\n#else\n#define debug(...) do{std::cerr<<'('<<#__VA_ARGS__<<\"\
    ) = (\";trace(__VA_ARGS__);}while(0)\n#endif\n#line 3 \"template/func.hpp\"\n\n\
    template<class... T>\nconstexpr auto my_max(T... a){ return max(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<class... T>\nconstexpr auto my_min(T... a){ return min(initializer_list<common_type_t<T...>>{a...});\
    \ }\ntemplate<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return\
    \ true;}return false;}\ntemplate<typename T, typename U> bool chmax(T &a, U b)\
    \ {if (a<b) {a=b;return true;}return false;}\ntemplate<class T>\nstd::vector<std::vector<T>>\
    \ ROTATE(std::vector<std::vector<T>> X) {\n    if(X.size() == 0) return X;\n \
    \   std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));\n    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];\n\
    \    return res;\n}\ntemplate<typename T>\nstruct CumulativeSum {\nprivate:  \
    \  \n    std::vector<T> data;\n    bool sorted = false;\npublic:\n    CumulativeSum(int\
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
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\n#line 2 \"graph/Kruskal.hpp\"\
    \n/**\n * @brief Kruskal\n */\n#line 3 \"datastructure/UnionFind.hpp\"\n/**\n\
    \ * @brief UnionFind\n**/\nstruct UnionFind {\nprivate :\n    int n, cnt;\n  \
    \  std::vector<int> ps, sz;\n\npublic :\n    UnionFind(int n) : n(n), cnt(n),\
    \ ps(n,0), sz(n,1) {\n        for(int i = 0; i < n; ++i) ps[i] = i;\n    }\n \
    \   int leader(int x) {\n        return (ps[x] == x ? x : ps[x] = leader(ps[x]));\n\
    \    }\n    bool same(int x, int y) {\n        return leader(x) == leader(y);\n\
    \    }\n    int unite(int x, int y) {\n        x = leader(x); y = leader(y);\n\
    \        if(x == y) return x;\n        if(sz[x] < sz[y]) swap(x, y);\n       \
    \ sz[x] += sz[y];\n        ps[y] = x;\n        cnt--;\n        return x;\n   \
    \ }\n    int size(int x) {\n        return sz[leader(x)];\n    }\n    std::vector<std::vector<int>>\
    \ groups() {\n        std::vector<std::vector<int>> res(n);\n        for(int i\
    \ = 0; i < n; ++i) res[leader(i)].push_back(i);\n        res.erase(std::remove_if(res.begin(),\
    \ res.end(), [&](const std::vector<int>& v) {return v.empty();}), res.end());\n\
    \        return res;\n    }\n    int count() const {\n        return cnt;\n  \
    \  }\n};\n#line 6 \"graph/Kruskal.hpp\"\n\ntemplate<class T>\nstruct Kruskal :\
    \ UnionFind {\n    using UnionFind::UnionFind;\n    struct Edge {\n        int\
    \ from, to;\n        T cost;\n        int used;\n        int idx;\n        Edge()\
    \ = default;\n        Edge(int from, int to, T cost = 1, int idx = -1) : from(from),\
    \ to(to), used(0), cost(cost), idx(idx) {}\n        bool operator<(const Edge&\
    \ o) const{return cost<o.cost;}\n    };\n    vector<Edge> es;\n    void add_edge(int\
    \ u, int v, T c) {\n        es.emplace_back(u, v, c);\n    }\n    T build() {\n\
    \        sort(es.begin(), es.end());\n        T res = 0;\n        for(auto &e\
    \ : es) {\n            if(same(e.from, e.to)) continue;\n            unite(e.from,\
    \ e.to);\n            res += e.cost;\n            e.used = 1;\n        }\n   \
    \     return res;\n    }\n};\n#line 4 \"tests/aoj/GRL_2_A.test.cpp\"\n\nvoid _main()\
    \ {\n    int N, M;\n    cin >> N >> M;\n    Kruskal<ll> G(N);\n    rep(i, M) {\n\
    \        int u, v, c; cin >> u >> v >> c;\n        G.add_edge(u, v, c);\n    }\n\
    \    cout << G.build() << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A\"\
    \n#include \"template/template.hpp\"\n#include \"graph/Kruskal.hpp\"\n\nvoid _main()\
    \ {\n    int N, M;\n    cin >> N >> M;\n    Kruskal<ll> G(N);\n    rep(i, M) {\n\
    \        int u, v, c; cin >> u >> v >> c;\n        G.add_edge(u, v, c);\n    }\n\
    \    cout << G.build() << endl;\n}"
  dependsOn:
  - template/template.hpp
  - template/macro.hpp
  - template/alias.hpp
  - template/inout.hpp
  - template/func.hpp
  - graph/Kruskal.hpp
  - datastructure/UnionFind.hpp
  isVerificationFile: true
  path: tests/aoj/GRL_2_A.test.cpp
  requiredBy: []
  timestamp: '2023-12-03 11:28:57+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/aoj/GRL_2_A.test.cpp
layout: document
redirect_from:
- /verify/tests/aoj/GRL_2_A.test.cpp
- /verify/tests/aoj/GRL_2_A.test.cpp.html
title: tests/aoj/GRL_2_A.test.cpp
---
