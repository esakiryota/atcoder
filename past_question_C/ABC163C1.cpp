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
  vector<int> v(n);
  rep(i,n-1) {
    int a;
    cin >> a;
    v[a-1] += 1;
  }
  rep(i,n) cout << v[i] << endl;
}