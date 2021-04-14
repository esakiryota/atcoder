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
  set<string> st;
  rep(i,n) {
    string s;
    cin >> s;
    st.insert(s);
  }
  cout << st.size() << endl;
}