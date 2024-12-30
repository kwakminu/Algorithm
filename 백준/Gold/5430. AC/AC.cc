#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> D1;

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        string s;
        cin>> s;
        int n;
        cin >> n;
        string x;
        cin >> x;

        
        bool reversed = false;
        bool error = false;

        x = x.substr(1, x.size()-2);
        stringstream ss(x);
        string temp;
        while (getline(ss, temp, ',')){
            if (!temp.empty()){
                D1.push_back(stoi(temp));
            }
        }

        
        for (char R : s){
            if (R == 'R'){
               reversed = !reversed; // false와 true의 전환환
            }
            else if (R == 'D'){       
                if (D1.empty()){
                    cout << "error\n";
                    error = true;
                    break;
                }

                if (reversed) {
                    D1.pop_back();
                }
                else {
                    D1.pop_front();
                }
            }

        }

        if (!error) {
            cout << '[';
           while (!D1.empty()){
            if (reversed){
                cout << D1.back();
                D1.pop_back();
            }
            else {
                cout << D1.front();
                D1.pop_front();
            }
            if (!D1.empty()) cout << ',';
           }

            cout << "]\n";
        }

    }
    
 
}
