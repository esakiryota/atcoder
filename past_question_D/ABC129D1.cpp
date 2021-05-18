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
typedef pair<ll, ll> Pl;

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> v(h);
  rep(i,h) {
    cin >> v[i];
  }

  int ans = 0;

  rep(i,h) {
    rep(j,w) {
      int sum = 0;
      if (v[i][j] == "#") continue;
      rep(v, 4) {

      }
    }
  }
}
