#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
const int INF = 1001001001;
//m, nややこしいからきちんと手計算であっているか確認！
int v[12][12];

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	vector<int>c(n);
	for (int i = 0; i < n; i++) {
		cin>>c[i];
		for (int j=0; j < m; j++) {
			cin>>v[i][j];
		}
	}


int ans = INF;

for (int i = 0; i<(1<<n); i++){
	vector<int> sum(m);
	int sum_c = 0;
	for (int j=0; j < n; j++) {
		if (i & (1<<j)){
			sum_c += c[j];
			for (int k=0; k < m; k++) {
				sum[k] += v[j][k];
			}
		}
	}
	bool judge = true;
	for (int p = 0; p < m; p++){
		if (sum[p] < x) {
			judge = false;
		}
	}
	if(judge) ans = min(ans, sum_c);
}
if (ans == INF) cout << -1 << endl;
else cout << ans << endl;
return 0;
}
