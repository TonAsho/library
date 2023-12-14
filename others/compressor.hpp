#pragma once
#include <bits/stdc++.h>

template<typename T, typename Comp = std::less<T>>
struct Compressor {
  private:
    std::vector<T> data;
    Comp cmp;
    bool sorted = false;
  public:
    Compressor() : Compressor(Comp()) {}
    Compressor(const Comp &cmp) : cmp(cmp) {}
    Compressor(const std::vector<T> &v, const Comp &cmp = Comp()) : data(v), cmp(cmp) {}
    Compressor(std::vector<T> &&v, const Comp &cmp = Comp()) : data(std::move(v)), cmp(cmp) {}
    Compressor(std::initializer_list<T> li, const Comp &cmp = Comp()) : data(li.begin(), li.end()), cmp(cmp) {}
    void push_back(const T &v) { assert(!sorted); data.push_back(v); }
    void push_back(T &&v) { assert(!sorted); data.push_back(std::move(v)); }
    void push(const std::vector<T> &v) {
        assert(!sorted);
        const int n = data.size();
        data.resize(v.size() + n);
        for(int i = 0; i < (int)v.size(); i++) data[i + n] = v[i];
    }
    void build() {
        assert(!sorted);
        sorted = 1;
        std::sort(data.begin(), data.end(), cmp);
        data.erase(std::unique(data.begin(), data.end(), [&](const T &l, const T &r) { return !cmp(l, r) && !cmp(r, l); }), data.end());
    }
    int get_index(const T &v) {
        assert(sorted);
        return int(std::lower_bound(data.begin(), data.end(), v) - data.begin());
    }
    void press(std::vector<T> &v) {
        assert(sorted);
        for(auto &i : v) i = get_index(i);
    }
    std::vector<int> pressed(const std::vector<T> &v) {
        assert(sorted);
        std::vector<int> res(v.size());
        for(int i = 0; i < (int)v.size(); ++i) res[i] = get_index(v[i]);
        return res;
    }
    int size() const {
        assert(sorted);
        return (int)data.size();
    }
};