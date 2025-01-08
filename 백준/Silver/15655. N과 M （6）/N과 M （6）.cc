#include <bits/stdc++.h>
using namespace std;

int n, m;
int inp[10];
int arr[10];
bool isused[10002];
void func(int k){
  if (k == m){
    for (int i = 0; i < m; i ++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
  }
  for (int i = 0; i < n; i++){
    if (!isused[inp[i]]){
      if (k != 0 && arr[k-1] > inp[i]) continue;
      arr[k] =  inp[i];
      isused[inp[i]] = true;
      func(k + 1);
      isused[inp[i]] = false;
    }
  }

}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i ++){
    cin >> inp[i];
  }
  sort(inp,inp + n);
  func(0);
}