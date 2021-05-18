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
  int k;
  cin >> k;
  int se = 7;
  vector<int> md(k);
  int i = 1;
  while(1) {
    int mod = se%k;
    if (mod == 0) {
      cout << i << endl;
      break;
    }
    if (md[mod] == 1) {
      cout << -1 << endl;
      break;
    }
    md[mod]++;
    i++;
    se = mod;
    se *= 10;
    se += 7;
  }
  return 0;
}
