#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  double n, k;
  cin >> n >> k;
  vector<double> p(n);
  rep(i,n) cin >> p[i];
  vector<double> q(n);
  rep(i,n) q[i] = (p[i]+1)/2;
  vector<double> s(n+1);
  s[0] = 0;
  for (int i = 1; i < n+1; i++) {
    s[i] = s[i-1] + q[i-1];
  }
  double ans = 0;
  for (int i = 0; i < n-k+1; i++) {
    double a = s[i+k] - s[i];
    ans = max(ans, a);
  }

  cout << fixed << setprecision(21) << ans << endl;
}
