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
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll rn = 0;
  ll gn = 0;
  ll bn = 0;
  rep(i,n) {
    if (s[i] == 'R') rn++;
    if (s[i] == 'G') gn++;
    if (s[i] == 'B') bn++;
  }

  int d = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      int x = (2*j) - i;
      if (x >= n) continue;
      if (s[i] != s[j]) {
        if (s[i] != s[x] && s[j] != s[x]) d++;
      }
    }
  }
  ll ans = rn*gn*bn - d;
  cout << ans << endl;
}
