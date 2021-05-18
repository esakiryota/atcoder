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

int main() {
  ll n;
  cin >> n;
  vector<Pl> v(n);
  rep(i,n) {
    ll a, b;
    cin >> a >> b;
    Pl p = make_pair(b, a);
    v[i] = p;
  }

  sort(v.rbegin(), v.rend());

  ll now = v[0].first;
  string ok = "Yes";
  rep(i,n) {
    now -= v[i].second;
    if (now < 0) {
      ok = "No";
      break;
    }
    if (now > v[i+1].first && i != n-1) {
      now = v[i+1].first;
    }
  }

  cout << ok << endl;
}
