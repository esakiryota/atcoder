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
  ll n,k;
  cin >> n >> k;
  vector<ll> v(n);
  rep(i,n) cin >> v[i];
  vector<ll> b(n);
  vector<ll> a;
  vector<ll> f;
  ll stay = 0;
  b[0] += 1;
  f.push_back(0);
  while(1) {
    ll next = v[stay]-1;
    if (b[next] == 0) {
      f.push_back(next);
    } else if (b[next] == 1) {
      a.push_back(next);
    } else {
      break;
    }
    b[next] += 1;
    stay = next;
  }

  ll first = f.size();
  ll k_f = k-first;
  if (k < first) {
    cout << f[k]+1 << endl;
  } else {
    ll ba = a.size();
    ll anspos = k_f%ba;
    ll ans = a[anspos] + 1;
    cout << ans << endl;
  }
  return 0;
}
