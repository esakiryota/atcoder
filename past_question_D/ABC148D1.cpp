#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n) cin >> v[i];
  int j = 1;
  int sum = 0;
  rep(i,n) {
    if (v[i] == j) {
      j++;
    }
  }
  int ans = n-j+1;

  if (ans == n) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
