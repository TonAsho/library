#pragma once
/**
 * @brief BinaryIndexedTree
**/
#include <bits/stdc++.h>

template<typename T>
struct BinaryIndexedTree {
private:
    int n;
    std::vector<T> data;
    T sum(int x) {
        T res = 0;
        while(x) {
            res += data[x];
            x -= x & -x;
        }
        return res;
    }
public:
    BinaryIndexedTree() : n(0) {}
    BinaryIndexedTree(int n) : n(n), data(n + 1, 0) {}
    BinaryIndexedTree(const std::vector<T> &v) : n(v.size()), data(v.size() + 1, 0) {
        for(int i = 0; i < n; ++i) add(i, v[i]);
    }
    void add(int x, T val) {
        x++;
        while(x <= n) {
            data[x] += val;
            x += x & -x;
        }
    }
    T sum(int l, int r) {
        return sum(r) - sum(l);
    }
    T operator[](int x) const { return sum(x, x + 1); }
};