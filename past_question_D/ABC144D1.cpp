#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define PI 3.14159265358979323846264338327950;
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;


int main() {
  double a, b, x;
  cin >> a >> b >> x;
  cout << fixed << setprecision(21);
  double v = a*a*b;
  double w = x/v;
  double ans;
  if (x >= v/2) {
    double c = a/b;
    double d = 1.0-w;
    double t = c/d;
    t /= 2.0;
    double radian = atan(t);
    ans = radian * 180.0 / PI;
    ans = 90.0 - ans;
  } else {
    double t = 2*w;
    double radian = atan(t);
    ans = radian * 180.0 / PI;
    ans = 90.0 - ans;
  }

  cout << fixed << setprecision(21) << ans << endl;
}
