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

bool Prime(int num) {
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false;

  double sq = sqrt(num);
  for (int i = 3; i <= sq; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  while(1) {
    if(Prime(n)) {
      cout << n << endl;
      break;
    }
    n++;
  }
  return 0;

}
