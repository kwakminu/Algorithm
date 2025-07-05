#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[1005];
int dist[1005][1005][2]; 
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<tuple<int, int, bool>> Q; // 좌표와 벽부신유무

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i ++){
        string s;
        cin >> s;
        board[i] = ' ' + s;
    }

    memset(dist, -1, sizeof(dist));

    dist[1][1][0] = 1;
    Q.push({1, 1, 0});

    while (!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++){
            int nx = get<0>(cur) + dx[dir]; 
            int ny = get<1>(cur) + dy[dir];

            if (nx < 1 || nx > N || ny < 1 || ny > M) continue;

            //벽이 아닐 때
            if (board[nx][ny] == '0' && dist[nx][ny][get<2>(cur)] == -1) {
                dist[nx][ny][get<2>(cur)] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
                Q.push({nx, ny, get<2>(cur)});
            }

            //벽일 때는 안 부신 경우만 가능 
            if (board[nx][ny] == '1' && get<2>(cur) == 0 && dist[nx][ny][1] == -1) {
                dist[nx][ny][1] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
                Q.push({nx, ny, 1});
            }
        }
    }

    int ans1 = dist[N][M][0];
    int ans2 = dist[N][M][1];

    if (ans1 == -1 && ans2 == -1) cout << -1;
    else if (ans1 == -1) cout << ans2;
    else if (ans2 == -1) cout << ans1;
    else cout << min(ans1, ans2);
}