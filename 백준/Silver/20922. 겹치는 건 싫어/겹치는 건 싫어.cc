#include <bits/stdc++.h>
using namespace std;

int a[200002];
int num[200002];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i];
  int en = 0;
  int mx = 0;
  int cnt = 0;
  num[a[en]]++;
  for (int st = 0; st < n; st++){
    while (en < n-1 && num[a[en+1]] < k){
      en++; //다음 en값으로 넘어가기 
      num[a[en]]++; //현재 en값에 해당하는 횟수 기록
    }
    mx = max(mx, en - st + 1);
    if (num[a[st]] > 0) num[a[st]]--; //현재 st값에 해당하는 값 줄이기
  }
  cout << mx;
}
