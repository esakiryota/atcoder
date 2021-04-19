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

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  rep(i,s.size()) {
    if (i == 0) {
      ans++;
      continue;
    }
    if (s[i-1] == s[i]) {
      continue;
    }
    ans++;
  }

  cout << ans << endl;

}
