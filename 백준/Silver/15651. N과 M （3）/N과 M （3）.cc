#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[20];
int isused[20];
void func(int k){
  if (k == m){
    for (int i = 0; i < m; i ++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
  }
  for (int i = 1; i <= n; i++){
    if (isused[i] < m){
      arr[k] = i;
      isused[i]++;
      func(k+1);
      isused[i]--;
    }
  }
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  func(0);
}