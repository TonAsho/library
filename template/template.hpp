#pragma once
#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdio>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <climits>
#include <deque>
#include <iomanip>
#include <limits>
using namespace std;
typedef long long ll;
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(i, n) for (ll i = 0; i < ll(n); ++i)
#define rep2(i, s, n) for (ll i = ll(s); i < ll(n); ++i)
#define rep3(i, s, n, d) for(ll i = ll(s); i < ll(n); i+=d)
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
template<class... T> void input(T&... a){(cin >> ... >> a);}
#define INT(...) int __VA_ARGS__;input(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;input(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;input(__VA_ARGS__)
void Yes(bool iSizIs=true) {if(iSizIs){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}}
void No() {cout<<"No"<<endl;}
template<class T> void OUT(T x) {cout << (x) << endl;}
template<class T> bool chmin(T &a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> bool chmax(T &a, T b) {if (a < b) {a = b;return true;}return false;}
template<class T> T POW(T a, T b) {T res = 1;for(int i=0;i<b;++i) res*= a;return res;}
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
#include <atcoder/all>
using namespace atcoder;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    
    return 0;
}