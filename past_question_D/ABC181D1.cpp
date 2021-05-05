#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;

int keta(int n) {
  int k = 1;
  int r = n/10;
  while(r > 0) {
    k++;
    r /= 10;
  }
  return k;
}

int main() {
  int s;
  cin >> s;
  int ke = keta(s);
  vector<int> v(9);
  int d = s;
  while(s > 0) {
    int r = s%10;
    v[r-1]++;
    s /= 10;
  }
  string ans = "No";
  if (ke > 2) {
    rep(i,9) rep(j,9) rep(k,9) {
      v[i]--;
      v[j]--;
      v[k]--;
      if (v[i] < 0 || v[j] < 0 || v[k] < 0) {
        v[i]++;
        v[j]++;
        v[k]++;
        continue;
      }
      int sum = (i+1)*100 + (j+1)*10 + k+1;
      v[i]++;
      v[j]++;
      v[k]++;
      if (sum%8 == 0) {
        ans = "Yes";
        break;
      }
    }
  } else if (ke == 2){
    int r = s%10;
    int d = s/10;
    int ano = r*10 + d;
    if (ano%8 == 0 || s%8 == 0) {
      ans = "Yes";
    }
  } else {
    if (d%8 == 0) ans = "Yes";
  }
  
  cout << ans << endl;
}