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
//forループを二個使わない。見つけるまでノートで計算する。

int main() {
  int a, b;
  cin >> a >> b;
  int d = b-a;
  int ans;
  int num = 0;
  bool ok = false;
  for(int i = d; i > 0; i--) {
    for (int j = 0; j <= d-i; j++) {
      int x = a+j+i;
      int y = a+j;
      if (x%i == 0 && y%i == 0) {
        ans = i;
        ok = true;
        break;
      }
    }
    if (ok){
      break;
    }
  }
  cout << ans << endl;
}
