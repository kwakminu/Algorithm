#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> b;

bool cmp (pair<int, int> a, pair<int, int> b){
  return a.first > b.first;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  long long c;
  cin >> n >> c;
  for (int i = 0; i < n; i ++){
    int x;
    cin >> x;
    bool chk = false;
    for (auto & a : b) {
      if (a.second == x){
        chk = true;
        a.first++;
        break;
      }
    }
    if (!chk) b.push_back({1, x});
  }

  stable_sort (b.begin(), b.end(), cmp);
  for (int i = 0; i < b.size(); i++){
    for (int j = 0; j < b[i].first ; j++ ){
      cout << b[i].second << ' ';
    }
  }


}