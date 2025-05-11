#include <bits/stdc++.h>
using namespace std;

int N, k;
int a[15];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans = 0;
  cin >> N >> k;
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = N-1; i >=0; i--){
    ans += k / a[i];
    k = k % a[i];
  }
  cout << ans;
}