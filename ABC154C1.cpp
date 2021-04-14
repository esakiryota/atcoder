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
 int n;
 cin >> n;
 vector<int> v(n);
 rep(i,n) cin >> v[i];
 sort(v.begin(), v.end());
 string ok = "YES";
 for (int i = 1; i < n; i++) {
   if (v[i-1] == v[i]){
     ok = "NO";
     break;
   }
 }
 cout << ok << endl;
}
