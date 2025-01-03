#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A, B;
  cin >> A >> B;
  if (A > B){
    cout << '>';
  }
  else if (A < B){
    cout << '<';
  }
  else {
    cout << "==";
  }
}