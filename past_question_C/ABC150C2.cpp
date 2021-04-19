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
// 順列はnext_permutationで行う。わからないアルゴリズムがあれば検索する。

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n) cin >> v[i];
    do{
        for(int i=0; i<4; i++){
            cout<<v[i];
            if(i!=3)cout<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));
  cout << ans << endl;
  return 0;
}
