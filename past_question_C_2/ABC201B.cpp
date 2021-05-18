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
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  ll n, k;
  cin >> n >> k;

  ll a = 200;
  ll b = 1000;
  rep(i,k) {
    if (n%a == 0) {
      n /= a;
    } else {
      n *= b;
      n += a;
    }
  }

  cout << n << endl;
  return 0;
}
