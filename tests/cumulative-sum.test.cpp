#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"
#include "template/template-yosupo.hpp"
#include "math/cumulative-sum.hpp"

int main() {
    int n, q; cin >> n >> q;
    CumulativeSum<ll> a(n);
    rep(i, n) {
        LL(x);
        a.add(i, x);
    }
    rep(i,q) {
        INT(l, r);
        cout << a.get(l, r) << endl;
    }
    return 0;
}