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

int n, k;
ll sum = 0;

ll dfs(vector<int> A, int x, int y) {
  y += x;
  if (y > n) return sum;
  if (y == n) {
    sum++;
    return sum;
  }
  rep(i,A.size()) {
    dfs(A,A[i],y);
  }

  return sum;
}

int main() {
  cin >> n >> k;
  vector<int> v;
  rep(i,k) {
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
      v.push_back(i);
    }
  }

  dfs(v, 0, 1);
  ll ans = sum%998244353;
  cout << sum << endl;
  return 0;
}
