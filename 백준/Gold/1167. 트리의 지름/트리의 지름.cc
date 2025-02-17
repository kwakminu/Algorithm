#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

vector<pair<int, int>> adj[100005]; // 만나는 정점, 거리
bool vis[100005];
int mx, mxadj;
void dfs(int cur, int cost) {
  if (mx < cost) {
    mxadj = cur;
    mx = cost;
  }
  for (auto[nxt, nxtCost] : adj[cur]) {
    if (vis[nxt]) continue;
    vis[nxt] = true;
    dfs(nxt, cost + nxtCost);
  }
}


int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--){
    int v;
    cin >> v;
    while (true) {
      int u, d;
      cin >> u;
      if (u == -1) break;
      cin >> d;
      adj[v].push_back({u, d});
    }
  }
  vis[1] = true;
  dfs(1, 0);
  fill(vis, vis + 100005, false);
  vis[mxadj] = true;
  dfs(mxadj, 0);
  cout << mx;


}
