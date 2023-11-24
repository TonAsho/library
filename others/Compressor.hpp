#pragma once
#include <bits/stdc++.h>

template<typename T>
struct Compressor {
private:
    std::vector<T> data;
    bool sorted = false;
public:
    Compressor(const std::vector<T> &v) : data(std::move(v)) {}
    void build() {
        assert(!sorted);
        sorted = 1;
        std::sort(data.begin(), data.end());
        data.erase(std::unique(data.begin(), data.end()), data.end());
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
        return (int)data.size();
    }
};