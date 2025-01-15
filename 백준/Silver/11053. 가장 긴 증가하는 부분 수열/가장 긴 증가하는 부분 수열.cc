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
    d[i] = 1;
  }
  d[1] = 1;
  for (int i = 2; i <= n; i++){
    for (int j = 1; j <= i - 1; j++){
      if (a[j] < a[i]) d[i] = max(d[j] + 1, d[i]);
    }
  }
  
  cout << *max_element(d + 1, d + n + 1);
  
}