#pragma once
/**
 * @brief Header
 */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); return 0;}
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(i, n) for (int i = 0; i < int(n); ++i)
#define rep2(i, s, n) for (int i = int(s); i < int(n); ++i)
#define rep3(i, s, n, d) for(int i = int(s); i < int(n); i+=d)
#define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fir first
#define sec second
#define pb push_back
#define em emplace_back
#define mk make_pair
#define SUM(a) accumulate(all(a),0LL)
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
template<class... T>
constexpr auto my_max(T... a){
    return max(initializer_list<common_type_t<T...>>{a...});
}
template<class... T>
constexpr auto my_min(T... a){
    return min(initializer_list<common_type_t<T...>>{a...});
}
template<class... T> void input(T&... a){(cin >> ... >> a);}
template<class T> void scan(vector<T>& a){ for(auto& i : a) input(i); }
#define INT(...) int __VA_ARGS__;input(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;input(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;input(__VA_ARGS__)
// void in(){}
// template <class Head, class... Tail> void in(Head& head, Tail&... tail){ scan(head); in(tail...); }
// #define VEC(type,name,size) vector<type> name(size); in(name)
// #define VVEC(type, name, h, w) vector<vector<type>> name(h, vector<type>(w)); in(name)
void Yes(bool iSizIs=true) {if(iSizIs){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}}
void No() {cout<<"No"<<endl;}
template<class T> void OUT(T x) {cout << (x) << endl;}
template<class T> bool chmin(T &a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> bool chmax(T &a, T b) {if (a < b) {a = b;return true;}return false;}
ll POW(ll a, ll n, ll mod) {
    if (n == 0) return 1;
    if (n == 1) return a % mod;
    ll ret = POW(a, n / 2, mod) % mod;
    (ret *= ret) %= mod;
    if (n % 2 == 1) {
        (ret *= a) %= mod;
    }
    return ret;
}
template<class T>
vector<vector<T>> ROTATE(vector<vector<T>> X) {
    if(X.size() == 0) return X;
    vector<vector<T>> res(X[0].size(),vector<T>(X.size()));
    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];
    return res;
}
bool kaibun(string s) {
    string t = s;
    reverse(all(t));
    return s == t;
}
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using vvs = vector<vs>;
using vb = vector<bool>;
using vvb = vector<vb>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using mii = map<int, int>;
using mll = map<ll, ll>;