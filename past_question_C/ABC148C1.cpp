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

ll gcd(ll a, ll b) {
  while (b > 0) {
    ll r = a%b;
    a = b;
    b = r;
  }
  ll abr = a;
  return abr;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll g = gcd(a, b);
  ll ans = (a*b)/g;
  cout << ans << endl;
}
