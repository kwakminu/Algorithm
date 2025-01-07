#include <bits/stdc++.h>
using namespace std;

int board[130][130];
int cnt[2];
int N;

bool check(int x, int y, int n){
  for (int i = x; i < x + n; i++){
    for (int j = y; j < y + n; j++){
      if (board[x][y] != board[i][j]){
        return false;
      }
    }
  }
  return true;
}

void func(int x, int y, int n){
  if (check(x,y,n)){
    cnt[board[x][y]] ++;
    return;
  }
  int z = n / 2;
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      func(x + z*i, y + z*j, z);
    }
  }
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      cin >> board[i][j];
    }
  }
  func(0, 0, N);
  cout << cnt[0] << "\n" << cnt[1];

}
