#pragma once
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<ll>;
using vvl = std::vector<vl>;
using vd = std::vector<double>;
using vvd = std::vector<vd>;
using vs = std::vector<std::string>;
using vvs = std::vector<vs>;
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vc = std::vector<char>;
using vvc = std::vector<vc>;
using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;
using mii = std::map<int, int>;
using mll = std::map<ll, ll>;
template<typename T>
struct infinity{
    static constexpr T max=std::numeric_limits<T>::max();
    static constexpr T min=std::numeric_limits<T>::min();
    static constexpr T value=std::numeric_limits<T>::max()/2;
    static constexpr T mvalue=std::numeric_limits<T>::min()/2;
};
template<typename T>constexpr T INF=infinity<T>::value;
constexpr ll infl=INF<ll>;
constexpr int inf = INF<int>;
constexpr ld PI = 3.1415926535897932384626;