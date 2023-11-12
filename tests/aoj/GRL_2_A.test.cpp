#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A"
#include "template/template.hpp"
#include "graph/graph-template.hpp"
#include "graph/Kruskal.hpp"

void _main() {
    int N, M;
    cin >> N >> M;
    Edges<ll> E;
    rep(i, M) {
        int u, v, w;
        cin >> u >> v >> w;
        E.emplace_back(u, v, w, i);
    }
    MinimumSpanningTree<ll> K = kruskal(E, N);
    cout << K.cost << endl;
}