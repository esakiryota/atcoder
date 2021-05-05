#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;


int main() {
  ll n;
  cin >> n;
  vector<ll> v(200005);
  vector<ll> d(n);
  rep(i,n) {
    int m;
    cin >> m;
    m--;
    v[m]++;
    d[i] = m;
  }
  vector<ll> ans(n);
  ll sum = 0;
  rep(i,n) {
    sum += v[i]*(v[i]-1)/2;
  }

  rep(i,n) {
    ans[i] = sum - v[d[i]]+1;
  }

  rep(i,n) cout << ans[i] << endl;
}
