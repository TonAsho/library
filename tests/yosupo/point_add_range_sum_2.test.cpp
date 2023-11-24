#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include "template/template.hpp"
#include "datastructure/BinaryIndexedTree.hpp"

void _main() {
    INT(N, Q);
    vl A(N);
    input(A);
    BinaryIndexedTree<ll> bit(A);
    rep(qi, Q) {
        INT(T, x, y);
        if(T == 0) bit.add(x, y);
        else print(bit.sum(x, y));
    }
}