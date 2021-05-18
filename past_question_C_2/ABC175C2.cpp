#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;
//abs使う
// overflowしないように割り算にする
int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);
  ll ans = 0;
  if (x/d > k) {
    ans = x - d*k;
  } else {
    ll e = x/d;
    k -= e;
    x -= e*d;
    if (k%2 == 1) x = abs(x-d);
    ans = x;
  }
  cout << ans << endl;
}
