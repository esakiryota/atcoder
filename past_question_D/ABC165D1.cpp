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
  ll a, b, n;
  cin >> a >> b >> n;
  ll q = n/b;
  ll r = n%b;
  ll left = (a*n)/b;
  ll right = (n/b)*a;
  ll ans1 = left - right;
  if (b > n) {
    cout << ans1 << endl;
  } else {
    ll p = n - r - 1;
    ll ans2 = (a*p)/b - (p/b)*a;
    int ans = max(ans1, ans2);
    cout << ans << endl;
  }
  return 0;
}
