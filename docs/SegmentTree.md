---
title: SegmentTree
documentation_of: ./datastructure/SegmentTree.hpp
---
# 使い方
### 初期化
頑張りましょう.
### update
```c++
void update(int x, T val)
```
seg[x]にvalを代入する.
### prod
```c++
T prod(int l, int r)
```
op(seg[l], ... ,seg[r - 1])を返す.
### all_prod
```c++
T all_prod()
```
op(seg[0], ..., a[n - 1])を返す.
### max_right
```c++
int max_right(int l, F f)
```
f(op(seg[l], ..., seg[r])) = true を満たす最大のrを返す.
### min_left
```c++
int max_right(int r, F f)
```
f(op(seg[l], ..., seg[r - 1])) = true を満たす最小のlを返す.