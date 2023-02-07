#include "math/prime.hpp"

vector< int >  prime_table(int n) {
    if(n <= 1) return {};
    auto d = prime(n);
    vector< int > primes;
    rep(i, d.size()) {
        if(d[i]) primes.push_back(i);
    }
    return primes;
}