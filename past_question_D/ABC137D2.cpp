#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int> > jobs(m+1);
  rep(i,n) {
    int a, b;
    cin >> a >> b;
    if (a > m) continue;
    jobs[m-a].push_back(b);
  }
  priority_queue<int> q;
  ll ans = 0;
  for (int i = m-1; i >= 0; --i) {
    for (int b : jobs[i]) {
      q.push(b);
    }
    if (!q.empty()) {
      ans += q.top();
      q.pop();
    }
  }
  cout << ans << endl;
  return 0;
}
