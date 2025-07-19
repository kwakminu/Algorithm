#include <bits/stdc++.h>
using namespace std;

long long arr[21];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[0] = 1;
    for (int i = 1 ; i <= 20; i ++) {
        arr[i] = arr[i-1]*i;
    }

    int n;
    cin >> n;
    cout << arr[n];

    
    
} 