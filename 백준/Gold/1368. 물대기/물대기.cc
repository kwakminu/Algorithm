#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int v, e;
vector<pair<int, int>> adj[305]; // 비용, 정점 번호
bool chk[305]; // i번째 정점이 최소 신장 틔에 속해있는가? 
int cnt = 0; //현재 선택된 간선의 수
priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int >>> pq;


int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int cost;
    cin >> cost;
    adj[0].push_back({cost, i});
    adj[i].push_back({cost, 0});
  }
  for (int i = 1; i <= n; i++){
    for (int k = 1; k <= n; k ++) {
      int cost;
      cin >> cost;
      if (i != k) adj[i].push_back({cost, k});
    }
  }
  int ans = 0;
  chk[1] = 1;
  for (auto nxt : adj[1])
    pq.push({nxt.X, 1, nxt.Y});
  while (cnt < n ) {
    int cost, a, b;
    tie(cost, a, b) = pq.top(); pq.pop();
    if(chk[b]) continue;
    ans += cost;
    chk[b] = 1;
    cnt ++;
    for (auto nxt : adj[b]) {
      if(!chk[nxt.Y])
        pq.push({nxt.X, b, nxt.Y});
    }
  }
  cout << ans;
}
