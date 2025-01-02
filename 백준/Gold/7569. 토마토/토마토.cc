#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define Z third
int board[102][102][102];
int dist[102][102][102];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N, H;
    cin >> M >> N >> H;
    queue<tuple<int,int,int>> Q;
    for (int n = 0 ; n < H; n++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cin >> board[n][i][j];
                if (board[n][i][j] == 1){
                    Q.push({n,i,j});
                }
                if (board[n][i][j] == 0){
                    dist[n][i][j] = -1;
                }
            }
        }
    }
    while (!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 6; dir++){
            int nx = get<1>(cur) + dx[dir];
            int ny = get<2>(cur) + dy[dir];
            int nz = get<0>(cur) + dz[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M || nz<0 || nz >= H) continue;
            if (dist[nz][nx][ny]>= 0) continue;
            dist[nz][nx][ny] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({nz, nx, ny});
        }
    }

    int ans = 0;

    for (int n = 0; n < H; n++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                if (dist[n][i][j] == -1){
                    cout << "-1";
                    return 0;
                }
                ans = max(ans, dist[n][i][j]);
            }
        }
    }
    
    cout << ans;

}
