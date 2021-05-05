#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define PI 3.14159265358979323846264338327950;
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

vector<ll> downSort(vector<ll> a) {
  ll i = a.size()-1;
  while(a[i] < a[i-1]) {
    ll x = a[i-1];
    a[i-1] = a[i];
    a[i] = x;
    i--;
  }
  return a;
}

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());
  rep(i,m) {
    a[n-1] /= 2;
    ll j = 0;
    while(a[n-1-j] < a[n-2-j]) {
      ll x = a[n-1-j];
      a[n-1-j] = a[n-2-j];
      a[n-2-j] = x;
      j++;
    }
  }

  ll ans = 0;
  rep(i,n) {
    ans += a[i];
  }
  cout << ans << endl;
}
