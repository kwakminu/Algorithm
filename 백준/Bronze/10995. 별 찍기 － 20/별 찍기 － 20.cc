#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int i = 0; i < n; i++) {
                 cout << "* ";
            }
         }
         else {
            for (int i = 0; i < n; i++) {
                cout << " *";
            }
         }
        cout << "\n";
    }

}