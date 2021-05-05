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
//貪欲方
//現段階のmax
//priority_queue

int main() {
  ll n, m;
  cin >> n >> m;
  priority_queue<int> q;
  rep(i,n) {
    int a;
    cin >> a;
    q.push(a);
  }
  rep(i,m) {
    int a = q.top(); q.pop();
    q.push(a/2);
  }

  ll ans = 0;
  rep(i,n) {
    ans += q.top(); q.pop();
  }
  cout << ans << endl;
  return 0;
}
