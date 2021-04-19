#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
// ユークリッド距離が座標距離より小さい場合は2;

int main() {
  double r, x, y;
  cin >> r >> x >> y;
  long double lo = x*x + y*y;
  double sq = sqrt(lo);
  if (r > sq) {
    cout << 2 << endl;
  } else {
    int ans = sq/r;
   double ra = r*ans;
   if (sq == ra) cout << ans << endl;
   else cout << ans + 1 << endl;
  }
}
