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
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  rep(i,n) cin >> v[i];
  sort(v.begin(), v.end());
  ll m;
  if (n < k) m = 0;
  else m = n - k;
  ll sum = 0;
  rep(i,m) {
    sum += v[i];
  }
  cout << sum << endl;
}
