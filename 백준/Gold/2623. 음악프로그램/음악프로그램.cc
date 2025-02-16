#include <bits/stdc++.h>
using namespace std;

vector<int> adj[32005];
int deg[32005];
int arr[105];

queue<int> q;
vector<int> result;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  while (m--){
    int p;
    cin >> p;
    for (int i = 0; i < p; i ++){
      cin >> arr[i];
    }
    for (int i = 0; i < p-1; i++){
      adj[arr[i]].push_back(arr[i+1]);
      deg[arr[i+1]]++;
    }
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
    cout << "0";
  else {
    for (auto x : result) cout << x << '\n';
  }

}
