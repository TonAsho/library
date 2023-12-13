---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: datastructure/binary-indexed-tree.hpp
    title: BinaryIndexedTree
  - icon: ':heavy_check_mark:'
    path: datastructure/inversion-number.hpp
    title: "Inversion Number(\u8EE2\u5012\u6570)"
  - icon: ':heavy_check_mark:'
    path: others/compressor.hpp
    title: others/compressor.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
  bundledCode: "#line 1 \"tests/aoj/ALDS1_5_D.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D\"\
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
    \        (a*=a)%=mod;\n        b>>=1;\n    }\n    return res;\n}\n#line 2 \"datastructure/inversion-number.hpp\"\
    \n/**\n * @brief Inversion Number(\u8EE2\u5012\u6570)\n*/\n#line 2 \"datastructure/binary-indexed-tree.hpp\"\
    \n/**\n * @brief BinaryIndexedTree\n**/\n#line 6 \"datastructure/binary-indexed-tree.hpp\"\
    \n\ntemplate<typename T>\nstruct BinaryIndexedTree {\n  private:\n    int n;\n\
    \    std::vector<T> data;\n    T sum(int x) {\n        T res = 0;\n        while(x)\
    \ {\n            res += data[x];\n            x -= x & -x;\n        }\n      \
    \  return res;\n    }\n  public:\n    BinaryIndexedTree() : n(0) {}\n    BinaryIndexedTree(int\
    \ n) : n(n), data(n + 1, 0) {}\n    BinaryIndexedTree(const std::vector<T> &v)\
    \ : n(v.size()), data(v.size() + 1, 0) {\n        for(int i = 0; i < n; ++i) add(i,\
    \ v[i]);\n    }\n    void add(int x, T val) {\n        x++;\n        while(x <=\
    \ n) {\n            data[x] += val;\n            x += x & -x;\n        }\n   \
    \ }\n    T sum(int l, int r) {\n        return sum(r) - sum(l);\n    }\n    T\
    \ operator[](int x) const { return sum(x, x + 1); }\n};\n#line 3 \"others/compressor.hpp\"\
    \n\ntemplate<typename T>\nstruct Compressor {\n  private:\n    std::vector<T>\
    \ data;\n    bool sorted = false;\n  public:\n    Compressor(const std::vector<T>\
    \ &v) : data(std::move(v)) {}\n    void build() {\n        assert(!sorted);\n\
    \        sorted = 1;\n        std::sort(data.begin(), data.end());\n        data.erase(std::unique(data.begin(),\
    \ data.end()), data.end());\n    }\n    int get_index(const T &v) {\n        assert(sorted);\n\
    \        return int(std::lower_bound(data.begin(), data.end(), v) - data.begin());\n\
    \    }\n    void press(std::vector<T> &v) {\n        assert(sorted);\n       \
    \ for(auto &i : v) i = get_index(i);\n    }\n    std::vector<int> pressed(const\
    \ std::vector<T> &v) {\n        assert(sorted);\n        std::vector<int> res(v.size());\n\
    \        for(int i = 0; i < (int)v.size(); ++i) res[i] = get_index(v[i]);\n  \
    \      return res;\n    }\n    int size() const {\n        return (int)data.size();\n\
    \    }\n};\n#line 8 \"datastructure/inversion-number.hpp\"\n\ntemplate<typename\
    \ T>\nlong long inversion(std::vector<T> a) {\n    int n = a.size();\n    Compressor<int>\
    \ c(a);\n    c.build();\n    std::vector<int> b = c.pressed(a);\n    long long\
    \ res = 0;\n    BinaryIndexedTree<ll> bit(c.size());\n    for(int i = 0; i < n;\
    \ ++i) {\n        res += i - bit.sum(0, b[i] + 1);\n        bit.add(b[i], 1);\n\
    \    }\n    return res;\n}\n#line 4 \"tests/aoj/ALDS1_5_D.test.cpp\"\n\nvoid _main()\
    \ {\n    INT(N);\n    vi A(N);\n    input(A);\n    print(inversion(A));\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D\"\
    \n#include \"template/template.hpp\"\n#include \"datastructure/inversion-number.hpp\"\
    \n\nvoid _main() {\n    INT(N);\n    vi A(N);\n    input(A);\n    print(inversion(A));\n\
    }"
  dependsOn:
  - template/template.hpp
  - template/macro.hpp
  - template/alias.hpp
  - template/inout.hpp
  - template/func.hpp
  - datastructure/inversion-number.hpp
  - datastructure/binary-indexed-tree.hpp
  - others/compressor.hpp
  isVerificationFile: true
  path: tests/aoj/ALDS1_5_D.test.cpp
  requiredBy: []
  timestamp: '2023-12-13 18:22:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/aoj/ALDS1_5_D.test.cpp
layout: document
redirect_from:
- /verify/tests/aoj/ALDS1_5_D.test.cpp
- /verify/tests/aoj/ALDS1_5_D.test.cpp.html
title: tests/aoj/ALDS1_5_D.test.cpp
---
