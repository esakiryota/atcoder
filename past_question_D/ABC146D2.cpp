#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;
//木のときはdfsのほうが良い

struct Edge {
  int to, id;
};

vector<vector<Edge> > g;
vector<int> ans;

void dfs(int v,int c = -1, int p=-1) {
  int k = 1;
  rep(i,g[v].size()) {
    int u = g[v][i].to;
    int ei = g[v][i].id;
    if (u == p) continue;
    if (k == c) ++k;
    ans[ei] = k;
    k++;
    dfs(u,ans[ei],v);
  }
}

int main() {
  int n;
  cin >> n;
  g.resize(n);
  ans = vector<int> (n-1);
  rep(i,n-1) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    g[a].push_back((Edge){b,i});
    g[b].push_back((Edge){a,i});
  }
  dfs(0);
  int mx = 0;
  rep(i,n) mx = max(mx, int(g[i].size()));
  cout << mx << endl;
  rep(i,n-1) {
    cout << ans[i] << endl;
  }
  return 0;
}
