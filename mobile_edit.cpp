#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;

bool check(vector<int> a, int x) {
	bool judge = true;
	for (int p = 0; p < a.size(); p++){
		if (a[p] < x) {
			judge = false;
		}
	}
	return judge;
}


int main(){
	int n, m, x;
	cin >> n >> m >> x;  vector<vector<int>> v(m,vector<int>(x));
	vector<int>c(m);
	for (int i = 0; i < m; i++) {
		cin>>c[i];
		for (int j=0; j < x; i
		j++) {
			cin>>v[i][j];
		}
	}


int ans = 0;

for (int i = 0; i<(1<<m); i++){
	vector<int> sum(n);
	int sum_c = 0;
	for (int j=0; j < m; j++) {
		if (i & (1<<j)){
			for (int k=0; k < n; k++) {
				sum[k] += v[j][k];
				sum_c += c[k];
			}
		}
	}
	if (check(sum, x)) {
		ans = min(ans, sum_c);
	}
}

cout << ans << endl;


}
	