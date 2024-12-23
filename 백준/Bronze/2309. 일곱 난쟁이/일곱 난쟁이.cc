#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr(9);

    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int a = 0;
    int b = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int k = i + 1; k < 9; k++)
            if ((sum - arr[i] - arr[k]) == 100)
            {              
                a = i;
                b = k;
            }

    }

    arr[a] = 1;
    arr[b] = 1; 

    for (int l = 0; l < 9; l++)
        for (int m = 0; m < 9 - l - 1; m++)
        {
            if (arr[m] > arr[m+1])
                swap (arr[m], arr[m+1]);
        }

    for (int u = 2; u < 9; u++)
        cout << arr[u] << "\n";


}
