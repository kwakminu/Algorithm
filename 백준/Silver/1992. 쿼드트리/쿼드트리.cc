#include <bits/stdc++.h>
using namespace std;

string board[66];

bool test(int N, int a, int b){
  for (int i = a; i < a + N; i++){
    for (int j = b; j < b + N; j++){
      if (board[i][j] != board[a][b]){
        return false;
      }
    }
  }
  return true;
}

void func(int N, int a, int b){
  if (test(N, a, b)){
    cout << board[a][b];
    return;
  }
  cout << "(";
  for (int i = 0; i < 2; i ++){
    for (int j = 0; j < 2; j++){
      func(N/2, a + i*(N/2), b + j*(N/2));
    }
  }
  cout << ")";
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
      cin >> board[i];
  }
  func (N, 0, 0);

}