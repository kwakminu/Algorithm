#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> D;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string S;
        cin >> S;
        if (S == "push_front"){
            int k;
            cin >> k;
            D.push_front(k);
        }
        else if (S== "push_back"){
            int k;
            cin >> k;
            D.push_back(k);
        }
        else if (S == "pop_front"){
            if(D.empty()){
                cout << "-1\n";
            }
            else{
                cout << D.front() << "\n";
                D.pop_front();
            }
        }
        else if (S == "pop_back"){
            if (D.empty()){
                cout << "-1\n";
            }
            else {
                cout << D.back() << "\n";
                D.pop_back();
            }
        }
        else if (S == "size"){
            cout << D.size() << "\n";
        }
        else if (S == "empty"){
            if (D.empty()){
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if (S == "front"){
            if (D.empty()){
                cout << "-1\n";
            }
            else {
                cout << D.front() << "\n";
            }
        }
        else { // "back"
            if (D. empty()){
                cout << "-1\n";
            }
            else {
                cout << D.back() << "\n";
            }
        }
    }

}
