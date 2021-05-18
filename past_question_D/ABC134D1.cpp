#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  int n;
  cin >> n;
  vector<int> an(n+1);
  vector<int> bn(n+1);
  rep(i,n) {
    cin >> an[i+1];
  }

  for (int i = n; i >= 1; i--) {
    int x = 0;
    for (int j = i+i; j < n+1; j += i) {
       x += an[j];
    }
    if (x%2 == 1) {
      if (an[i] == 1) bn[i] = 0;
      else bn[i] = 1;
    } else {
      if (an[i] == 1) bn[i] = 1;
      else bn[i] = 0;
    }
  }

  int ans = 0;
  rep(i,n+1) ans += bn[i];
  cout << ans << endl;
  rep(i,n+1) {
    if (bn[i] == 1) {
      if (i == n) {
        cout << i << endl;
        break;
      }
      cout << i << " ";
    }
  }
  return 0;
}
