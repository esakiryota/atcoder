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
  int h, w;
  cin >> h >> w;
  vector<string> v(h);
  rep(i,h) {
    string s;
    cin >> s;
    v[i] = s;
  }
  int t = 0;
  int a = 0;
  rep(i,h) {
    rep(j,v.size()) {
      if (i == 0 && j == 0) continue;
      if ((i+j)%2 == 1) {
        if(v[i][j] == '-') t--;
        if(v[i][j] == '+') t++;
      }
      if ((i+j)%2 == 0) {
        if(v[i][j] == '-') a--;
        if(v[i][j] == '+') a++;
      }
    }
  }
  if (t > a) cout << "Takahashi" << endl;
  if (t < a) cout << "Aoki" << endl;
  if (t == a) cout << "Draw" << endl;
  return 0;
}
