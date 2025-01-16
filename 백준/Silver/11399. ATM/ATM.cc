#include <bits/stdc++.h>
using namespace std;

int p[1005];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >>n;
  for (int i = 0; i < n; i++) cin >> p[i];
  sort(p, p + n);
  int ans= 0;
  for (int i = n; i >0; i--){
    ans += p[n-i]*i;
  }
  cout << ans;
}