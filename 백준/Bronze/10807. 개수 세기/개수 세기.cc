#include <bits/stdc++.h>
using namespace std;

int arr[105];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  for (int i = 0; i < N; i ++) {
    cin >> arr[i];
  }
  int v;
  int cnt = 0;
  cin >> v;
  for (int i = 0 ; i < N; i ++) {
    if (arr[i] == v){
      cnt ++;
    }
  }
  cout << cnt;

}

