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
//配列モデルをまずは何個か考えて最もシンプルなアルゴリズムを選択する.

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> ac(n);
  vector<int> pena(n);
  rep(i,m) {
    int p;
    string s;
    cin >> p >> s;
    --p;
    if (ac[p]) continue;
    if (s == "AC") {
      ac[p] = 1;
    } else {
      pena[p]++;
    }
  }
  int AC = 0;
  int PENA = 0;
  rep(i,n) {
    AC += ac[i];
    if (ac[i]) PENA += pena[i];
  }
  printf("%d %d\n",AC, PENA );
  return 0;
}
