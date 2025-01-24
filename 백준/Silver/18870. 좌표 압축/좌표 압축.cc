#include <bits/stdc++.h>
using namespace std;

int a[1000005];
vector<int> tmp, uni;
int n;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i ++) {
    cin >> a[i];
    tmp.push_back(a[i]);
  }
  sort(tmp.begin(), tmp.end());

  for (int i = 0; i < n; i ++){
    if (i == 0 || tmp[i-1] != tmp[i]){
      uni.push_back(tmp[i]);
    }
  }
  for (int i = 0; i < n; i++){
    cout << lower_bound(uni.begin(), uni.end(), a[i]) - uni.begin() << ' ';
  }
}