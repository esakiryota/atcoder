#include <stdio.h>
#include<iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<ll> v(0);
  ll ama = 7%n;
  ll i = 1;
  while(ama != 0) {
    i++;
    ama = (ama*10)%n;
    v.push_back(ama);
    vector<ll>::iterator cIter = find( v.begin(),v.end(),ama);
    if (cIter == v.end()) {
      cout << i << endl;
      break;
    }
  }
  cout << i << endl;
}
