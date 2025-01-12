#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[14];
bool vis[14][8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int num; //연쇄반응 수
vector<pair<int,int>> temp;
bool numtrue = false; // 연쇄되었는지

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 12; i ++)
    cin >> board[i];
  
  while (true){
    memset(vis, 0, sizeof(vis));
    numtrue = false;

    for (int i = 0; i < 12; i ++){          // 연쇄 1 할 때
      for (int j = 0; j < 6; j ++){
        if (board[i][j] == '.' || vis[i][j] == true) continue;
        queue<pair<int,int>> Q;
        vis[i][j] = true;
        Q.push({i, j});
        temp.clear();
        temp.push_back({i,j});
        char color = board[i][j];

        while (!Q.empty()){
          auto cur = Q.front();
          Q.pop();
          for (int dir = 0; dir < 4; dir ++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
            if (vis[nx][ny] == true || board[nx][ny] != color) continue;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
            temp.push_back({nx, ny});
          }
        }

        if (temp.size() >= 4) {
          for (int i = 0; i < temp.size(); i++){
            board[temp[i].X][temp[i].Y] = '.';
          }
          numtrue = true;
        }
      }
    }
    
    if (!numtrue) break;
    num++;

    for (int j = 0; j < 6; j ++){ // 아래로 떨어지게 하는 것 
      for (int i = 11; i >=0 ; i--){
        if (board[i][j] == '.'){
          int k = i -1;
          while (k >= 0 && board[k][j] == '.') k--;
          if(k >= 0){
            board[i][j] = board[k][j];
            board[k][j] = '.';
          }
        }
      }
    }

  }

  cout << num;
}