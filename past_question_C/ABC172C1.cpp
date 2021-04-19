#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
typedef long long ll;
//アルゴリズムが違う
int main() {
  ll a, b;
  ll t;
  cin >> a >> b >> t;
  vector<ll> va(a);
  vector<ll> vb(b);
  for (ll i = 0;i<a;i++) cin >> va[i];
  for (ll i = 0;i<b;i++) cin >> vb[i];
  ll m=0;
  ll n = 0;
  ll sum = 0;
  while(m+n<a+b) {
    if (va[m] < vb[n] || n == b) {
      sum+=va[m];
      if (sum > t) {
        break;
      }
      m++;
    } else if (va[m] >= vb[n] || m == a){
      sum+=vb[n];
      if (sum > t) {
        break;
      }
      n++;
    }
  }

  cout << m+n << endl;
}
