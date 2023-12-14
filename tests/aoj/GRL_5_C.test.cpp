#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C"
#include "template/template.hpp"
#include "graph/lca.hpp"

void _main() {
    int N, Q;
    cin >> N;
    LCA<ll> G(N);
    rep(i, N) {
        int k; cin >> k;
        rep(j, k) {
            int p; cin >> p;
            G.add_edge(i, p);
        }
    }
    G.build();
    cin >> Q;
    rep(qi, Q) {
        int u, v;
        cin >> u >> v;
        cout << G.lca(u, v) << endl;
    }
}