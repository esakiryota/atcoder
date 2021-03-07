#include<iostream>
#include <stdio.h>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  int N, x, y;
  cin >> N;
  vector< vector<int> > vec(N, vector<int>(2));
  string judge = "No";
  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    vec.at(i).at(0) = x;
    vec.at(i).at(1) = y;
  }
  //配列から異なる3つを選ぶ公式
  for (int i = N; i--;) {
    for (int j = i; j--;) {
      for (int k = j; k--;) {
        int x13 = vec.at(i).at(0) - vec.at(k).at(0);
        int x23 = vec.at(j).at(0) - vec.at(k).at(0);
        int y13 = vec.at(i).at(1) - vec.at(k).at(1);
        int y23 = vec.at(j).at(1) - vec.at(k).at(1);
        if (x13 * y23 == x23 * y13) {
          judge = "Yes";
        }
      }
    }
  }
  
  cout << judge << endl;
  
  
}