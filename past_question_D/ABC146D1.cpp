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
//おそらくunion find
//違うか
//bfs

int main() {
  int n;
  cin >> n;
  vector<vector<int> > v(n);
  rep(i,n-1) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  int k = 0;
  rep(i,n) {
    int s = v[i].size();
    k = max(k,s);
  }
  cout << k << endl;
  vector<bool> judge(n, false);
  queue<P> q;
  P p = make_pair(0,0);
  q.push(p);
  judge[0] = true;
  vector<int> ans(n-1);
  while(!q.empty()) {
    int f = q.front().first;
    int num = q.front().second;
    int l = 1;
    rep(i,v[f].size()) {
      if (judge[v[f][i]]) continue;
      if (num == l) l++;
      judge[v[f][i]] = true;
      P p1 = make_pair(v[f][i], l);
      ans[v[f][i]] = l;
      l++;
      q.push(p1);
    }
    q.pop();
  }

  for (int i = 1; i < n; i++) cout << ans[i] << endl;

  return 0;
}
