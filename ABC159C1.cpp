#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int main() {
  double l;
  cin >> l;
  double r = l/3.0;
  double ans = r*r*r;
  
  cout<<fixed<<setprecision(21)<<ans<<endl;
  return 0;
}