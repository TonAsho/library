---
title: UnionFind
documentation_of: ./datastructure/UnionFind.hpp
---
# 使い方
### unite
```c++
int unite(int x, int y)
```
辺(x, y)を追加する.<br>
新たな代表元を返す.<br>
### same
```c++
bool same(int x, int y)
```
頂点x, yが連結かどうか返す.
### leader
```c++
int leader(int x)
```
頂点xの属する連結成分の代表元を返す.
### size
```c++
int size(int x)
```
頂点xの属する連結成分のサイズを返す.
### groups
```c++
vector<vector<int>> groups()
```
グラフを連結成分に分け、それぞれの頂点集合を返す.