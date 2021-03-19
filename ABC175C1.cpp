#include <stdio.h>
#include<iostream>
#include <vector>
typedef long long ll;
using namespace std;

ll myabs(ll n) {
  if (n < 0) {
    return n*(-1);
  }
  return n;
}

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  ll absx = myabs(x);
  ll ama = absx%d;
  ll max = absx/d;
  if ( max < k) {
    if (ama > d/2) {
      cout <<  d-ama << endl;
    } else {
      cout << ama << endl;
    }
  } else {
      cout << absx - k*d << endl;
  }
}
