#include <stdio.h>
#include<iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

ll powmod(ll x, ll y) {
  ll res = 1;
  for (ll i=0; i<y; i++) {
    res=res*x;
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  string word = "zabcdefghijklmnopqrstuvwxy";
  string last_word = "abcdefghijklmnopqrstuvwxyz";

  ll jo = 26;
  ll m = 0;
  while(n > powmod(jo, m)*jo) {
    m++;
  }
  string name = "";
  for (ll i = m; i > 0; i--) {
    ll syo = n/powmod(jo, i);
    syo--;
    char part = word.at(syo);
    name += part;
    n = n%powmod(jo, i);
  }
  char part = last_word.at(n-1);
  name += part;

  cout << name << endl;
}
