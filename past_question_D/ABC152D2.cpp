#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

P f(int x) {
  int a = x%10;
  int b = 0;
  while(x) {
    b = x;
    x /= 10;
  }
  return P(a,b);
}

int main() {
  int n;
  cin >> n;
  map<P,int> freq;
  for (int i = 1; i <= n; ++i) {
    P p = f(i);
    freq[p]++;
  }

  ll ans = 0;
  for (int i = 1; i <= n; ++i) {
    P p = f(i);
    P q(p.second, p.first);
    ans += freq[q];
  }

  cout << ans << endl;
}
