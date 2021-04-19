#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  int k,n;
  cin >> k >> n;
  vector<int> v(n);
  rep(i,n) cin >> v[i];
  vector<int> l(n);
  rep(i,n-1) l[i] = v[i+1] - v[i];
  l[n-1] = k-v[n-1]+v[0];
  int m = 0;
  int sum = 0;
  rep(i,n+1) {
    m = max(m, l[i]);
    sum += l[i];
  } 
  int ans = sum - m;
  cout << ans << endl;
}