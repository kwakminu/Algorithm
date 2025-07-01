#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> S;
    int k;
    cin >> k;
    
    for (int i = 0; i < k; i ++){
        int n;
        cin >> n;
        if (n == 0) {
            S.pop();
        }
        else {
            S.push(n);
        }
    }
    int sum = 0;
    while (!(S.empty())){
        sum += S.top();
        S.pop();
    }
    cout << sum;


}
