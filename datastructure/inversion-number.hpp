#pragma once
/**
 * @brief Inversion Number(転倒数)
*/
#include <bits/stdc++.h>
#include "binary-indexed-tree.hpp"
#include "others/compressor.hpp"

template<typename T>
long long inversion(std::vector<T> a) {
    int n = a.size();
    Compressor<int> c(a);
    c.build();
    std::vector<int> b = c.pressed(a);
    long long res = 0;
    BinaryIndexedTree<ll> bit(c.size());
    for(int i = 0; i < n; ++i) {
        res += i - bit.sum(0, b[i] + 1);
        bit.add(b[i], 1);
    }
    return res;
}