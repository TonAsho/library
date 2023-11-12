#include "math/prime.hpp"

vector< ll >  prime_table(int n) {
    if(n <= 1) return {};
    auto d = prime(n);
    vector< ll > primes;
    rep(i, d.size()) {
        if(d[i]) primes.push_back(i);
    }
    return primes;
}