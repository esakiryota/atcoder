#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;


ll re(ll d) {
  ll r = 0;
  while(d > 0) {
    d /= 10;
    r++;
  }
  return r;
}

ll powmod(ll x, ll y) {
  ll res = 1;
  for (ll i=0; i<y; i++) {
    res=res*x;
  }
  return res;
}

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  ll n = x/a;
  ll r = re(n);
  ll fir = n*a + b*r;
  ll p = powmod(10, r-1);

  while (fir > x) {
    n--;
    if (n < p) {
      r--;
      p = powmod(10, r-1);
    }
    fir = n*a + b*r;
  }
  if (n >= 1000000000) {
    n = 1000000000;
  }
  cout << n << endl;
}
