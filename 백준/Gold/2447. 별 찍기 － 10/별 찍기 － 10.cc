#include <bits/stdc++.h>
using namespace std;

char board[2300][2300];

// solve(n, x, y) : board[x][y] ~ board[x+n-1][y+n-1]에 올바르게 '*'과 ' '를 넣는 함수
void solve (int n, int x, int y) {
  if (n == 1){
    board[x][y] = '*';
    return;
  }
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (i == 1 && j == i){
        continue;
      }
      solve(n / 3, x + n / 3 * i, y + n / 3 * j);
    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i ++){
    fill(board[i], board[i]+n, ' ');
  }
  solve (n, 0, 0);
  for (int i = 0; i < n; i++){
    cout << board[i] << '\n';
  }

}