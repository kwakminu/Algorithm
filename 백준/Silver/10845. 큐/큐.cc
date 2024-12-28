#include <bits/stdc++.h>

using namespace std;

const int MX = 10005;
int dat[MX];
int pos = 0;

void push (int x) {
    dat[pos] = x;
    pos ++;
}

void pop (){
    pos--;
}

int top() {
    return dat[pos - 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    queue<int> Q;
    for (int i = 0; i < N; i++){
        string s;
        cin >> s;
        if (s == "push"){
            int k;
            cin >> k;
            Q.push(k);
        }
        else if (s == "pop"){
            if(Q.empty()){
                cout << -1 << "\n";
            }
            else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        }
        else if (s == "size"){
            cout << Q.size() << "\n";
        }
        else if (s == "empty"){
            if (Q.empty()){
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
        else if (s == "front"){
            if (Q.empty()){
                cout << -1 << "\n";
            } else {
                cout << Q.front() << "\n";
            }
        }
        else if (s == "back") {
            if (Q.empty()){
                cout << -1 << "\n";
            } else {
                cout << Q.back() << "\n";
            }
        }
    }
 


}
