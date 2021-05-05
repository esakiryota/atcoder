#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
using P = pair<int, int>;


int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> s(n+1);
  for (ll i = 1; i < n+1; i++) s[i] = s[i-1] + i;
  ll ans = 1;
  for (ll i = k; i < n+1; i++) {
    ll x = s[i-1];
    ll y = s[n]-s[n-i];
    ll d = y-x+1;
    ll mod = 1000000007;
    d %= 1000000007;
    ans += d;
    ans %= 1000000007;
  }
  cout << ans << endl;
  return 0;
}
