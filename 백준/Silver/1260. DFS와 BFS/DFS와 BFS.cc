#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];
bool vis2[1005]; // bfs를 위한 vis

void dfs(int cur){
  vis[cur] = true;
  cout << cur << ' ';
  for (auto nxt : adj[cur]){
    if (vis[nxt] == true) continue;
    dfs(nxt); 
  }
}

void bfs(int cur) {
  queue<int> q;
    q.push(cur);
    vis2[cur] = true;
    while(!q.empty()){
      int cur = q.front();
      q.pop();
      cout << cur << ' ';
      for (auto nxt : adj[cur]){
        if (vis2[nxt]) continue;
        q.push(nxt);
        vis2[nxt] = true;
      }
    }
}


int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m, v;
  cin >> n >> m >> v;
  while (m--) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for (int i = 1 ; i <=n; i++){
    sort(adj[i].begin(), adj[i].end());
  }
  dfs(v);
  cout << '\n';
  bfs(v);
  

}
 