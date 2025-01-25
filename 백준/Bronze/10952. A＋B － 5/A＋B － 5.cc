#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  while (a != 0 && b != 0){
    cout << a + b << '\n';
    cin >> a >> b;
  }
}