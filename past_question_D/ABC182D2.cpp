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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  ll ans = 0;
  ll s = 0;
  ll b = 0;
  ll max_b = 0;
  rep(i,n) {
    b += a[i];
    max_b = max(max_b, b);
    ans = max(ans, s+ max_b);
    s+=b;
  }
  cout << ans << endl;
}