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
typedef pair<int, int> P;

int main() {
  string s;
  cin >> s;
  vector<int> o;
  vector<int> f;
  vector<int> x;
  rep(i,10) {
    if (s[i] == 'o') o.push_back(i);
    if (s[i] == '?') f.push_back(i);
    if (s[i] == 'x') x.push_back(i);
  }

  int ans = 0;

  if (o.size() > 4 || x.size() == 10) {
    cout << ans << endl;
    return 0;
  } else if (o.size() == 4) {
    ans = 24;
    cout << ans << endl;
    return 0;
  } else if (o.size() == 3) {
    ans += 36;
    ans += f.size()*24;
    cout << ans << endl;
    return 0;
  } else if (o.size() == 2) {
    ans += 14;
    ans += f.size()*24;
    ans += f.size()*12 + 24*f.size()*(f.size()-1)/2;
    cout << ans << endl;
    return 0;
  } else if (o.size() == 1) {
    ans += 1;
    ans += f.size()*4;
    ans += f.size()*6 + 12*f.size()*(f.size()-1)/2;
    ans += f.size()*4 + 24*f.size()*(f.size()-1)/2 + 24*f.size()*(f.size()-1)*(f.size()-2)/6;
    cout << ans << endl;
    return 0;

  } else if (o.size() == 0)  {
    ans += f.size()*f.size()*f.size()*f.size();
    cout << ans<< endl;
    return 0;
  }
  return 0;
}
