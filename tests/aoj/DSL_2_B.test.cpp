#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"
#include "template/template.hpp"
#include "datastructure/segment-tree.hpp"

void _main() {
    INT(N, Q);
    SegmentTree<Monoid::Sum<ll>> seg(N);
    rep(qi, Q) {
        INT(T, x, y);
        if(T == 0) {
            seg.update(x-1, seg.get(x-1) + y);
        } else {
            print(seg.prod(x - 1, y));
        }
    }
}