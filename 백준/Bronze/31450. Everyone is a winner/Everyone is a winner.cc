#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int M, K;

    cin >> M >> K;

    if (M % K == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

}