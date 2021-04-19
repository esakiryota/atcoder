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
  double x, y, z;
  cin >> x >> y >> z;
  double r = y/x;
  int s = r*z - 0.0000000001;

  cout << s << endl;
}
