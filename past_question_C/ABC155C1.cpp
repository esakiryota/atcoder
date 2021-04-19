#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;


int main() {
  int n;
  cin >> n;
  vector<string> v(n);
  rep(i,n) cin >> v[i];
  sort(v.begin(), v.end());
  string str = v[0];
  vector<vector<string> > data(n+1);
  int num = 1;
  int max_num = 0;
  for (int i = 1; i < n; i++) {
    if (i == n-1) {
      if (str == v[i]) n += 1;
      data[num].push_back(v[i]);
      max_num = max(max_num, num);
    }
    if (str == v[i]) {
      num += 1;
    } else {
      data[num].push_back(str);
      str = v[i];
      max_num = max(max_num, num);
      num = 1;
    }
  }
  rep(i,data[max_num].size()) cout << data[max_num][i] << endl;
}
