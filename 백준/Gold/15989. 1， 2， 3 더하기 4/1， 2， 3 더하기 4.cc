#include <bits/stdc++.h>
using namespace std;

int d[10005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    d[0] = 1;

    for (int i = 1; i <=3; i ++) {
        for (int j = i; j <= 10000; j ++) {
            d[j] += d[j-i];
        }
    }

    int t;
    cin >> t;

    
    for (int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }

    return 0;
}