#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int d[10] = {};

    while (N >0){
        d[N%10]++;
        N = N/10;
    }

    d[6] = d[6] +d[9];
    d[9] = 0;

    if ((d[6]%2) == 0){
        d[6] = d[6]/2;
    }
    else {
        d[6] = (d[6]+1)/2;
    }

    int max = 0;
    for (int i = 0; i<10; i++)
    {
        if (max < d[i])
            max = d[i];
    }

    cout << max;
    

}
