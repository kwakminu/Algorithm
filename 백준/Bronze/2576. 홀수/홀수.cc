#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(7);
    vector<int> odd(7);
    int count = 0;
    int sum = 0;
    int min = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (v[i] % 2 == 1)
        {
            odd[count] = v[i];
            count++;
        }
            
    }

    if (count == 0)
        cout << -1;
    else
    {
        for (int i = 0; i < count; i++)
            sum += odd[i];
        cout << sum << "\n";
        
        min = odd[0];

        for (int i = 0; i < count; i ++)
        {
            if (odd[i] < min)
                min = odd[i];
        }

        cout << min;

    }

    
}
