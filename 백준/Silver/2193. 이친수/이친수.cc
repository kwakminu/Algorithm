#include <bits/stdc++.h>
using namespace std;

long long d[95][2];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  d[1][1] = 1LL;
  
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++){
    d[i][0] = d[i-1][0] + d[i-1][1];
    d[i][1] = d[i-1][0];
  }
  cout << d[n][0] + d[n][1];
  
}