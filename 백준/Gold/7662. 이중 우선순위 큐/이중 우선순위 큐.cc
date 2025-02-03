#include <bits/stdc++.h>
using namespace std;


int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t, k;
  cin >> t;
  while(t--){
    multiset<int> s;
    cin >> k;
    while (k--){
      char c;
      cin >> c;
      if (c == 'I'){
        int num;
        cin >> num;
        s.insert(num);
      }
      else {
        int m;
        cin >> m;
        if(s.empty()) continue;
        if (m == 1){
          if (!s.empty()) s.erase(--s.end());
        }
        else {
          if (!s.empty()) s.erase(s.begin());
        }
      }
    }
    if (s.empty()) {
      cout << "EMPTY\n";
    }
    else {
      cout <<*--s.end() << ' ' << *s.begin() << '\n';
    }
  }
}
