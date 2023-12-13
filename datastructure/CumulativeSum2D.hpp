#pragma once
#include <bits/stdc++.h>
/**
 * @brief CumulativeSum2D
*/

template<typename T>
struct CumulativeSum2D {
  private: 
    std::vector<std::vector<T>> data;
    bool sorted = false;
  public:
    CumulativeSum2D(int H, int W) : data(H + 1, std::vector<T>(W + 1, 0)) {}
    void add(int h, int w, T val) {
        h++, w++;
        data[h][w] += val;
    }
    void build() {
        assert(!sorted); sorted = true;
        for(int i = 1; i < data.size(); i++) {
            for(int j = 1; j < data[0].size(); j++) {
                data[i][j] += data[i][j - 1] + data[i - 1][j] - data[i - 1][j - 1];
            }
        }
    }
    T prod(int x1, int y1, int x2, int y2) {
        assert(sorted);
        return (data[x2][y2] - data[x1][y2] - data[x2][y1] + data[x1][y1]);
    }
};