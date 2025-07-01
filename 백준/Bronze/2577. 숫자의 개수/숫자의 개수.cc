#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num[10] = {0};

    int a, b, c;
    cin >> a >> b >> c;
    int k;
    for (int i = 0; i < 3; i ++) {
        k = a * b * c;
    }

    while (k != 0) {
        num[k%10] ++;
        k = k / 10;
    }

    for (int i = 0; i < 10; i ++) {
        cout << num[i] << '\n';
    }

}
