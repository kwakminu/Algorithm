#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   int a, b;
   cin >> a >> b;

   int c = b & 10;
   int d = ( b / 10 ) % 10; 

   cout << a * (b % 10) << '\n';
   cout << a * d << '\n';
   cout << a * (b /100) << '\n';
   cout << a * b;
} 