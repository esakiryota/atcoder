#include <stdio.h>
#include<iostream>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

int main() {
  int n;
  cin >> n;
  int M[n];
  for (int i = 0; i < n; i++) cin >> M[i];
  ll sum = 0;

  for (int i=n; i--;) {
    for (int j=i; j--;) {
      ll a = M[i];
      ll b = M[j];
      sum += (a*b)%mod;
    }
  }

  sum %= mod;
  sum=(sum+mod)%mod;

  cout << sum << endl;
}
