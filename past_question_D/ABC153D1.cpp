#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

ll f(ll n) {
  if (n == 0) return 1;
  ll x = f(n/2);
  x *= x;
  if (n%2 == 1) x *= 2;
  return x;
}

int main() {
  ll h;
  cin >> h;
  ll ans = 0;
  rep(i,64) {
    if (f(i) > h) {
      break;
    }
    ans += f(i);
  }
  cout << ans << endl;
}
