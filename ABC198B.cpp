#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  int r = n%10;
  vector<int> v;
  while(n > 0) {
    r = n%10;
    if (r == 0 && v.size() == 0) {
      n /= 10;
    } else {
      v.push_back(r);
      n /= 10;
    }
  }
  string ok = "Yes";

  for (int i = 0; i < v.size() / 2; i++) {
    if (v[i] != v[v.size() - i -1]) {
      ok = "No";
      break;
    }
  }
  cout << ok << endl;
}
