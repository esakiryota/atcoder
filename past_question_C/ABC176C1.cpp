#include <stdio.h>
#include<iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll max = 0;
  ll sum = 0;
  for (ll i = 0; i < n; i++)  cin >> v[i];
  for (ll i = 0; i < n; i++) {
    if (max < v[i]) {
      max = v[i];
    } else {
      sum += max-v[i];
    }
  }

  cout << sum << endl;

}
