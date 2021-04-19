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

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n) {
    cin >> v[i];
  }
  vector<int> a(n);
  rep(i,n) {
    a[v[i]-1] = i+1;
  }
  rep(i,n) {
    if (i == n-1) {
      cout << a[i] << endl;
      break;
    }
    cout << a[i] << " ";
  }
}
