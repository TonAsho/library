#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"
#include "template/template.hpp"
#include "datastructure/BinaryIndexedTree.hpp"

void _main() {
    INT(N, Q);
    BinaryIndexedTree<ll> bit(N);
    rep(qi, Q) {
        INT(T, x, y);
        if(T == 0) bit.add(x - 1, y);
        else print(bit.sum(x - 1, y));
    }
}