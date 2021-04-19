#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

ll powmod(ll x, ll y) {
  ll res = 1;
  for (ll i=0; i<y; i++) {
    res=res*x;
  }
  return res;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  rep(i,n) v[i] = -1;
  int ans = 0;
  rep(i, m) {
    int s, c;
    cin >> s >> c;
    s--;
    if (v[s] == -1 || v[s] == c) v[s] = c;
    else ans = -1;
  }
  
  if (ans == -1){
    cout << -1 << endl;
  } else if (v.size() == 1 && v[0] == 0) {
    cout << 0 << endl;
  } else if (v.size() == 1 && v[0] == -1) {
    cout << 0 << endl;
  } else if (v.size() != 1 && v[0] == 0) {
    cout << -1 << endl;
  } else {
      rep(i,n) {
        if (v[i] == -1) {
          if (i == 0) {
            ans += powmod(10, n-1);
          }
        } else {
          ans += v[i]*powmod(10, n-1-i);
        }
      }
      cout << ans << endl;
    }
}