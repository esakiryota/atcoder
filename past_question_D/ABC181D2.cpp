#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

//分ぷで比較する
//|S|はSの長さ。intにしたら大きすぎてしまう。

bool solve(string s) {
  if (s.size() == 1) {
    return s == "8";
  }
  if (s.size() == 2) {
    if (stoi(s)%8 == 0) return true;
    swap(s[0], s[1]);
    if (stoi(s)%8 == 0) return true;
    return false;
  }
  vector<int> cnt(10);
  for (char c : s) cnt[c-'0']++;
  for (int i = 0; i < 1000; i+=8) {
    int x = i;
    vector<int> nc(10);
    rep(j,3) {
      nc[x%10]++;
      x /= 10;
    }
    bool ok = true;
    rep(j,10) if (nc[j] > cnt[j]) ok = false;
    if (ok) return true;
  }
  return false;
}

int main() {
 string s;
 cin >> s;
 if (solve(s)) cout << "Yes" << endl;
 else cout << "No" << endl;
}
