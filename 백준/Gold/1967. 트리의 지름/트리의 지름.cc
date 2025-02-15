#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int mx;
int mxnode;

const int MXN = 10005;
vector<pair<int, int>> adj[MXN];
int p[MXN];

void dfs(int cur, int dist) {
  if (dist > mx) {
    mx = dist;
    mxnode = cur;
  }

  for (pair<int,int> nxt : adj[cur]) {
    if (p[cur] == nxt.X) continue;
    p[nxt.X] = cur;
    dfs(nxt.X, dist + nxt.Y);
  }
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N,u, v, d;
  cin >> N;
  for (int i = 0; i < N - 1; i++){
    cin >> u >> v >> d;
    adj[u].push_back({v, d});
    adj[v].push_back({u, d});
  }
  dfs(1, 0);
  fill(p, p + MXN, 0);
  dfs(mxnode, 0);
  cout << mx;
}
