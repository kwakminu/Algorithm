#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
string board[102];
bool vis[102][102];
bool vis2[102][102];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int juckx = 0;
int jucko = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> board[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j ++){
            if (vis[i][j] == 1) continue;
            juckx ++;
            queue<pair<int,int>> Q;
            vis[i][j] = 1;
            Q.push({i,j});
            char curcolor = board[i][j];
            while (!Q.empty()){
                auto cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (vis[nx][ny] == 1 || board[nx][ny] != curcolor) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }

        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (board[i][j] == 'R'){
                board[i][j] = 'G';
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j ++){
            if (vis2[i][j] == 1) continue;
            jucko ++;
            queue<pair<int,int>> Q;
            vis2[i][j] = 1;
            Q.push({i,j});
            char curcolor = board[i][j];
            while (!Q.empty()){
                auto cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (vis2[nx][ny] == 1 || board[nx][ny] != curcolor) continue;
                    vis2[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }

        }
    }    

    cout << juckx << " " << jucko;



}
