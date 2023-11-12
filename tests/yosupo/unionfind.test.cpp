#define PROBLEM https://judge.yosupo.jp/problem/unionfind
#include "template/template.hpp"
#include "datastructure/UnionFind.hpp"

void _main() {
    int N, Q;
    cin >> N >> Q;
    UnionFind uni(N);
    rep(qi, Q) {
        int t, u, v;
        cin >> t >> u >> v;
        if(t == 0) uni.unite(u, v);
        else cout << uni.same(u, v) << '\n';
    }
}