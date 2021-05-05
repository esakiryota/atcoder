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
// 大きくなりそうと感じたらすぐll使う
int main() {
  int n;
  ll w;
  cin >> n >> w;
  vector<ll> v(200000);
  rep(i,n) {
    int s, t;
    ll p;
    cin >> s >> t >> p;
    v[s] += p;
    v[t] -= p;
  }
  string judge = "Yes";
  ll sum = 0;
  rep(i, 200001) {
    sum += v[i];
    if (sum > w) {
      judge = "No";
      break;
    }
  }
  
  cout << judge << endl;
}