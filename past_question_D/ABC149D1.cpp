#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;
  int r, s, p;
  cin >> r >> s >> p;
  string t;
  cin >> t;

  vector<int> sc(n);
  rep(i,n) {
    if (i-k >= 0 && t[i-k] == t[i] && sc[i-k] > 0) {
      sc[i] = 0;
      continue;
    }
    if(t[i] == 'r') sc[i] = p;
    if(t[i] == 's') sc[i] = r;
    if(t[i] == 'p') sc[i] = s;
  }

  ll ans = 0;
  rep(i,n) {
    ans += sc[i];
  }

  cout << ans << endl;
}
