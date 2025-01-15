#include <bits/stdc++.h>
using namespace std;

int d0[42];
int d1[42];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  d0[0] = 1;
  d1[0] = 0;
  d0[1] = 0;
  d1[1] = 1;

  for (int i = 2; i <= 40; i++){
    d0[i] = d0[i-1] + d0[i-2];
    d1[i] = d1[i-1] + d1[i-2];
  }

  while (t--){
    int k;
    cin >> k;
    cout << d0[k] << ' ' << d1[k] << '\n';
  }

}