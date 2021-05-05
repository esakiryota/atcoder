#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define PI 3.14159265358979323846264338327950;
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pl;

int main() {
  ll n;
  cin >> n;
  if (n%2 == 1) {
    ll d = (n-1)/2;
    ll ans = d*n;
    cout << ans << endl;
    return 0;
  } else {
    ll d = n/2 - 1;
    ll ans = (d*n) + (n/2);
    cout << ans << endl;
    return 0;
  }
}
