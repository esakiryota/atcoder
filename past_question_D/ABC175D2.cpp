#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 100100100100100;
typedef long long ll;
using P = pair<int, int>;

//グラフ化して考える
//周期をうまく利用して計算量を減らす
//大体理解できた

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> p(n);
  vector<int> c(n);
  rep(i,n) cin >> p[i];
  rep(i,n) cin >> c[i];
  rep(i,n) p[i]--;
  ll ans = (-1)*INF;
  rep(si,n) {
    int x = si;
    vector<int> s;
    ll tot = 0;
    while(1) {
      x = p[x];
      s.push_back(c[x]);
      tot += c[x];
      if (x == si) break;
    }
    int l = s.size();
    ll t = 0;
    rep(i,l) {
      t += s[i];
      if (i+1 > k) break;
      ll now = t;
      if (tot > 0) {
        ll  e = (k-i-1)/l;
        now += tot*e;
      }
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}
