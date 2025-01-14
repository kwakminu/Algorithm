#include <bits/stdc++.h>
using namespace std;

string s[52];

bool cmp(const string& a, const string& b){
  
  if (a.size() != b.size()){
    return a.size() < b.size();
  }

  int suma = 0; int sumb = 0;
    for (int i = 0; i < a.size(); i ++){
      if(isdigit(a[i])){
        suma = suma + a[i]-'0';
      }
    }

    for (int i = 0; i < b.size(); i++){
      if(isdigit(b[i])){
        sumb = sumb + b[i]-'0';
      }
    }

    if (suma != sumb){
      return suma < sumb;
    }

    return (a < b);

}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }

  sort(s, s + n, cmp);

  for (int i = 0; i < n; i ++){
    cout << s[i] << '\n';
  }


}