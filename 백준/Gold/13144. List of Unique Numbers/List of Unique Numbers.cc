#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector <int> arr(n);
  vector<bool> chk(100002);
  for (int i = 0; i < n; i ++) cin >> arr[i];

  long long ans = 0;
  chk[arr[0]] = 1;
  int en = 0;
  for (int st = 0; st < n; st++){
    while (en < n-1 && !chk[arr[en+1]]){
      en++;
      chk[arr[en]] = 1;
    }
    ans += (en - st + 1);
    chk[arr[st]] = 0;
  }
  cout << ans;

}
