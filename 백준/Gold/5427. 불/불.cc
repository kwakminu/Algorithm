#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
int board[1002][1002];
int dist1[1002][1002];
int dist2[1002][1002];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1 ,0};

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  for (int a = 0; a < t; a++){
    queue<pair<int,int>> Q1;
    queue<pair<int,int>> Q2;

    int n, m;
    cin >> m >> n;

    for (int i = 0; i < n; i++){
        fill(dist1[i], dist1[i]+m, 0);
        fill(dist2[i], dist2[i]+m, 0);
    }

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
           char c;
           cin >> c;
           if (c == '#') board[i][j] = -1;
           else{
            if (c == '@'){
                Q2.push({i,j});
                dist2[i][j] = 1;
            }
            else if (c == '*'){
                Q1.push({i,j});
                dist1[i][j] = 1;
            }
             board[i][j] = 0;
           }
        }
    }
    // 불 BFS!
    while (!Q1.empty()){
        auto cur = Q1.front();
        Q1.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] == -1) continue;
            if (dist1[nx][ny]) continue;
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            Q1.push({nx,ny});
        }
    }
    
    bool escaped = false;
    while ((!Q2.empty()) && (!escaped)){
        auto cur = Q2.front();
        Q2.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m){
                cout << dist2[cur.X][cur.Y]<< "\n";
                escaped = true;
                break;
            }
            if (board[nx][ny] == -1) continue;
            if (dist2[nx][ny]) continue;
            if(dist1[nx][ny] != 0 && dist1[nx][ny] <= (dist2[cur.X][cur.Y]+1) ) continue;
            dist2[nx][ny] = dist2[cur.X][cur.Y] +1;
            Q2.push({nx,ny});
        }
       

    }
    if (!escaped)cout << "IMPOSSIBLE\n";
  }

}
