#include <bits/stdc++.h>
using namespace std;

int t[20];
int p[20];
int d[20];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i ++) {
        cin >> t[i] >> p[i];
    }
    
    for (int i = N; i >=1; i --) {
        if (i + t[i] <= N+1) {
         d[i] = max(d[i+t[i]] + p[i], d[i+1] );
        }
        else {
            d[i] = d[i+1];
        }
    }

    cout << *max_element(d, d+N+1);
    return 0;
}