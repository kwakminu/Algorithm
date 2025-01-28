#include <bits/stdc++.h>
using namespace std;

int m, n;
int a[100005];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i ++) cin >> a[i];
  sort(a, a + n);
  int en = 0;
  int mn = 0x7fffffff;
  for (int st = 0; st < n; st++){
    while (en < n && a[en] - a[st] < m) en++;
    if (en == n) break;
    mn = min(mn, a[en] - a[st]);
  }
  cout << mn;
}