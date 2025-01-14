#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, string>> a;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    int num;
    string name;
    cin >> num >> name;
    a.push_back({num, i, name});
  }
  stable_sort(a.begin(), a.end());
  
  for (int i = 0; i < n; i++){
    cout << get<0>(a[i]) << ' ' << get<2>(a[i]) << '\n';
  }
}