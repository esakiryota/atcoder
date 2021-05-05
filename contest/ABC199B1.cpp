#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  int ma = 0;
  int mi = INF;

  rep(i,n) {
    ma = max(ma, a[i]);
    mi = min(mi, b[i]);
  }
  int ans = 0;

  for (int i = ma; i <= mi; i++) {
    ans++;
  }

  cout << ans << endl;
}
