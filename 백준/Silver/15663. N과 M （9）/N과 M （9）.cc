#include <bits/stdc++.h>
using namespace std;

int n, m;
int num[10]; // 입력한 수열
int arr[10]; // 정리해논 수열
bool isused[10]; // 입력한 수열 인덱스 사용했는지

void func(int k){
  if (k == m){
    for (int i = 0; i < m; i ++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
  }
  int tmp = 0; // 중복 순열인지 확인하기 위해 필요한 임시 변수
  for (int i = 0; i < n; i++){
    if (!isused[i] && tmp != num[i]){
      arr[k] = num[i];
      isused[i] = true;
      tmp = arr[k];
      func(k + 1);
      isused[i] = false;
    }
  }

}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i ++){
    cin >> num[i];
  }
  sort(num,num + n);
  func(0);
}