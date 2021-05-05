#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> v(100001);
  rep(i,n) {
    int a;
    cin >> a;
    v[a] += 1;
  }
  ll sum = 0;
  rep(i,100001) {
    sum += v[i]*i;
  }
  int q;
  cin >> q;
  rep(i,q) {
    int b,c;
    cin >> b >> c;
    int x = v[b];
    v[b] = 0;
    v[c] += x;
    sum += (c-b)*x;
    cout << sum << endl;
  }
  return 0;
}
