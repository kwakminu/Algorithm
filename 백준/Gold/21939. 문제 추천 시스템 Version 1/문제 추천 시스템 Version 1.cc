#include <bits/stdc++.h>
using namespace std;

string op;
int N, L, P, x;
int problevel[100002]; // 이 문제가 어느 난이도였는지 저장
set<int> probBylevel[102]; //난이도 별로 문제 저장

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  while(N--){
    cin >> P >> L;
    problevel[P] = L;
    probBylevel[L].insert(P);
  }
  cin >> N;
  while (N--){
    cin >> op;
    if (op == "recommend") {
      cin >> x;
      if (x == 1) {
        for (int i = 100; 0 <=i; i--){
          if (probBylevel[i].empty()) continue;
          cout << *(prev(probBylevel[i].end())) << '\n';
          break;
        }
      }
      else {
        for (int i = 0; i  < 101; i++){
          if (probBylevel[i].empty()) continue;
          cout << *probBylevel[i].begin() << '\n';
          break;
        }
      }
    }
    else if (op == "add") {
      cin >> P >> L;
      problevel[P] = L;
      probBylevel[L].insert(P);
    }
    else if (op == "solved"){
      cin >> P;
      probBylevel[problevel[P]].erase(P);
    }
  }

}
