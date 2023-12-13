#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A"
#include "template/template.hpp"
#include "datastructure/segment-tree.hpp"

void _main() {
    INT(N, Q);
    SegmentTree<Monoid::Min<ll>> seg(N, (1ll<<31)-1);
    rep(qi, Q) {
        LL(T, x, y);
        if(T == 1) {
            print(seg.prod(x, y + 1));
        } else {
            seg.update(x, y);
        }
    }
}