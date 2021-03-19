#include <stdio.h>
#include<iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
//ACだったがもう少し上手いやり方をC2にかく

bool forbidden(vector<int> v, int x) {
  bool judge = true;
  for (int i = 0; i < v.size(); i++) {
    if (x == v[i]) {
      judge = false;
      break;
    }
  }
  return judge;
}

int main() {
  int x, n;
  cin >> x >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) cin >> nums[i];

  int j = 0;
  int ans = x;
  while(j >= 0) {
    int a = x - j;
    int b = x + j;
    if (forbidden(nums, a)) {
      ans = a;
      break;
    }
    if (forbidden(nums, b)) {
      ans = b;
      break;
    }
    j++;
  }

  cout << ans << endl;
  return 0;
}
