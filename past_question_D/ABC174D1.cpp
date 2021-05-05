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
  string s;
  cin >> s;
  int r = 0;
  rep(i,n) {
    if (s[i] == 'R') r++;
  }
  int ans = 0;
  rep(i,r) {
    if (s[i] == 'W') ans++;
  }

  cout << ans << endl;
}
