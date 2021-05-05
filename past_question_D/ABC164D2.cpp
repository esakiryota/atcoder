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
//mod計算からの累積和
//累積和からの分ぷ
//もう一度復習

const int m = 2019;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  reverse(s.begin(), s.end());
  int x = 1;
  int tot = 0;
  vector<int> cnt(m);
  ll ans = 0;
  rep(i,n) {
    cnt[tot]++;
    tot += (s[i]-'0')*x;
    tot %= m;
    ans += cnt[tot];
    x = x*10%m;
  }

  cout << ans << endl;

}
