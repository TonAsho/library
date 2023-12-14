#pragma once;
#include <bits/stdc++.h>

#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(i, n) for (int i = 0; i < int(n); ++i)
#define rep2(i, s, n) for (int i = int(s); i < int(n); ++i)
#define rep3(i, s, n, d) for(int i = int(s); i < int(n); i+=d)
#define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define SUM(a) accumulate(all(a),0LL)
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define INT(...) int __VA_ARGS__;input(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;input(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;input(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;input(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;input(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;input(__VA_ARGS__)
#define pb push_back
#define eb emplace_back