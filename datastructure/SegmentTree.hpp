#pragma once
#include <bits/stdc++.h>

#include "others/Monoid.hpp"

template<class M>
struct SegmentTree {
private:
    using T = typename M::value_type;
    int n, sz;
    std::vector<T> data;
public:
    SegmentTree() : SegmentTree(0) {}
    SegmentTree(int n, const T &e = M::e()) : SegmentTree(std::vector<T>(n, e)) {}
    SegmentTree(const std::vector<T> &v) : n(v.size()), sz(1) {
        while(sz < n) sz <<= 1;
        data.resize(sz << 1, M::e());
        for(int i = 0; i < n; ++i) data[sz + i] = v[i];
        for(int i = sz - 1; i >= 1; i--) data[i] = M::op(data[i << 1], data[i << 1 ^ 1]);
    }
    void update(int x, T val) {
        x += sz;
        data[x] = val;
        while(x >>= 1) data[x] = M::op(data[x << 1], data[x << 1 ^ 1]);
    }
    T prod(int l, int r) const {
        l += sz, r += sz;
        T lsm = M::e(), rsm = M::e();
        while(l != r) {
            if(l & 1) lsm = M::op(lsm, data[l++]);
            if(r & 1) rsm = M::op(data[--r], rsm);
            l >>= 1;
            r >>= 1;
        }
        return M::op(lsm, rsm);
    }
    T all_prod() const { return data[1]; }
    T get(int x) const { return data[sz + x]; }
    T operator[](int x) const { return get(x); }
    template<class F>
    int max_right(int l, const F &f) const {
        if(l == n) return n;
        l += sz;
        T sum = M::e();
        do {
            while((l & 1) == 0) l >>= 1;
            if(!f(M::op(sum, data[l]))) {
                while(l < sz) {
                    l <<= 1;
                    if(f(M::op(sum, data[l]))) sum = M::op(sum, data[l++]);
                }
                return l-sz;
            }
            sum = M::op(sum, data[l++]);
        } while((l & -l) != l);
        return n;
    }
    template<class F>
    int min_left(int r, const F &f) const {
        if(r == 0) return 0;
        r += sz;
        T sum = M::e();
        do{
            --r;
            while((r & 1) && r > 1) r >>= 1;
            if(!f(M::op(data[r],sum))) {
                while(r < sz) {
                    r = (r << 1) ^ 1;
                    if(f(M::op(data[r],sum))) sum = M::op(data[r--], sum);
                }
                return r + 1 - sz;
            }
            sum = M::op(data[r], sum);
        } while((r & -r) != r);
        return 0;
    }
};