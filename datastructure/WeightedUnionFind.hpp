#pragma once
/**
 * @brief WeightedUnionFind
**/
template <typename T>
struct WeightedUnionFind{
private :
    int n, cnt;
    std::vector<int> ps, sz;
    std::vector<T> ws;

public :
    WeightedUnionFind(int n) : n(n), cnt(n), ps(n,0), sz(n,1), ws(n,0) {
        for(int i = 0; i < n; ++i) ps[i] = i;
    }
    int leader(int x) {
        if(x == ps[x]) return x;
        int t = leader(ps[x]);
        ws[x] += ws[ps[x]];
        return ps[x] = t;
    }
    T weight(int x) {
        leader(x);
        return ws[x];
    }
    T diff(int x, int y) {
        return weight(y) - weight(x);
    }
    bool same(int x, int y) {
        return leader(x) == leader(y);
    }
    int unite(int x, int y, T w) {
        w += weight(x); w -= weight(y);
        x = leader(x); y = leader(y);
        if(x == y) return x;
        if(sz[x] < sz[y]) swap(x, y), w = -w;
        sz[x] += sz[y];
        ps[y] = x;
        ws[y] = w;
        cnt--;
        return x;
    }
    int size(int x) {
        return sz[leader(x)];
    }
    std::vector<std::vector<int>> groups() {
        std::vector<std::vector<int>> res(n);
        for(int i = 0; i < n; ++i) res[leader(i)].push_back(i);
        res.erase(std::remove_if(res.begin(), res.end(), [&](const std::vector<int>& v) {return v.empty();}), res.end());
        return res;
    }
    int count() const {
        return cnt;
    }
};