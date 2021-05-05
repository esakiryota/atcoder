#include <stdio.h>
#include<iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;
typedef long long ll;
typedef pair<int, int> P;

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  int ans = 0;
  rep(i,h) {
    rep(j,w) {
      if (s[i][j] == '#') continue;
      vector<vector<int> > dist(h,vector<int>(w,INF));
      deque<P> q;
      dist[i][j] = 0;
      q.emplace_back(i,j);
      while(!q.empty()) {
        int k = q.front().first;
        int l = q.front().second;
        q.pop_front();
        int d = dist[k][l];
        rep(v,4) {
          int ni = k+di[v];
          int nj = l+dj[v];
          if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
          if (s[ni][nj] == '#') continue;
          if (dist[ni][nj] <= d+1) continue;
          dist[ni][nj] = d+1;
          q.emplace_front(ni,nj);
        }
      }
      rep(a,h) rep(b,w) {
        if (dist[a][b] == INF) continue;
        ans = max(ans, dist[a][b]);
      }
    }
  }
  cout << ans << endl;
}
