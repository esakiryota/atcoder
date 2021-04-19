#include <stdio.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#include<iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
typedef long long ll;
using P = pair<int, int>;
//AC
int main() {
  int a, b, h, m;
  double pi = 3.14159265358979323846264338327950;
  cin >> a >> b >> h >> m;
  cout << fixed << setprecision(15);
  double kaku = m/60.0;
  double kaku1 = (h+kaku)*30.0;
  double kaku2 = m*6.0;
  double kaku3 = abs(kaku2-kaku1);
  double c = a*a + b*b - 2.0*a*b*cos(pi * kaku3 / 180.0);
  double ans = sqrt(c);
  std::cout<<std::fixed<<std::setprecision(21)<<ans<<std::endl;
  return 0;
}
