#include <bits/stdc++.h>
using namespace std;

int m, n;
long long arr[1000005];

bool solve(long long  x){
  if (x==0) return true;
  long long cnt = 0;
  for (int i = 0; i < n; i++) cnt += arr[i] / x;
  return cnt >= m;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];

  long long st = 0;
  long long en = *max_element(arr, arr + n);

  while (st < en) {
    long long mid = (st + en + 1) / 2;
    if (solve(mid))
      st = mid;
    else en = mid - 1;
  }
  cout << st << '\n';

}