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
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, string> P;

int main() {
  int n;
  cin >> n;
  vector<P> pv(n);
  rep(i,n) {
    string s;
    int t;
    cin >> s >> t;
    P p = make_pair(t, s);
    pv[i] = p;
  }

  sort(pv.rbegin(), pv.rend());
  string ans = pv[1].second;
  cout << ans << endl;
}
