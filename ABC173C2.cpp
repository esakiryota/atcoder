#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<char> > v(h, vector<char>(w));
  // char m[10][10];
  for(int i = 0; h > i; i++){
    for(int j = 0; w > j; j++){
      cin>>v[i][j];
    }
  }
  int num = 0;
  for (int m = 0; m<(1<<h); m++) {
    for (int l = 0; l<(1<<w); l++) {
      int sum = 0;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if (v[i][j] == '#' && (m & (1<<i)) && (l & (1<<j))) {
            sum++;
          }
        }
      }
      if (sum == k) {
        num++;
      }
    }
  }
  cout << num << endl;
}
