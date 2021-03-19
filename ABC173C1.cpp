#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int> > v(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      string str;
      cin >> str;
      if (str == ".") {
        v[i][j] = 0;
      } else {
        v[i][j] = 1;
      }
    }
  }
  int num = 0;

  for (int n = 0; n < h*w; n++) {
    int sum = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        int syo = n/h;
        int ama = n%h;
        if (i == syo || j == ama) {
          continue;
        }
        sum += v[i][j];
      }
    }
    if (sum == k) {
      num++;
    }

    cout << num << endl;
  }
}
