#include <bits/stdc++.h>
using namespace std;

vector<long long> a, b;
int n, m;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    a.push_back(k);
  }
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    b.push_back(k);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  vector<int> ans;
  for (int num : a) {
    if (binary_search(b.begin(), b.end(), num)) continue;
    ans.push_back(num);
  }
  cout << ans.size() << "\n";
  for (int num : ans) cout << num << " ";
}