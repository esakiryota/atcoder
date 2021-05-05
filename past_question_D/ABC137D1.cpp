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
//貪欲方

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<P> pq;
  rep(i,n) {
    int a, b;
    cin >> a >> b;
    P p = make_pair(b, a);
    pq.push(p);
  }
  ll ans = 0;

  for (int i = m; i > 0; i--) {
    if (pq.empty()) break;
    while(1) {
      P t = pq.top(); pq.pop();
      if (pq.empty()) break;
      if (t.second <= i) {
        ans += t.first;
        break;
      }
    }

  }
  cout << ans << endl;
}
