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

int gcd(int a, int b) {
  while (b > 0) {
    int r = a%b;
    a = b;
    b = r;
  }
  int abr = a;
  return abr;
}

int main() {
  int a, b;
  cin >> a >> b;
  int c = a*b/gcd(a, b);
  int da = a/2;
  int db = b/2;
  int c_a = c/a - da;
  int c_b = c/b - db;
  int firc = c;
  while (c_a <= 0 || c_b <= 0)  {
    c += firc;
    c_a = c/a - da;
    c_b = c/b - db;
  }
  vector<int> v;

  for (int i = da*(-1); i <= da; i++) {
    if (a%2 == 0 && i == 0) continue;
    int e = c/a;
    v.push_back(e+i);
  }
  for (int i = db*(-1); i <= db; i++) {
    if (b%2 == 0 && i == 0) continue;
    int e = c/b*(-1);
    v.push_back(e+i);
  }

  rep(i,v.size()) {
    if (i == v.size()-1) {
      cout << v[i] << endl;
      break;
    }
    cout << v[i] << " ";
  }
  return 0;
}
