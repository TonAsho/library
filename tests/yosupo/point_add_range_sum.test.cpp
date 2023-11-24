#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include "template/template.hpp"
#include "datastructure/SegmentTree.hpp"

void _main() {
    INT(N, Q);
    vl A(N);
    input(A);
    SegmentTree<Monoid::Sum<ll>> seg(A);
    rep(qi, Q) {
        INT(T, x, y);
        if(T == 0) seg.update(x, seg[x] + y);
        else print(seg.prod(x, y));
    }
}