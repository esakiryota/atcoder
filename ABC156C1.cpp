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
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n) cin >> v[i];
  int m = 0;
  rep(i,n) m = max(m, v[i]);
  int ans = INF;
  rep(i,m+1) {
    int sum = 0;
    rep(j,n) {
      int l = (v[j]-i)*(v[j]-i);
      sum += l;
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}
