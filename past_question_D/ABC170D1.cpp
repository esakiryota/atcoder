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

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n) cin >> v[i];
  vector<int> a(n);
  sort(v.begin(), v.end());
  vector<int> va;
  rep(i,n) {
    if (i == 0){
      va.push_back(v[i]);
      continue;
    }
    if (v[i-1] == v[i]) continue;
    va.push_back(v[i]);
  }
  rep(i,va.size()) {
    for (int j = i+1; j < va.size(); j++) {
      if (va[j]%va[i] == 0) {
        a[j]++;
      }
    }
  }
  int ans = 0;
  rep(i,n) {
    if (a[i] == 0) ans++;
  }

  cout << ans << endl;
}
