#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans_x;
    int ans_y = 1001;
    int N;
    cin >> N;
    for (int i = 0; i < N; i ++) {
        int x, y;
        cin >> x >> y;
        if (y < ans_y) {
            ans_y = y;
            ans_x = x;
        }
    }

    cout << ans_x << ' ' << ans_y;


}