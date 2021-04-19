#include<iostream>
#include <stdio.h>
#include <sstream>
#include <stdint.h>
#include <inttypes.h>
using namespace std;
int M[3];
int64_t N;
int res;

int main() {
  scanf("%" SCNd64, &N);
  while (N) {
    M[N % 10 % 3]++;
    N /= 10;
  }
  int k = M[0] + M[1] + M[2];
  int cur = (M[1] + 2*M[2])%3;
  if (cur == 1) {
    if (M[1]) {
      if ( k == 1 ) {
        res = -1;
      } else {
        res = 1;
      }
    }
  } else if (cur == 2) {
    if (M[2]) {
      if ( k == 1 ) res = -1;
      else res = 1;
    } else {
      if (k == 2) res = -1;
      else res = 2;
    }
  } else {
    res = 0;
  }
  printf("%d\n", res);
  return 0;
}
