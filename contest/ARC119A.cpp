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
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 100100100100100100;

int main() {
  ll n;
  cin >> n;
  ll a, b, c;
  b = 0;
  ll d = 1;
  ll ans = INF;
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
  while(1) {
    d *= 2;
    a = n/d;
    c = n - d*a;
    b++;
    if(d > n) {
      break;
    }
    ans = min(ans, a+b+c);
  }
  cout << ans << endl;
  return 0;
}
