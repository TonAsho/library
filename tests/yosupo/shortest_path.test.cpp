#define PROBLEM "https://judge.yosupo.jp/problem/shortest_path"
#include "template/template.hpp"
#include "graph/graph-template.hpp"
#include "graph/dijkstra.hpp"

void _main() {
    int N, M, S, T;
    cin >> N >> M >> S >> T;
    Graph<ll> G(N);
    G.read(M, 0, true, true);
    ShortestPath<ll> D = dijkstra(G, S, infl);
    if(D.dist[T] == infl) {
        cout << -1 << endl;
        return ;
    }
    vector<pair<int, int>> path;
    int now = T;
    while(true) {
        path.emplace_back(D.from[now], now);
        if(D.from[now] == S) break;
        now = D.from[now];
    }
    cout << D.dist[T] << " " << path.size() << endl;
    for(auto &[u, v] : path) cout << u << " " << v << endl;
}