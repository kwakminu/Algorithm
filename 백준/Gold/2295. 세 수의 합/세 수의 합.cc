#include <bits/stdc++.h>
using namespace std;

int a[1005];
vector<int> two;
int n;
int mx = 0;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i ++) cin >> a[i];
  for (int i = 0; i < n; i ++){
    for (int j = 0; j < n; j ++){
      two.push_back(a[i] + a[j]);
    }
  }
  sort(two.begin(), two.end());
  for (int i = 0; i < n; i ++){
    for (int j = 0; j < n; j++){
      if (binary_search(two.begin(), two.end(), a[j] - a[i])){
        mx = max(mx, a[j]);
      }
    }
  }
  cout << mx;
}