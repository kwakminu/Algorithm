#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  if (n == 1){
    return 0;
  }
 for (int i = 2; i*i <= n; i++){
  if (n % i == 0) return 0;
  } 
  return 1;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int cnt = 0;
  cin >> n;
  for (int i = 0; i < n; i ++){
    int a;
    cin >> a;
    if (isPrime(a)) cnt++;
  }
  cout << cnt;
}