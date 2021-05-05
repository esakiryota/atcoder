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
vector<int> score;

void dfs(int v,int c = 0, int p=-1) {
  c += score[v];
  ans[v] += c;
  rep(i,g[v].size()) {
    int u = g[v][i].to;
    int ei = g[v][i].id;
    if (u == p) continue;
    dfs(u,c,v);
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  g.resize(n);
  ans.resize(n);
  score.resize(n);
  rep(i,n-1) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    g[a].push_back((Edge) {b,i});
    g[b].push_back((Edge) {a,i});
  }

  rep(i,q) {
    int p, x;
    cin >> p >> x;
    p--;
    score[p] += x;
  }

  dfs(0);

  rep(i,n) {
    if (i == n-1) {
      cout << ans[i] << endl;
      break;
    }
    cout << ans[i] << " ";
  }
  return 0;
}
