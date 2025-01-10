#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1}; // 남쪽, 동쪽, 북쪽, 서쪽 순서
int n, m;
int board1[10][10]; // 최초로 입력받은 board 저장 변수
int board2[10][10]; // 사각 지대의 개수를 세기 위해 사용할 변수
vector<pair<int,int>> cctv; //cctv 좌표를 저장할 변수

bool OOB(int a, int b){
  return (a < 0 || a >= n || b < 0 || b >= m);
}

void upd(int x, int y, int dir) {
  dir %= 4;
  while(1) {
    x += dx[dir];
    y += dy[dir];
    if (OOB(x,y) || board2[x][y] == 6) return; // 범위를 벗어났거나 벽을 만났으면 함수를 탈출
    if (board2[x][y] != 0) continue; // 해당 칸이 빈칸이 아닐 경우(cctv가 있을 경우) 넘어가기
    board2[x][y] = 7; // 빈칸을 7로 덮음음
  }
}



int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  int mn = 0; // 사각지대의 최소 크기(답)
  for (int i = 0; i < n; i ++){
    for (int j = 0; j < m; j ++){
      cin >> board1[i][j];
      if (board1[i][j] != 0 && board1[i][j] != 6){
        cctv.push_back({i,j});
      }
      if(board1[i][j] == 0) mn++; //아예 cctv가 없는 경우도 생각해서 저장해두기기
    }
  }
  
  for(int tmp = 0; tmp < (1<<(2*cctv.size())) ; tmp++){
    for (int i = 0; i < n; i ++){
      for (int j = 0; j < m; j ++){
        board2[i][j] = board1[i][j]; //board2 원래 상태로 초기회
      }
    }
    int brute = tmp;
    for (int i = 0; i < cctv.size(); i++){
      int dir = brute % 4;
      brute = brute / 4;
      int x = cctv[i].X;
      int y = cctv[i].Y; // 현재 cctv의 위치
      if (board1[x][y] == 1){
        upd(x, y, dir);
      }
      else if (board1[x][y] == 2) {
        upd(x, y, dir);
        upd(x, y, dir + 2);
      }
      else if (board1[x][y] == 3) {
        upd(x, y, dir);
        upd(x, y, dir + 1);
      }
      else if (board1[x][y] == 4) {
        upd(x, y, dir);
        upd(x, y, dir + 1);
        upd(x, y, dir + 2);
      }
      else { //board1[x][y] == 5
        upd(x, y, dir);
        upd(x, y, dir + 1);
        upd(x, y, dir + 2);
        upd(x, y, dir + 3);
      }
    }
    int val = 0;
    for (int i = 0; i < n; i ++){
      for (int j = 0; j < m; j ++){
        if (board2[i][j] == 0)
          val++;
      }
    }
    mn = min(val, mn);

  }
  cout << mn;

}