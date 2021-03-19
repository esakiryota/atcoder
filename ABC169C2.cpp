#include <stdio.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#include<iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
typedef long long ll;
using P = pair<int, int>;

int main() {
  ll a;
  double b;
  cin >> a >> b;
  //llへのcastは切り捨てなので,切り捨てで壊れないように
  ll ib = b*100+0.5
  ll v = a*ib;
  ll ans = v/100;
  printf("%lld\n", ans);
  return 0;
}
