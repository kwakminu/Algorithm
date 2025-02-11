#include <bits/stdc++.h>
using namespace std;

vector<int> adj[105];
bool vis2[105]; // bfs를 위한 vis
int cnt;


void bfs(int cur) {
  queue<int> q;
  q.push(cur);
  vis2[cur] = true;
  while(!q.empty()){
    int cur = q.front();
    q.pop();
    cnt++;
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
  int n, m;
  cin >> n >> m;
  while (m--) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(1);
  cout << cnt - 1;
}
 