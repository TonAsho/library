#pragma once
#include <bits/stdc++.h>

template<class... T>
constexpr auto my_max(T... a){ return max(initializer_list<common_type_t<T...>>{a...}); }
template<class... T>
constexpr auto my_min(T... a){ return min(initializer_list<common_type_t<T...>>{a...}); }
template<typename T, typename U> bool chmin(T &a, U b) {if (a>b) {a=b;return true;}return false;}
template<typename T, typename U> bool chmax(T &a, U b) {if (a<b) {a=b;return true;}return false;}
template<class T>
std::vector<std::vector<T>> ROTATE(std::vector<std::vector<T>> X) {
    if(X.size() == 0) return X;
    std::vector<vector<T>> res(X[0].size(),std::vector<T>(X.size()));
    rep(i,X.size())rep(j,X[0].size())res[j][X.size()-i-1]=X[i][j];
    return res;
}
template<typename T>
struct CumulativeSum {
private:    
    std::vector<T> data;
    bool sorted = false;
public:
    CumulativeSum(int n) : data(n + 1, 0) {}
    CumulativeSum(const std::vector<T> &v) : data(v.size() + 1, 0) {
        for(int i = 0; i < (int)v.size(); i++) add(i, v[i]);
    }
    void add(int k, const T &val) { data[k + 1] += val; }
    void build() {
        assert(!sorted); sorted = true;
        for(int i = 1; i < (int)data.size(); i++) data[i] += data[i - 1];
    }
    T prod(int r) {
        assert(sorted);
        return (r < 0 ? 0 : data[min(r, (int)data.size() - 1)]);
    }
    T prod(int l, int r) {
        assert(sorted);
        return prod(r) - prod(l); 
    }
};
inline constexpr bool is_prime(ll n){
    if(n<=1)return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
inline constexpr ll my_pow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}
inline constexpr ll mod_pow(ll a,ll b,const ll&mod){
    if(mod==1)return 0;
    a%=mod;
    ll res=1;
    while(b){
        if(b&1)(res*=a)%=mod;
        (a*=a)%=mod;
        b>>=1;
    }
    return res;
}