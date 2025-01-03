#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A;
  cin >> A ;
  for (int i = 1; i <= A; i++){
    for (int k = 0; k < i; k++){
      cout << '*';
    }
    cout << "\n";
  }

}