#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, L;
    deque<pair<int,int>> dq;
    // <수, 인덱스>

    cin >> N >> L;

    for (int i = 1; i <= N; i++) {

        int k;
        cin >> k;

        while ((!dq.empty()) && dq.back().first >= k){
            dq.pop_back();
        }

        dq.push_back({k, i});

        if (dq.front().second < i - L + 1) {
            dq.pop_front();
        }

        cout << dq.front().first << ' ';
    }
}
