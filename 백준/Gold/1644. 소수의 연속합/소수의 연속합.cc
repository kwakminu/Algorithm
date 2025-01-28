#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
  vector<int> primes;
  vector<bool> state(n+1, true);
  state[1] = false;
  for (int i = 2; i * i <= n; i++){
    if (!state[i]) continue;
    for (int j = i * i ; j <= n; j += i)
      state[j] = false; 
  }
  for (int i = 2; i <= n; i ++){
    if (state[i]) primes.push_back(i);
  }
  return primes;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<int> a = sieve(4000000);
  int n;
  cin >> n;
  int en = 0;
  int cnt = 0;
  int sum = a[0];
  for (int st = 0; st < a.size(); st++ ){
    while (en < a.size() && sum < n) {
      en++;
      if (en != a.size()) sum += a[en];
    }
    if (en == a.size()) break;
    if (sum == n) cnt ++;
    sum -= a[st];
  }
  cout << cnt;

} 