#include <bits/stdc++.h>
using namespace std;

int n;
bool arr[17][17];
bool isused1[20];
bool isused2[30];
bool isused3[30];

int cnt = 0; // cur번째 행에 말을 배치할 예정
void func(int cur) {
  if (cur == n){
    cnt++;
    return;
  }
  for (int i = 1; i <= n; i++){
    if (!isused1[i] && !isused2[cur+i] && !isused3[cur - i + n - 1]){
      arr[cur][i] = true;
      isused1[i] = true;
      isused2[cur+i] = true;
      isused3[cur - i + n - 1] = true;
      func(cur + 1);
      isused1[i] = false;
      isused2[cur+i] = false;
      isused3[cur - i + n - 1] = false;       
    }
  }
}



int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  func(0);
  cout << cnt;
}