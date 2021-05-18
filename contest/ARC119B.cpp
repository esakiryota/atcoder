#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 100100100100100100;

int main() {
  int n;
  string s;
  string t;
  cin >> n >> s >> t;
  vector<P> pvs;
  vector<P> pvt;
  int snum = 0;
  int tnum = 0;
  rep(i,n) {
    if(s[i] == '0') {
      snum++;
      P p = make_pair(i, snum);
      pvs.push_back(p);
    }
    if(t[i] == '0') {
      tnum++;
      P p = make_pair(i, tnum);
      pvt.push_back(p);
    }
  }

  if (pvs.size() != pvt.size()) {
    cout << -1 << endl;
    return 0;
  }

  int num = 0;

  rep(i,pvs.size()) {
    if (pvs[i].first == pvt[i].first && pvs[i].second == pvt[i].second) {
      num++;
    }
  }

  int ans = pvs.size() - num;
  cout << ans << endl;
  return 0;

}
