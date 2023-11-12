#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A"
#include "template/template.hpp"
#include "graph/Kruskal.hpp"

void _main() {
    int N, M;
    cin >> N >> M;
    Kruskal<ll> G(N);
    rep(i, M) {
        int u, v, c; cin >> u >> v >> c;
        G.add_edge(u, v, c);
    }
    cout << G.build() << endl;
}