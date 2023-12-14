#define PROBLEM "https://judge.yosupo.jp/problem/lca"
#include "template/template.hpp"
#include "graph/lca.hpp"

void _main() {
    int N, Q;
    cin >> N >> Q;
    LCA<ll> G(N);
    rep(i, 1, N) {
        int p; cin >> p;
        G.add_edge(p, i);
    }
    G.build();
    rep(qi, Q) {
        int u, v;
        cin >> u >> v;
        cout << G.lca(u, v) << endl;
    }
}