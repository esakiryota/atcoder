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
  ll ans = floor(a*b);
  cout << ans << endl;
}
