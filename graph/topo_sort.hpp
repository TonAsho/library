#include "graph/graph-template.hpp"

vector<int> topo_sort(const Graph<int> &g) {
    int n = g.size();
    vector<int> e_cnt(n);
    rep(i, n) {
        for(auto e : g[i]) e_cnt[e.to]++;
    }
    queue<int> q;
    rep(i, n) {
        if(e_cnt[i] == 0) q.push(i);
    }
    vector<int> res;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        res.push_back(v);
        for(auto e : g[v]) {
            e_cnt[e.to]--;
            if(e_cnt[e.to] == 0) q.push(e.to);
        }
    }
    return res;
}