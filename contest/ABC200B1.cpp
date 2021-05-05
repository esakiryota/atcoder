#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const double INF = 1001001001;
typedef long long ll;

int main() {
  double n, d, h;
  cin >> n >> d >> h;
  vector<double> di(n);
  vector<double> hi(n);
  rep(i,n) {
    cin >> di[i] >> hi[i];
  }

  double v = INF;

  rep(i,n) {
    double x = d-di[i];
    double y = h-hi[i];
    double a = y/x;
    v = min(v, a);
  }

  double ans = h-d*v;
  if (ans < 0) {
    cout << fixed << setprecision(21) << 0 << endl;
  } else {
    cout << fixed << setprecision(21) << ans << endl;
  }
}
