#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int> > v(n);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  queue<int> q;
  vector<int> x(n, false);
  vector<int> ans(n);
  q.push(0);
  x[0] = true;
  int num = -1;
  while(!q.empty()) {
    int l = q.size();
    rep(j,l) {
      int q1 = q.front();
      rep(i,v[q1].size()) {
        if (!x[v[q1][i]]) {
          q.push(v[q1][i]);
          x[v[q1][i]] = true;
          ans[v[q1][i]] = q1 + 1;
        }
      }
      q.pop();
    }
    num++;
  }
  if (num == 0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) {
      if (x[i]) {
        cout << ans[i] << endl;
      }
    }
  }

  return 0;
}
