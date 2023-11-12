#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"
#include "template/template.hpp"
#include "math/cumulative-sum.hpp"

void _main() {
    int n, q; cin >> n >> q;
    CumulativeSum<ll> a(n);
    rep(i, n) {
        LL(x);
        a.add(i, x);
    }
    a.build();
    rep(i,q) {
        INT(l, r);
        cout << a.get(l, r) << endl;
    }
}