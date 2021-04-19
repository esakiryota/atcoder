#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll s = sqrt(n);
  ll ans = 0;
  for (ll i = s; i > 0; i--) {
    if (n%i == 0) {
      ll d = n/i;
      ans = d+i-2;
      break;
    }
  }
  cout << ans << endl;
}
