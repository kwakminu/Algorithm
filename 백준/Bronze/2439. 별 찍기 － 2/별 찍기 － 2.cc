#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i ++) {
    for (int k = n-i; k >=1; k-- ) cout << ' ';
    for (int k = 1; k <= i; k++) cout << '*';
    cout << '\n';
  }
}
