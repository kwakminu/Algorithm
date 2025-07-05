#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[1005];
int dist[1005][1005][11];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<tuple<int, int, int>> Q; // 좌표와 벽부신유무

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, K;
    cin >> N >> M >> K;

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

            //벽일 때는 K 전까지만
            if (board[nx][ny] == '1' && get<2>(cur) < K && dist[nx][ny][get<2>(cur) + 1] == -1) {
                dist[nx][ny][get<2>(cur) + 1] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
                Q.push({nx, ny, get<2>(cur) + 1});
            }
        }
    }

    vector<int> ans;

    for (int i = 0; i <=K; i ++) {
         if (dist[N][M][i] != -1) {
            ans.push_back(dist[N][M][i]);
         }
    }
    
    if (ans.empty()) {
        cout << -1;
    }
    else {
        cout << *min_element(ans.begin(), ans.end() );
    }
}