#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int k){ // 여기서 k : 현재까지 k개의 수를 택했다. 
  if (k == m){
    for (int i = 0; i < m; i++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
  }

  for (int i = 1; i <= n; i++){
    if (!isused[i]){
      arr[k] = i;
      isused[i] = true;
      func(k+1);
      isused[i] = false; // 다 끝났으니까! k번째 수를 i로 정한 모든 경우에 대해 다 확인했으니 i를 이제 사용되지 않았다고 명시한다. 
    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  func(0);
}