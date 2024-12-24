#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int freq[10] = {};
    int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a*b*c;

    string str = to_string(sum);

    for (int i = 0; i < str.length(); i++)
    {
        for(int k = 0; k < 10; k++)
        {
            if (str[i] == '0'+k)
                freq[k]++;
        }
    }

    for (int i = 0; i < 10; i++)
        cout << freq[i] << "\n";

}
