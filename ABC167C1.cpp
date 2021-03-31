#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;

bool check(vector<int> a, int x) {
	bool judge = true;
	for (int p = 0; p < a.size(); p++){
		if (a[p] < x) {
			// cout << a[p] << endl;
			judge = false;
		}
	}
	return judge;
}


int main(){
	int n, m, x;
	cin >> n >> m >> x;
  vector<vector<int> > v(n,vector<int>(m));
	vector<int>c(m);
	for (int i = 0; i < n; i++) {
		cin>>c[i];
		for (int j=0; j < m; j++) {
			cin>>v[i][j];
		}
	}


int ans = 1000000007;

for (int i = 0; i<(1<<n); i++){
	vector<int> sum(n);
	int sum_c = 0;
	for (int k=0; k < m; k++) {
	for (int j=0; j < n; j++) {
		if (i & (1<<j)){
				sum[k] += v[k][j];
				sum_c += c[j];
			}
		}
	}
	for (int f = 0; f < sum.size(); f++) cout << sum[f] << endl;
	if (check(sum, x)) {
		ans = min(ans, sum_c);
	}
}
cout << ans << endl;
}
