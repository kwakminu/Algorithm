#include <bits/stdc++.h>
using namespace std;

int a[100005];

int binary(int* a, int n, int k){
  int st, mid, en;
  st = 0;
  en = n - 1;
  while (en >= st) {
    mid = (st + en) / 2;
    if (a[mid] > k){
      en = mid - 1;
    }
    else if (a[mid] < k) {
      st = mid + 1;
    }
    else {
      return 1;
    }
  }
  return 0;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i ++){
    cin >> a[i];
  }
  sort (a, a + n);
  cin >> m;
  while(m--){
    int k;
    cin >> k;
    cout << binary(a, n, k) << '\n';
  }
}