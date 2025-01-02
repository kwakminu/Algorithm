#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
string board[1002];
int dist[1002][1002];
int jihoon[1002][1002];

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        fill(dist[i], dist[i]+m, -1);
        fill(jihoon[i], jihoon[i]+m, -1);
    }
    for (int i = 0; i < n; i++){;
        cin >> board[i];
    }

    queue<pair<int,int>> Q;
    queue<pair<int,int>> Q2;

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (board[i][j] == 'F'){
                Q.push({i,j});
                dist[i][j] = 0;
            }

            if (board[i][j] == 'J'){
                Q2.push({i,j});
                jihoon[i][j] = 0;
            }

        }
    }

    //불에 대한 BFS
    while (!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }


    while (!Q2.empty()){
        auto cur = Q2.front();
        Q2.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
             // 범위를 벗어났다는 것은 탈출에 성공했다는 의미이다.
             //큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 된다.
                cout << jihoon[cur.X][cur.Y]+1;
                return 0;
            }
            if (jihoon[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1 && dist[nx][ny] <= (jihoon[cur.X][cur.Y]+1)) continue;
            jihoon[nx][ny] = jihoon[cur.X][cur.Y]+1;
            Q2.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE"; // 여기에 도달했다는 것은 탈출에 실패했음을 의미한다.


}
