#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D"
#include "template/template.hpp"
#include "datastructure/inversion-number.hpp"

void _main() {
    INT(N);
    vi A(N);
    input(A);
    print(inversion(A));
}