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
//面積で考える

int main() {
  double a, b, x;
  cin >> a >> b >> x;
  double s = x/a;
  double rad;
  if (s >= a*b/2) {
    double h = (a*b-s)*2/a;
    rad = atan2(h,a);
  } else {
    double w = s*2/b;
    rad = atan2(b,w);
  }
  double PI = acos(-1);
  double deg = rad/(2*PI)*360;

  cout << fixed << setprecision(21) << deg << endl;
}
