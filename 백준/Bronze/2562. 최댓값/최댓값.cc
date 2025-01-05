#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int mx[9];

  for (int i; i < 9; i ++){
    cin >> mx[i];

  }

  int* maxElement = max_element(mx, mx + 9);
  int index;

  for (int i; i < 9; i ++){
    if (mx[i] == *maxElement){
      index = i;
    }

  }

  cout << *maxElement << "\n" << index+1;


}