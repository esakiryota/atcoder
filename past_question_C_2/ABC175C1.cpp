#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  ll ans = 0;
  ll c = x/d;
  ll e = k-c;
  if (x >= k*d) {
    ans = x-(k*d);
  } else {
    if (e%2 == 1) {
      ll a = x - c*d;
      ll b = d-a;
      ans = b;
    } else {
      ll a = x - c*d;
      ans = a;
    }
  }
  cout << ans << endl;
}
