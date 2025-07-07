#include <bits/stdc++.h>

using namespace std;

int arr[30005];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   int P, B;
   cin >> B;
   P = 5 * B - 400;

   cout << P << '\n';

   if (P > 100) {
    cout << -1;
   }
   else if (P == 100) {
    cout << 0;
   }
   else {
    cout << 1;
   }
}