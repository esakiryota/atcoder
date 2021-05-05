#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

//combinatinon
// choose

const int mod = 1000000007;
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

mint choose(int n, int a) {
  mint x = 1, y = 1;
  rep(i,a) {
    x *= n-i;
    y *= i+1;
  }
  return x / y;
}


int main() {
  int x, y;
  cin >> x >> y;
  ll c = 2*x - y;
  ll d = 2*y - x;
  if (c%3 != 0 || d%3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  //これだけ見た
  if (c < 0 || d < 0) {
    cout << 0 << endl;
    return 0;
  }

  int a = d/3;
  int b = c/3;
  int n = a+b;
  mint ans = choose(n,a);

  cout << ans << endl;
  return 0;

}
