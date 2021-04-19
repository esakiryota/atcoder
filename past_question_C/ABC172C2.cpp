#include <stdio.h>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  ll t;
  cin >> a >> b >> t;
  vector<ll> va(a);
  vector<ll> vb(b);
  for (ll i = 0;i<a;i++) cin >> va[i];
  for (ll i = 0;i<b;i++) cin >> vb[i];
  ll sum = 0;
  for (ll i = 0;i<b;i++) sum+=vb[i];
  int j = b;
  int ans = 0;
  for (int i = 0; i<a+1; i++) {
    while (j > 0 && sum > t) {
      --j;
      sum -= vb[j];
    }
    if (sum > t) break;
    ans = max(ans, j+i);
    if (i == a) break;
    sum += va[i];
  }

  cout << ans << endl;
  return 0;
}
