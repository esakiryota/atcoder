#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int n;
  cin >> n;
  string a = s;
  string d = s;
  reverse(d.begin(), d.end());;
  rep(i,n) {
    int q;
    cin >> q;
    if (q == 1) {
      a.swap(d);
    } else {
      int f;
      char c;
      cin >> f >> c;
      if (f == 1) {
        a.insert(a.begin(), c);
        d.push_back(c);
      } else {
        d.insert(d.begin(), c);
        a.push_back(c);
      }
    }
  }
  cout << a << endl;
}
