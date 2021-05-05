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
//オーバーフローチェックを欠かさない

int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  ll sum = 0;
  while(1) {
    //オーバーフローチェック
    if (y/a < x) break;
    if (a*x >= y) break;
    //普通のチェック
    if (a*x >= x+b) break;
    sum++;
    x *= a;
  }
  sum += (y-1-x)/b
  cout << sum << endl;
}
