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
//審議不明なことをいうので違う
//問題文ちゃんとよもう。

bool check(vector<int> A, vector<vector<int> > xv, vector<vector<int> > yv) {
  bool judge = true;
  rep(p,xv.size()) {
    rep(q,xv[p].size()) {
      if (A[xv[p][q]] != yv[p][q] && A[p] == 1) {
        judge = false;
        break;
      }
    }
  }
  return judge;
}


int main() {
  int n;
  cin >> n;
  vector<vector<int> > xv(n);
  vector<vector<int> > yv(n);
  rep(i,n) {
    int a;
    cin >> a;
    vector<int> xv1(a);
    vector<int> yv1(a);
    rep(j,a){
      int x, y;
      cin >> x >> y;
      x--;
      xv1[j] = x;
      yv1[j] = y;
    }
    xv[i] = xv1;
    yv[i] = yv1;
  }
  int ans = 0;
  for (int i = 0; i < (1<<n); i++) {
    vector<int> v(n);
    int sum = 0;
    for (int j=0; j < n; j++) {
  		if (i & (1<<j)){
        v[j] = 1;
  		} else {
        v[j] = 0;
      }
  	}
    if (check(v, xv, yv)) {
      rep(k,n) sum += v[k];
      ans = max(ans, sum);
    }
  }
  cout << ans << endl;
}
