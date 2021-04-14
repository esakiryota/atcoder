#include <stdio.h>
#include<iostream>
#include <vector>
#include <map>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<string> v;
  rep(i,n) {
    string str;
    bool ok = true;
    cin >> str;
    rep(i,v.size()) {
      if (v[i] == str) ok = false;
    } 
    if (ok) v.push_back(str);
  }
  
  cout << v.size() << endl;
}