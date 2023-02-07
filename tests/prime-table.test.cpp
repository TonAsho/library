#define PROBLEM "https://judge.yosupo.jp/problem/counting_primes"
#include "template/template-yosupo.hpp"
#include "math/prime-table.hpp"

int main() {
    LL(n);
    cout << prime_table(n).size() << endl;
    return 0;
}