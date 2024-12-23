#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A;

    cin >> A;

    if (A >= 90 && A <=100)
    {
        cout << 'A';
    }
    else if (A >= 80 && A <=89)
    {
        cout << 'B';
    }
    else if (A >= 70 && A <=79)
    {
        cout << 'C';
    }
    else if (A >= 60 && A <= 69)
    {
        cout << 'D';
    }
    else
    {
        cout << 'F';
    }


}