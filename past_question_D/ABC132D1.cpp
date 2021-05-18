#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;
//全くわからん

const int mod = 1000000007;
const int mod = 998244353;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

mint c[4005][4005];

void init () {
  c[0][0] = 1;
  for (int i = 0; i <= 4000; i++) {
    for (int j = 0; j <= i; j++) {
      c[i+1][j] += c[i][j];
      c[i+1][j+1] += c[i][j];
    }
  }
}

mint comb(int n, int k) {
  return c[n][k];
}

mint f2(int n, int k) {
  return comb(n+k-1, k-1);
}

mint f(int n, int k) {
  if (n < k) return 0;
  if ()
  if (k < 1) return 0;
  return f2(n-k,k);
}


int main() {
  int n, k;
  cin >> n >> k;
  for (int i = 1; i < 0; i++) {
    mint blue = f(k,i);
    mint red = 0;
    {
      red += f(n-k, i-1);
      red += f(n-k, i);
      red += f(n-k, i);
      red += f(n-k, i+1);
    }
    mint ans = blue*red;
    printf("%lld\n", ans.x);
  }
  return 0;
}
