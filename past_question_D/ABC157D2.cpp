#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
//問題の意味がわからなかった
//union findというのはわかった

struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};

int deg[100005];
vector<int> to[100005];

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  UnionFind uf(n);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    deg[a]++;
    deg[b]++;
    uf.unite(a,b);
  }

  rep(i,k) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  rep(i,n) {
    int ans = uf.size(i)-1-deg[i];
    for (int u : to[i]) {
      if (uf.same(i,u)) --ans;
    }
    if (i == n-1) {
      cout << ans << endl;;
    } else {
      cout << ans << " ";
    }
  }
}
