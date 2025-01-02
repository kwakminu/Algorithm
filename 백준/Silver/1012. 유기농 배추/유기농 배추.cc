#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second


int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, M, N, K;
    cin >> T;
    for (int i = 0; i < T; i ++){ //테스트 개수
        int board[52][52] = {};
        bool vis[52][52] = {};
        cin >> M >> N >> K;
        for (int k = 0; k < K; k++){ //칸에 집어넣기기
            int x, y;
            cin >> x >> y;
            board[y][x] = 1;
        }
        int num = 0; // 배추흰지렁이 수 

        for (int q = 0 ; q < N; q++){ //배추 구역들 확인하면서 범위 확장하기~
            for (int w = 0; w < M; w++){
                if(board[q][w] == 0 || vis[q][w] == 1) continue;
                num++;
                queue<pair<int,int>> Q;
                vis[q][w] = 1;
                Q.push({q,w});
                while (!Q.empty()){
                    auto cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                        if (vis[nx][ny] == 1 || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx,ny});
                    }
                }
            
            }
        }
        cout << num << "\n";

    }



}
