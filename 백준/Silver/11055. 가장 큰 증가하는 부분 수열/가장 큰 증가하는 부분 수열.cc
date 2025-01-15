#include <bits/stdc++.h>
using namespace std;

int a[1005];
int d[1005];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    d[i] = a[i];
  }
  d[1] = a[1];
  for (int i = 2; i <=n; i++){
    for (int j = i - 1; j >= 1; j--){
      if (a[j] < a[i]) d[i] = max(d[i], d[j] + a[i]);
    }
  }
  cout << *max_element(d + 1, d + n + 1);
  
}