#include <bits/stdc++.h>
using namespace std;

int arr [105];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int a = 1; a <= m; a ++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int p = i; p <= j; p++){
            arr[p] = k;
        }
    }

    for (int i = 1; i <= n; i ++) {
        cout << arr[i] << ' ';
    }
} 