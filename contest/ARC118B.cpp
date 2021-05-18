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
typedef pair<double, int> Pb;

int main() {
  int k, n, m;
  cin >> k >> n >> m;
  vector<int> a(k);
  int sum = 0;
  rep(i,k) {
    cin >> a[i];
  }

  vector<int> vz(k);

  vector<Pb> b;
  rep(i,k) {
    double x = a[i];
    double y = (x*m)/n;
    double z = floor(y);
    int zi = z;
    sum += zi;
    double w = y - z;
    Pb p = make_pair(w,i);
    vz[i] = zi;
    b.push_back(p);
  }

  sort(b.rbegin(), b.rend());
  int i = 0;
  for (int i = 0; i < m-sum; i++) {
    vz[b[i].second]++;
  }

  rep(i,k) {
    if (i == n-1) {
      cout << vz[i] << endl;
      break;
    }
    cout << vz[i] << " ";
  }
}
