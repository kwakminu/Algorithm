#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[105][105];
int vis[105][105];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int,int>> Q;
vector<int> ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N, K;
    cin >> M >> N >> K;
    
    for (int i = 0; i < K; i++){
        int fx, fy, lx, ly;
        cin >> fx >> fy >> lx >> ly;
        for (int x = fx; x < lx; x++){
            for (int y = fy; y < ly; y++){
                board[y][x] = -1;
            }
        }
    }
    int cnt = 0;

    for (int i = 0; i < M; i ++){
        for (int j = 0; j < N; j ++){
            if (board[i][j] == -1 || vis[i][j] != 0) continue;
            cnt++;
            Q.push({i, j});
            vis[i][j] = 1;
            int area = 1;
            while (!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                    if (board[nx][ny] == -1 || vis[nx][ny] != 0) continue;
                    area++;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            ans.push_back(area);
        }
    }

    sort(ans.begin(), ans.end());
    cout << cnt << '\n';
    for (int x : ans){
        cout << x << ' ';
    }

}