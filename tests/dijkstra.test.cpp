#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include "template/template.hpp"
#include "graph/graph-template.hpp"
#include "graph/dijkstra.hpp"

void _main() {
    int N, M, S;
    cin >> N >> M >> S;
    Graph<ll> G(N);
    G.read(M, 0, true, true);
    ShortestPath<ll> d = dijkstra(G, S, infl);
    rep(i, N) {
        if(d.dist[i] == infl) cout << "INF" << endl;
        else cout << d.dist[i] << endl;
    }
}