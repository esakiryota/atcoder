#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

ll five(ll x) {
  ll y = x*x*x*x*x;
  return y;
}

int main() {
  ll n;
  cin >> n;
  bool judge = false;
  for (ll i = 0; i < 200; i++) {
    for (ll j = 0; j < 200; j++) {
      ll p = five(i) + five(j);
      ll q = five(i) - five(j);
      if (n == q) {
        cout << i << " " << j << endl;
        judge = true;
        break;
      }
      if (n == (-1)*q) {
        cout << (-1)*i << " " << (-1)*j << endl;
        judge = true;
        break;
      }
      if (n == p) {
        cout << i << " " << (-1)*j << endl;
        judge = true;
        break;
      }
      if (n == (-1)*p) {
        cout << (-1)*i << " " << j << endl;
        judge = true;
        break;
      }
    }
    if (judge) {
      break;
    }

  }
  return 0;

}
