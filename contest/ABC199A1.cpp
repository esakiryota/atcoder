#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a*a + b*b < c*c) cout << "Yes" << endl;
  else cout << "No" << endl;
}
