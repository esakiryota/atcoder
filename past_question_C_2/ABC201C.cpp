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

int main() {
  ll n;
  cin >> n;
  vector<ll> v(200);
  int mod = 200;
  rep(i,n) {
    int a;
    cin >> a;
    int b = a%mod;
    v[b]++;
  }
  ll ans = 0;

  rep(i,200) {
    if (v[i] > 1) {
      ans += v[i]*(v[i]-1)/2;
    }
  }

  cout << ans << endl;
  return 0;

}
