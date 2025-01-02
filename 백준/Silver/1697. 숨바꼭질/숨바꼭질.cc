#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dist[100002];
int n, m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    queue<int> Q;
    fill(dist, dist+100001, -1);
    dist[n] = 0;
    Q.push(n);

    while (!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for (int nxt : {cur-1, cur+1, 2*cur}){
            if (nxt < 0 || nxt > 100000) continue;
            if (dist[nxt] != -1) continue;
            dist[nxt] = dist[cur]+1;
            Q.push(nxt);
        }
    }
    cout << dist[m];


}
