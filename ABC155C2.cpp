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

 //一つの方法に打ち込みすぎる。ノートを絶対に使う。脳内でシュミレーションする

int main(){
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i,n) {
    string s;
    cin >> s;
    mp[s]++;
  }
  int mx = 0;
  for (auto p : mp) mx = max(mx, p.second);
  for (auto p : mp) {
    if (p.second != mx) continue;
    cout << p.first << endl;
  }
}
