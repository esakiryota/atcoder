#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
// WAしか出ていない場合はどうするか？それを考えないと行けなかった。

int main() {
  ll n, m;
  cin >> n >> m;
  vector<vector<string> > v(n);
  rep(i,m) {
    int p;
    string s;
    cin >> p >> s;
    p--;
    v[p].push_back(s);
  }
  ll w_ans = 0;
  ll a_ans = 0;
  rep(i,n) {
    for(int j = 0; j < v[i].size(); j++){
      if (v[i][j] == "AC") {
        a_ans++;
        break;
      } else {
        w_ans++;
      }
    }
  }
  cout << a_ans << " " << w_ans << endl;
}
