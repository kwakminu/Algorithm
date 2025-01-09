#include <bits/stdc++.h>
using namespace std;

bool mask[25];
string board[5];
int ans;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 5; i++){
    cin >> board[i];
  }

  //25명 중 칠공주가 될 사람의 후보 조합 뽑기
  fill(mask + 7, mask + 25, true);
  do{
    queue<pair<int,int>> Q;
    int dasom = 0, adj = 0; // 이다솜파의 수, 가로 세로로 인접한 사람의 수
    bool isp7[5][5] = {}, vis[5][5] = {}; // isp7은 현재 선택된 후보가 5x5 보드에 차지하는 위치를 표시한 것 
    for (int i = 0; i < 25; i ++){
      if (!mask[i]) {
        int x = i / 5, y = i % 5; // 1차원 배열에서 행과 열을 구하는 법
        isp7[x][y] = true;
        if (Q.empty()) {
          Q.push({x, y});
          vis[x][y] = true;
        }
      }
    }
    while (!Q.empty()){
      auto cur = Q.front();
      Q.pop();
      adj++;
      if (board[cur.first][cur.second] == 'S') dasom ++;
      for (int dir = 0; dir < 4; dir ++){
        int nx = cur.first + dx[dir];
        int ny = cur.second + dy[dir];
        if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || vis[nx][ny] || !isp7[nx][ny]) continue;
        Q.push({nx, ny});
        vis[nx][ny] = true;
      }
    }
    if (adj >= 7 && dasom >= 4){
      ans++;
    }
  }while (next_permutation(mask, mask + 25));
  cout << ans;
}