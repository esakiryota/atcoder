#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size()-3; i++) {
    string str = s.substr(i, 4);
    if (str == "ZONe") {
      ans++;
    }
  }
  cout << ans << endl;
}
