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
//priority_queueを用いる

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> v(n);
  rep(i,n) cin >> v[i];
  sort(v.begin(), v.end());
  vector<Pl> pv(m);
  rep(i,m) {
    ll b, c;
    cin >> b >> c;
    Pl p = make_pair(b, c);
    pv[i] = p;
  }
  vector<ll> s(n);
  s[0] = v[0];
  for (int i = 1; i < n; i++) s[i] = s[i-1] + v[i];
  ll ans = 0;
  rep(i,m) {
    ll x = pv[i].first*pv[i].second;
    ans = max(ans, x-s[pv[i].first-1]);
  }

  ans += s[n-1];
  cout << ans << endl;

}
