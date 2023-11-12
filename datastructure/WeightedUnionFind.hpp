#pragma once
/**
 * @brief WeightedUnionFind
**/
#include <bits/stdc++.h>
template <typename T>
struct WeightedUnionFind{
  private :
    vector<int> rs,ps;
    vector<T> ws;
  public :
    WeightedUnionFind(int n):rs(n,1),ps(n),ws(n,T(0)){
      iota(ps.begin(),ps.end(),0);
    }
    int find(int x){
      if(x==ps[x]) return x;
      int t=find(ps[x]);
      ws[x]+=ws[ps[x]];
      return ps[x]=t;
    }

    T weight(int x){
      find(x);
      return ws[x];
    }

    bool same(int x,int y){
      return find(x)==find(y);
    }

    void unite(int x,int y,T w){
      w+=weight(x);
      w-=weight(y);
      x=find(x);y=find(y);
      if(x==y) return;
      if(rs[x]<rs[y]) swap(x,y),w=-w;
      rs[x]+=rs[y];
      ps[y]=x;
      ws[y]=w;
    }

    T diff(int x,int y){
      return weight(y)-weight(x);
    }
};