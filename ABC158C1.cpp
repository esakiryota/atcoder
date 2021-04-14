#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  double a, b;
  cin >> a >> b;
  vector<int> v(10);
  b *= 10;
  rep(i,10) {
    v[i] = b;
    b += 1;
  }
  int ans = 0;
  rep(i,10) {
    double c = v[i];
    int d = c*0.08;
    if (d == a) {
      ans = v[i];
      break;
    }
  }
  if (ans == 0) cout << -1 << endl; 
  else cout << ans << endl;
}