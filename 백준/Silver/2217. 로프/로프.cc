#include <bits/stdc++.h>
using namespace std;

int w[100005];
int d[100005];
int n;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i ++){
    cin >> w[i];
  }
  sort(w, w + n);
  for (int i = 1; i <= n; i++){
    d[i] = w[n-i]*i;
  }
  cout << *max_element(d + 1, d + n + 1);
}