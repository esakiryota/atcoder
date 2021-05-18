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
typedef pair<ll, ll> Pl;
//尺取りほう

int main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }
  ll s = 0;
  int j = 0;
  ll  ans = 0;
  rep(i,n) {
    while(j < n && s+a[j] < k) {
      s += a[j];
      j++;
    }
    ans += j-i;
    s -= a[i];
  }

  ans = (ll)n*(n+1)/2 - ans;
  cout << ans << endl;
  return 0;
}
