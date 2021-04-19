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

int main() {
  double n;
  cin >> n;
  vector<double> vx(n);
  vector<double> vy(n);
  rep(i,n) {
    cin >> vx[i] >> vy[i];
  }
  vector<double> v(n);
  double d = 1;
  rep(i,n) {
    v[i] = i;
    d *= i+1;
  }
  double sum = 0;
  do {
    rep(i,n-1) {
      double xl = (vx[v[i+1]] - vx[v[i]])*(vx[v[i+1]] - vx[v[i]]);
      double yl = (vy[v[i+1]] - vy[v[i]])*(vy[v[i+1]] - vy[v[i]]);
      double l = sqrt(xl + yl);
      sum += l;
    }
  } while (next_permutation(v.begin(), v.end()));
  // vector<double> v;
  // for (int i = 0; i < n; i++) {
  //   for (int j = i+1; j < n; j++) {
  //     double xl = (vx[i] - vx[j])*(vx[i] - vx[j]);
  //     double yl = (vy[i] - vy[j])*(vy[i] - vy[j]);
  //     double l = sqrt(xl + yl);
  //     v.push_back(l);
  //   }
  // }
  // double sum = 0;
  //
  // rep(i,v.size()) {
  //   cout << v[i] << endl;
  //   sum += v[i];
  // }
  //
  // double ans = (sum*(n-1))/n;
  double ans = sum/d;
  cout << fixed << setprecision(21) << ans << endl;
}
