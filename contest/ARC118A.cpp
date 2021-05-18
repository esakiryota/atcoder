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

int main() {
  ll t, n;
  cin >> t >> n;
  ll a = 0;
  ll n1 = n*100;
  if (n1%t == 0) {
    a = n1/t;
  } else {
    a = n1/t + 1;
  }
  ll ans = a + n - 1;
  cout << ans << endl;
 }
