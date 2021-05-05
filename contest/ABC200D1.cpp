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
  string a = "";
  string d = "";
  bool flag = false;
  dequeue<P>
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'R') {
      a.swap(d);
      continue;
    }
    if (a.empty()) {
      d.push_back(s[i]);
      a.push_back(s[i]);
      continue;
    }
    if (a[a.size()-1] == s[i]) {
      a.erase(a.size()-1);
      d = d.substr(1,d.size()-1);
      continue;
    }
    d.insert(d.begin(), s[i]);
    a.push_back(s[i]);
  }
  cout << a << endl;
}
