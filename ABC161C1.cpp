#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  ll r1 = n%k;
  ll r2 = (r1 - k)*(-1);
  
  ll ans = min(r1, r2);
  cout << ans << endl;
}