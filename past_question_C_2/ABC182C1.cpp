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
  ll n;
  cin >> n;
  vector<int> v;
  vector<bool> ok(3, false);
  int ori = n;
  int modsum = 0;
  int k = 0;
  while(n > 0) {
    int r = n%10;
    int a = r%3;
    ok[a] = true;
    modsum += a;
    modsum = modsum%3;
    v.push_back(a);
    k++;
    n /= 10;
  }
  if (k == 2) {
    if (ori%3 == 0) {
      cout << 0 << endl;
    } else {
      if (ok[0]) {
        cout << 1 << endl;
      } else {
        cout << -1 << endl;
      }
    }
    return 0;
  }
  if (k == 1) {
    if (ori%3 == 0) {
      cout << 0 << endl;
    } else {
      cout << -1 << endl;
    }
    return 0;
  }

  if (modsum == 0) {
    cout << 0 << endl;
  } else if (modsum == 1) {
    if (ok[1]) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    if (ok[2]) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  }

  return 0;
}
