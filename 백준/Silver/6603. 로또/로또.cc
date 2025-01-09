#include <bits/stdc++.h>
using namespace std;

int num[15];
int arr[15];
int n;
bool isused[15];

void func(int k){
  if (k == 6){
    for (int i = 0; i < 6; i ++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
  }
  for (int i = 0; i < n; i ++){
    if (k != 0 && arr[k - 1] > num[i]) continue;
    if (!isused[i]){
      arr[k] = num[i];
      isused[i] = true;
      func(k + 1);
      isused[i] = false;
    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  while (true){
    cin >> n;
    if (n == 0) break;
    for (int i = 0; i < n; i ++){
      cin >> num[i];
    }
    func(0);
    cout << '\n';
  }
}