#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, k;
pair<int, int> jewel[300003]; // 가격, 무게
multiset<int> bag;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n >> k; // n: 보석들 갯수
  
  for (int i = 0; i < n; i ++)
    cin >> jewel[i].Y >> jewel[i].X; // 무게/ 가격 반대로 입력받음
  sort(jewel, jewel + n); // 가격이 점차 올라가고, 가격이 같으면 무게가 낮은게 앞에
  for (int i = 0; i < k; i ++){
    int c;
    cin >> c;
    bag.insert(c);
  }

  long long ans = 0;

  for (int i = n-1; i >= 0; i--){
    int m, v;
    tie(v, m) = jewel[i];
    auto it = bag.lower_bound(m); // 무개를 삽입할 수 있는 가장 작은 값
    if (it == bag.end()) continue;
    ans += v;
    bag.erase(it);
  }
  cout << ans;
}
