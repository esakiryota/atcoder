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
//2分探索はlower bound

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  sort(l.begin(), l.end());
  int ans = 0;
  rep(b,n) rep(a,b) {
    int ab = l[a]+l[b];
    int r = lower_bound(l.begin(), l.end(), ab) - l.begin();
    int v = b+1;
    ans += max(0,r-v);
  }

  cout << ans << endl;
}
