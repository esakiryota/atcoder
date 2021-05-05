#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<ll> v(n);
  rep(i,n) cin >> v[i];
  sort(v.rbegin(), v.rend());
  int m = n-1;
  int j = 0;
  ll ans = 0;
  rep(i,m) {
    ans += v[j];
    if (i%2 == 0) j++;
  }

  cout << ans << endl;
}
