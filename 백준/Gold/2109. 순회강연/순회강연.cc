#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

priority_queue<int, vector<int>, greater<int>> pq;
pair<int, int> problem[200002];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i ++){
    int a, b;
    cin >> a >> b;
    problem[i] = {b, a};
  }
  sort(problem, problem + n);
  
  for (int i = 0; i < n; i++){
    pq.push(problem[i].Y);
    if (pq.size() > problem[i].X){
      pq.pop();
    }
  }

  int ans = 0;
  while(!pq.empty()){
    ans += pq.top();
    pq.pop();
  }
  cout << ans;

}
 