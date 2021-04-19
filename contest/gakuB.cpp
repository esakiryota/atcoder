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

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> av(1000);
  vector<int> bv(1000);
  rep(i,n){
    int a;
    cin >> a;
    a--;
    av[a] = 1;
  }
  rep(i,m){
    int b;
    cin >> b;
    b--;
    bv[b] = 1;
  }
  vector<int> v;


  for (int i = 0; i < 1000; i++) {
    if (av[i] != bv[i]) {
      v.push_back(i+1);
    }
  }

  rep(i,v.size()){
    if (i == v.size()-1) {
      cout << v[i] << endl;
      break;
    }
    cout << v[i] << " ";
  }
 }
