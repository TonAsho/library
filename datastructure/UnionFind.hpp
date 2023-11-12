#pragma once
/**
 * @brief UnionFind
**/
struct UnionFind {
    private :
    int n, cnt;
    vector<int> ps, sz;

    public :
    UnionFind(int n) : n(n), cnt(n), ps(n,0), sz(n,1) {
        for(int i = 0; i < n; ++i) ps[i] = i;
    }
    int leader(int x) {
        return (ps[x] == x ? x : ps[x] = leader(ps[x]));
    }
    bool same(int x, int y) {
        return leader(x) == leader(y);
    }
    int unite(int x, int y) {
        x = leader(x); y = leader(y);
        if(x == y) return x;
        if(sz[x] < sz[y]) swap(x, y);
        sz[x] += sz[y];
        ps[y] = x;
        cnt--;
        return x;
    }
    int size(int x) {
        return sz[leader(x)];
    }
    vector<vector<int>> groups() {
        vector<vector<int>> res(n);
        for(int i = 0; i < n; ++i) res[leader(i)].push_back(i);
        res.erase(remove_if(res.begin(), res.end(), [&](const vector<int>& v) {return v.empty();}), res.end());
        return res;
    }
    int count() const {
        return cnt;
    }
};