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

//二分探索でupper_boundを使えるかも

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  rep(i,n) {
    cin >> v[i];
  }

  vector<ll> s(n+1);
  s[0] = 0;
  int ans = 0;
  for (int i = 1; i < n+1; i++) s[i] = s[i-1] + v[i-1];
  for (int i = n; i >= 0; i--) {
    if (s[i] <= k) {
      break;
    }
    for (int j = 0; j < i; j++) {
      ll a = s[i] - s[j];
      if (a < k) {
        break;
      }
      ans++;
    }
  }

  cout << ans << endl;
}
