#include <bits/stdc++.h>
using namespace std;

int a[100005];
int d[100005];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  
  for (int i = 1; i <= n; i ++){
    d[i] = max(d[i-1], 0) + a[i];
  }
  cout << *max_element(d + 1, d + n + 1);
}