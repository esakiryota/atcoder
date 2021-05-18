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
//連立で求めない。
//頂点をxと置く。
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  ll x2 = 0;

  rep(i,n) {
    if (i%2) x2 -= a[i];
    else x2 += a[i];
  }
  vector<int> ans(n);
  ans[0] = x2/2;
  rep(i, n-1) {
    ans[i+1] = a[i]-ans[i];
  }
  rep(i,n) ans[i] *= 2;
  rep(i,n) {
    if (i == n-1) {
      cout << ans[i] << endl;
      break;
    }
    cout << ans[i] << " ";
  }

  return 0;
}
