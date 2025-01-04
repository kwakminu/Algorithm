#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a, b, c;
  while (true){
    cin >> a >> b>> c;
    if (a > b && a > c){
      int k = a*a;
      if (k == (b*b + c*c)){
        cout << "right\n";
      }
      else {
        cout << "wrong\n";
      }
    }
    else if (b>a && b > c){
      int k = b*b;
      if (k == (a*a + c*c)){
        cout << "right\n";
      }
      else {
        cout << "wrong\n";
      }
    }
    else if (c > a && c > b){
      int k = c*c;
      if (k == (a*a + b*b)){
        cout << "right\n";
      }
      else {
        cout << "wrong\n";
      }
   }
   else if ( a == 0 && b == 0 && c == 0){
    break;
   }
  }
}