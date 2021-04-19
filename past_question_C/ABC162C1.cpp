#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int gcd(int a, int b, int c) {
  
  while (b > 0) {
    int r = a%b;
    a = b;
    b = r;
  }
  
  int abr = a;
  
  while (abr > 0) {
    int r = c%abr;
    c = abr;
    abr = r;
  }
  
  return c;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int a, b, c;
  rep(i,n) {
    rep(j,n) {
      rep(k,n) {
        a = i+1;
        b = j+1;
        c = k+1;
        ans += gcd(a, b, c);
      }
    }
  }
  cout << ans << endl;
}