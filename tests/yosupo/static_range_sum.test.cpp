#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"
#include "template/template.hpp"

void _main() {
    INT(N, Q);
    vl A(N);
    input(A);
    CumulativeSum<ll> sum(A);
    sum.build();
    rep(qi, Q) {
        INT(l, r);
        print(sum.prod(l, r));
    }
}