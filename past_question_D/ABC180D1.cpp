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
  long double x, y, a, b;
  cin >> x >> y >> a >> b;
  long double c = b/x;
  ll sum = 0;
  long double d = a;
  while(a < c) {
    sum++;
    a *= d;
  }
  long double z = y-a;
  sum += z/b;
  cout << sum << endl;
}
