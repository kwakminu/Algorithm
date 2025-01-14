#include <bits/stdc++.h>
using namespace std;

string s[20002];
int n;

bool cmp(const string & a, const string & b){
  if (a.size() != b.size()){
    return a.size() < b.size();
  }
  return a < b;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }

  sort(s, s + n, cmp);

  for (int i = 0; i < n - 1; i++){
    if (s[i] != s[i+1]){
      cout << s[i] << '\n';
    }
  }
  cout << s[n-1];

}