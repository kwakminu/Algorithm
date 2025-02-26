#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
int d[105][105];
int item[105];
int n, m, board;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> board >> m; // board : 수색범위 

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <=n; j++)
      d[i][j] = INF;
  }

  for (int i = 1; i <= n; i++){
    cin >> item[i];
  }

  while(m--){
    int a, b, c;
    cin >> a >> b >> c;
    d[a][b] = min(d[a][b], c);
    d[b][a] = min(d[b][a], c);
  }

  for (int i = 1; i <=n; i ++) d[i][i] = 0;
  for (int k = 1; k <= n ; k ++)
    for (int i = 1; i <= n ; i++)
      for (int j = 1; j <=n; j++)
        if (d[i][k] + d[k][j] < d[i][j]) {
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
  
  int mx = 0;
  for (int i = 1; i <= n ; i++){
    int sum = 0;
    for (int j = 1; j <=n; j ++) {
      if (d[i][j] <= board) sum += item[j];
    }
    mx = max(sum, mx);
  }
  cout << mx;
}
