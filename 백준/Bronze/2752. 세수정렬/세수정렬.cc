#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;

    cin >> a >> b >> c;

    if (a > b)
        if (b > c)
            cout << c << ' ' << b << ' '<< a;
        else
            if (a > c)
                cout << b << ' '<< c<< ' ' << a;
            else
                cout << b<< ' '<< a<< ' '<< c;
    else
        if (a>c)
            cout << c << ' '<< a<< ' ' << b;
        else
            if (b<c)
                cout << a << ' '<< b<< ' ' << c;
            else
                cout << a<< ' ' << c<< ' ' << b;
    

}