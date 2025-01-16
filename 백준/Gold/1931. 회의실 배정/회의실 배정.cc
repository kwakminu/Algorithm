#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
pair<int, int> s[100005]; // {끝나는 시간, 시작 시간}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> s[i].second >> s[i].first;
  sort(s, s+n); // 끝나는 시간이 빠른 순으로, 끝나는 시간이 같다면 시작하는 시간이 빠른 순으로 정렬 
  int ans = 0;
  int t = 0;
  for (int i = 0; i < n; i++){
    if (t > s[i].second) continue;
    ans++;
    t = s[i].first;
  }
  cout << ans;
}