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
//素因数分解

vector<ll> prime_factorize(ll n) {
  vector<ll> v;
  for (ll i = 2; i*i <= n; i++) {
    if (n%i != 0) continue;
    ll ex = 0;
    while(n%i == 0) {
      ex++;
      n /= i;
    }
    v.push_back(i);
  }
  if (n != 1) v.push_back(n);
  return v;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll ans = 1;
  ll mn = min(a,b);
  vector<ll> an = prime_factorize(a);
  vector<ll> bn = prime_factorize(b);
  rep(i,an.size()) rep(j,bn.size()) {
    if (an[i] == bn[j]) ans++;
  }
  cout << ans << endl;
}
