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
  vector<int> v(n);
  rep(i,n) cin >> v[i];
  int ans = 1;
  int m = INF;
  for (int i = 1; i < n; i++) {
    m = min(m, v[i-1]);
    if (m > v[i]) {
      ans++;
    }
  }
  cout << ans << endl;
 }
