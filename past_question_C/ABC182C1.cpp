#include<iostream>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

int solve(int k, string m, int n) {
  int h, t;
  string v, s;
  for (int j = 0; j < m.size(); j++) {
    s = m.substr(j, 1);
    t = stoi(s);
    h += t;
  }
  if (h == 0) return -1;
  if (h%3 == 0) return n ;
  if (k >= m.size()) return -1;
  string l = m ;
  v = m.replace(k, 1, "0");
  int p = solve(k + 1, l, n);
  int q = solve(k + 1, v, n+1);
  if (p == -1 || q == -1) {
    n = max(p, q);
  } else {
    n = min(p, q);
  }
  return n;
}

int main() {
  long long  N;
  string N_str;
  cin >> N;
  N_str = to_string(N);
  cout << solve(0, N_str, 0) << endl;
}
