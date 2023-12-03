#pragma once
#include <bits/stdc++.h>
/**
 * @brief RollingHash
 */

struct RollingHash {
private:
    static const uint64_t mod = (1ull << 61ull) - 1;
    using uint128_t = __uint128_t;
    std::vector<uint64_t> power;
    const uint64_t base;
    static inline uint64_t add(uint64_t a, uint64_t b) {
        if((a += b) >= mod) a -= mod;
        return a;
    }
    static inline uint64_t mul(uint64_t a, uint64_t b) {
        uint128_t c = (uint128_t)a * b;
        return add(c >> 61, c & mod);
    }
    static inline uint64_t generate_base() {
        std::mt19937_64 mt(std::chrono::steady_clock::now().time_since_epoch().count());
        std::uniform_int_distribution< uint64_t > rand(1, RollingHash::mod - 1);
        return rand(mt);
    }
    inline void expand(size_t sz) {
        if(power.size() < sz + 1) {
            int pre_sz = (int)power.size();
            power.resize(sz + 1);
            for(int i = pre_sz - 1; i < sz; i++) {
                power[i + 1] = mul(power[i], base);
            }
        }
    }
public:
    RollingHash(uint64_t base = generate_base()) : base(base), power{1} {}
    std::vector<uint64_t> build(const std::string &s) const {
        int sz = s.size();
        std::vector<uint64_t> hashed(sz + 1);
        for(int i = 0; i < sz; i++) {
            hashed[i + 1] = add(mul(hashed[i], base), s[i]);
        }
        return hashed;
    }
    template<typename T>
    std::vector<uint64_t> build(const std::vector<T> &s) const {
        int sz = s.size();
        std::vector<uint64_t> hashed(sz + 1);
        for(int i = 0; i < sz; i++) {
            hashed[i + 1] = add(mul(hashed[i], base), s[i]);
        }
        return hashed;
    }
    uint64_t hash(const std::vector<uint64_t> &s, int l, int r) {
        expand(r - l);
        return add(s[r], mod - mul(s[l], power[r - l]));
    }
    uint64_t all_hash(const std::vector<uint64_t> &s) {
        return s.back();
    }
};