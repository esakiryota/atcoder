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
//わからないから答え写した
//O(NlogN)で収まる
//10の7乗はO(NlogN)で大丈夫

int main() {
  int n;
  cin >> n;
  vector<int> d(n+1);
  for (int i = 1; i <= n; i++) {
    for(int j = i; j <= n; j+=i) d[j]++;
  }
  ll  ans = 0;
  for(int i = 1; i <= n; i++) ans += ll(i)*d[i];
  cout << ans << endl;
}
