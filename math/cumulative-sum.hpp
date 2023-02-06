#pragma once
/**
 * @brief Cumulative Sum(一次元累計和)
 */
template< class T >
struct CumulativeSum {
  vector< T > data;
  CumulativeSum() = default;
  explicit CumulativeSum(size_t sz) : data(sz + 1, 0) {}
  void add(int k, const T &x) {data[k + 1] += x;}
  void build() {
    for(int i = 1; i < data.size(); i++) {
      data[i] += data[i - 1];
    }
  }
  T get(int r) const {
    if(r < 0) return 0;
    return data[min(r, (int) data.size() - 1)];
  }
  T get(int l, int r) const {
    return get(r) - get(l);
  }
};