#define PROBLEM "https://yukicoder.me/problems/no/599"
#include "template/template.hpp"
#include "string/rolling-hash.hpp"
#include "math/modint.hpp"

using mint = modint1000000007;
void _main() {
    RollingHash rh;
    STR(S);
    auto ht = rh.build(S);
    map<pii, mint> memo;
    function<mint(int, int)> dfs = [&](int l, int r) {
        if(r < l) return mint(1);
        if(memo.find({l, r}) != memo.end()) return memo[{l, r}];
        mint res = 1;
        int L = l, R = r;
        while(L < R) {
            if(rh.hash(ht, l, L + 1) == rh.hash(ht, R, r + 1)) res += dfs(L + 1, R - 1);
            L++, R--;
        }
        return memo[{l, r}] = res;
    };
    cout << dfs(0, S.size() - 1);
}