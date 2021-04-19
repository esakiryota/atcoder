#include <stdio.h>
#include<iostream>
#include <vector>
typedef long long ll;
using namespace std;

//鳩の巣原理

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1);
  a[1] = 7%n;
  for (int i = 2; i < n+1; i++) a[i] = (a[i-1]*10+7)%n;

  for (int i = 1; i < n+1; i++) {
    if (a[i] == 0) {
      cout << i << endl;
      break;
    }
    if (i == n) {
      cout << -1 << endl;
    }
  }
}
