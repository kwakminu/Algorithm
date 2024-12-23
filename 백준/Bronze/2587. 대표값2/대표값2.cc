#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr(5);

    int sum = 0;
    int py = 0;
    int mid = 0;

    for (int i = 0 ; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    py = sum / 5;


    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5 - i - 1; k++)
        {
            if (arr[k] < arr[k+1])
                swap(arr[k], arr[k+1]);
        }

    }

    cout << py << "\n" << arr[2];




    
}
