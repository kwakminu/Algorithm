#include <bits/stdc++.h>
using namespace std;

vector<int> adj[32005];
int deg[32005];

queue<int> q;
vector<int> result;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  while (m--){
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    deg[v]++;
  }
  for (int i = 1; i <= n; i++){
    if (deg[i] == 0) q.push(i);
  }
  while(!q.empty()) {
    int cur = q.front();
    q.pop();
    result.push_back(cur);
    for (int nxt : adj[cur]) {
      deg[nxt]--;
      if(deg[nxt] == 0) q.push(nxt);
    }
  }
  if (result.size() != n)
    cout << "cycle exists";
  else {
    for (auto x : result) cout << x << ' ';
  }

}
