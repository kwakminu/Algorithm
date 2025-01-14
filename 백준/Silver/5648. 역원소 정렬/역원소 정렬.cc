#include <bits/stdc++.h>
using namespace std;

string s[1000002];
vector<string> s2;

bool cmp (const string& a, const string& b){
  if (a.size() != b.size()){
    return (a.size() < b.size());
  }
  return a < b;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i ++){
    cin >> s[i];
  }

  for (int i = 0; i < n; i ++){
    int j = s[i].size() - 1;
    while (j >= 0 && s[i][j] == '0'){
      j--;
    }
    string reversed;
    for (j; j >=0 ; j--){
      reversed += s[i][j];
    }
    s2.push_back(reversed);
  }

  sort(s2.begin(), s2.end(), cmp);
  for (int i = 0; i < n; i ++){
    cout << s2[i] << '\n';
  }

}