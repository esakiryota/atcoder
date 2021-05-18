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

int main() {
  string s;
  cin >> s;
  vector<int> v(s.size());
  int l = 0, r = 0;
  int lpos;
  rep(i,s.size()) {
    if ((s[i] == 'L' && s[i+1] == 'R') || i == s.size()-1) {
      l++;
      int lpos = i-l+1;
      int mx = max(l, r);
      if (mx%2 == 0) swap(v[lpos], v[lpos-1]);
      if ((l+r)%2 == 0) {
        v[lpos] = (l+r)/2;
        v[lpos-1] = (l+r)/2;
      } else {
        if (l > r) {
          if (l%2 == 1) {
            v[lpos] = (l+r)/2 + 1;
            v[lpos-1] = (l+r)/2;
          } else {
            v[lpos] = (l+r)/2;
            v[lpos-1] = (l+r)/2 + 1;
          }
        } else {
          if (r%2 == 1) {
            v[lpos] = (l+r)/2;
            v[lpos-1] = (l+r)/2 + 1;
          } else {
            v[lpos] = (l+r)/2 + 1;
            v[lpos-1] = (l+r)/2;
          }
        }

      }
      r = 0;
      l = 0;
      continue;
    }
    if (s[i] == 'R') r++;
    else l++;
  }

  rep(i,v.size()) {
    if (i == v.size()-1) {
      cout << v[i] << endl;
      break;
    }
    cout << v[i] << " ";
  }
}
