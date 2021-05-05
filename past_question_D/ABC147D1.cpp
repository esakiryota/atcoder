#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <bitset>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

// auto mod int
// https://youtu.be/L8grWxBlIZ4?t=9858
// https://youtu.be/ERZuLAxZffQ?t=4807 : optimize
// https://youtu.be/8uowVvQ_-Mo?t=1329 : division
//1時間くらいかかったけど溶けた
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

int main() {
  ll n;
  cin >> n;
  vector<ll> num(n);
  rep(i,n) cin >> num[i];
  vector<ll> cnt(65);
  vector<string> bit(n);
  rep(i,n) {
     bitset<64> bs(num[i]);
     bit[i] = bs.to_string();
  }

  rep(i,64) {
    ll c0 = 0;
    ll c1 = 0;
    ll l = 0;
    rep(j,n) {
      if (bit[j][i] == '1') c1++;
      if (bit[j][i] == '0') c0++;
    }
    l = n*(n-1) - c1*(c1-1) - c0*(c0-1);
    l /= 2;
    cnt[i] = l;
  }


  mint s = 1;
  mint ans = 0;

  for (int i = 63; i >= 0; i--) {
    ans += s*cnt[i];
    s *= 2;
  }

  cout << ans << endl;

}
