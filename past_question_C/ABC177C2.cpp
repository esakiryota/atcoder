#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<ll> B(n+1, 0);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
    B[i + 1] = B[i] + A[i];
  }

  ll  ans = 0;

  for (int i = 0; i < n; i++) {
    ll sum = (B[n] - B[i+1])%mod;
    ans += A[i] * sum;
    ans%=mod;
  }

  cout << ans << endl;
}
