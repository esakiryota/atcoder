#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<vector<ll> > t(n, vector<ll>(n));
  rep(i,n) rep(j,n) {
    cin >> t[i][j];
  }

  vector<ll> v(n-1);
  for (ll i = 0; i < n-1; i++) {
    v[i] = i+1;
  }

  ll ans = 0;
    do{
      ll sum = 0;
        rep(i,n) {
          if (i == 0) {
            sum += t[0][v[i]];
            continue;
          }
          if (i == n-1) {
            sum += t[v[i-1]][0];
            continue;
          }
          sum += t[v[i-1]][v[i]];
        }
    if (sum == k) ans++;
    }while(next_permutation(v.begin(),v.end()));
  cout << ans << endl;
}
