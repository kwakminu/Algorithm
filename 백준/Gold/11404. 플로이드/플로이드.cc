#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
int d[105][105];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <=n; i ++)
    fill(d[i], d[i]+1+n, INF);
  while (m--) {
    int a, b, cost;
    cin >> a >> b >> cost;
    d[a][b] = min(d[a][b], cost);
  }
  for (int i = 1; i <=n; i++) d[i][i] = 0;
  
  for (int i = 1; i <= n; i ++) {
    for (int j = 1; j <= n; j ++) {
      for (int k = 1; k <=n; k++) {
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);     
      }
    }
  }
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if(d[i][j] == INF) cout << "0 ";
      else cout << d[i][j] << ' ';
    }
    cout << '\n';
  }
}

