#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
//2こう定理わかった
//union findというのはわかった
//計算量を短くする方法がわからなかった

// auto mod int
// https://youtu.be/L8grWxBlIZ4?t=9858
// https://youtu.be/ERZuLAxZffQ?t=4807 : optimize
// https://youtu.be/8uowVvQ_-Mo?t=1329 : division
const int mod = 1000000007;
// const int mod = 998244353;
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

mint f(int n) {
  if (n == 0) return 1;
  mint x = f(n/2);
  x *= x;
  if (n%2 == 1) x *= 2;
  return x;
}

mint choose(int n, int a) {
  mint x = 1, y = 1;
  rep(i,a) {
    x *= n-i;
    y *= i+1;
  }
  return x / y;
}


int main() {
  int n, a, b;
  cin >> n >> a >> b;
  mint ans = f(n);
  ans -= 1;
  ans -= choose(n,a);
  ans -= choose(n,b);
  cout << ans << endl;
}
