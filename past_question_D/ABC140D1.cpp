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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int score = 0;
  rep(i,n) {
    if (s[i] == s[i-1]) score++;
  }

  int ans = min(score+2*k, n-1);
  cout << ans << endl;
  return 0;
}
