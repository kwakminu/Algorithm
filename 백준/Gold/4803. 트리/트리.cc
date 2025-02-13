#include <bits/stdc++.h>
using namespace std;

vector<int> adj[505];
bool vis[505], isTree;
int tc, trees;
void dfs(int cur, int prev) {
  for (int nxt : adj[cur]) {
    if (nxt == prev)
      continue;
    if (vis[nxt]){
      isTree = false;
      continue;
    }
    vis[nxt] = true;
    dfs(nxt, cur);
  }
}


int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) break;
    for (int i = 1; i <= n; i++){
      adj[i].clear();
    }
    fill(vis, vis + n + 1, false);  // vis 배열 초기화
    
    while(m--){
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    trees = 0;

    for (int i = 1; i <=n; i++){
      if (vis[i]) continue;
      vis[i] = true;
      isTree = true;
      dfs(i, -1);
      trees += isTree;
    }
    cout << "Case " << ++tc << ": ";
    if(!trees)
      cout << "No trees." << '\n';
    else if (trees == 1)
      cout << "There is one tree." << '\n';
    else 
      cout << "A forest of " << trees << " trees." << '\n';
  }


}