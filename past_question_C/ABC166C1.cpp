#include <stdio.h>
#include<iostream>
#include <vector>
#include <map>
using namespace std;
const int INF = 1001001001;
//あまりmapとかは使わない方が良い

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> high;
  for(int i = 0; i < n; i++){
    int h;
    cin >> h;
    high[i+1] = h;
  }
  vector<vector<int> > v(m, vector<int>(2));
  for (int i = 0; i < m; i++) {
    cin >> v[i][0] >> v[i][1];
  }

  for (int i = 0; i < m; i++) {
    if (high[v[i][0]] >= high[v[i][1]]) high.erase(v[i][1]);
    if (high[v[i][0]] <= high[v[i][1]]) high.erase(v[i][0]);
  }
  cout << high.size() << endl;
}
