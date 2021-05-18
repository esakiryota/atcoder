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
  vector<ll> v;
  v.push_back(2);
  v.push_back(3);
  ll i = 4;
  ll sum = 6;
  ll m = 2;
  while(1) {
    bool ok = true;
    for (ll j = 2; j <= sqrt(i); j++) {
      if (i%j == 0) {
        ok = false;
        break;
      }
    }
    if (ok) {
      sum *= i;
      v.push_back(i);
      m++;
    }
    if (m == n) break;
    i++;
  }

  for (int j = 0; j < v.size(); j++) {
    if (j == v.size()-1) {
      cout << sum/v[j] << endl;
      break;
    }
    cout << sum/v[j] << " ";
  }
}
