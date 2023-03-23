#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include "template/template-yosupo.hpp"
#include "graph/graph-template.hpp"
#include "graph/dijkstra.hpp"

int main() {
    int n, m, s; cin >> n >> m >> s;
    Graph<int> g(n);
    g.read(m, 0, true, true);
    auto d = dijkstra(g, s);
    for(auto x : d.dist) {
        if(x == inf) cout << "INF" << endl;
        else cout << x << endl;
    }
    return 0;
}