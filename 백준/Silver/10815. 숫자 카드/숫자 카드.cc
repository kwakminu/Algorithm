#include <bits/stdc++.h>
using namespace std;

int a[500005];
int n;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i ++) cin >> a[i];
  sort(a, a + n);
  int m = 0;
  cin >> m;
  while (m--){
    int k = 0;
    cin >> k;
    if (binary_search(a, a + n, k)){
      cout << 1 << ' ';
    }
    else {
      cout << 0 << ' ';
    }
  }
}