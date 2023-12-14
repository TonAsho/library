#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B"
#include "template/template.hpp"
#include "datastructure/weighted-union-find.hpp"

void _main() {
    int N, Q;
    cin >> N >> Q;
    WeightedUnionFind<ll> uni(N);
    rep(qi, Q) {
        int t, x, y, w;
        cin >> t >> x >> y;
        if(t == 0) {
            cin >> w;
            uni.unite(x, y, w);
        } else {
            if(uni.same(x, y)) cout << uni.diff(x, y) << '\n';
            else cout << "?\n";
        }
    }
}