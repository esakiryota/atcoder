#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
using P = pair<int, int>;
//173とほとんど同じ。
//O(NlogN)で計算
//習ったものを使う。

const int M = 1000005;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<int> cnt(M);
  for (int x : a) {
    if (cnt[x] != 0) {
      cnt[x] = 2;
      continue;
    }
    for (int i = x; i < M; i += x) cnt[i]++;
  }
  int ans = 0;
  for (int x : a) {
    if (cnt[x] == 1) ans++;
  }

  cout << ans << endl;

}
