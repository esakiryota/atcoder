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
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(), v.end());
  if (v[1]-v[0] == v[2]-v[1]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
