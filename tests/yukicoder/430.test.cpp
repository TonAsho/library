#define PROBLEM "https://yukicoder.me/problems/no/430"
#include <bits/stdc++.h>
using namespace std;
#include "string/rolling-hash.hpp"

int main() {
    RollingHash rh;
    string S;
    int M;
    cin >> S >> M;
    auto hash = rh.build(S);
    unordered_map<uint64_t, int> cnt;
    for(int i = 0; i < S.size(); ++i) {
        for(int j = 0; j < 10; ++j) {
            if(i + j < S.size())
                cnt[rh.hash(hash, i, i + j + 1)]++;
        }
    }
    string T;
    int ans = 0;
    for(int i = 0; i < M; ++i) {
        cin >> T;
        ans += cnt[rh.all_hash(rh.build(T))];
    }
    cout << ans << endl;
}