#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  int sum = 0;
  cin >> n;
  for (int i = 1; i <=n; i++) {
    sum += i;
  }
  cout << sum;

}


