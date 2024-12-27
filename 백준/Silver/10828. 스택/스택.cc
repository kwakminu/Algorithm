#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    stack<int> S;
    for (int i = 0; i < N; i++){
        string A;
        cin >> A;
        if (A == "push"){
            int k;
            cin >> k;
            S.push(k);
        }
        else if (A == "pop"){
            if (S.size() != 0) {
                cout << S.top() << "\n";
                S.pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (A == "size"){
            cout << S.size() << "\n";
        }
        else if (A == "empty"){
            if (S.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else {
            if (S.size() != 0){
                cout << S.top() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }



    }
    


}
