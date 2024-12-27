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
    for (int i = 0; i < N; i++){
        string A;
        cin >> A;
        if (A == "push"){
            int k;
            cin >> k;
            push(k);
        }
        else if (A == "pop"){
            if (pos != 0) {
                cout << top() << "\n";
                pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (A == "size"){
            cout << pos << "\n";
        }
        else if (A == "empty"){
            if (pos == 0) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else {
            if (pos != 0){
                cout << top() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }



    }
    


}
