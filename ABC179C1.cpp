#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
  long N;
  cin >> N;
  int cnt = 0;
  for(int i = 1; i<=N; i++) {
    cnt += (N-1)/i;
  }

  cout << cnt << endl;
}
