#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string init;
        cin >> init;
        list<char> L;
        auto cursor = L.end();
        for (auto c : init) {
            if (c == '-') {
                if (cursor != L.begin()) {
                 cursor--;
                    cursor = L.erase(cursor);
                }
 
            }
            else if (c == '<'){
                if (cursor != L.begin()) cursor--;
            }
            else if (c == '>'){
                if (cursor != L.end()) cursor++;
            }
            else {
                L.insert(cursor, c);
            }
        

        }
        for (auto k : L) cout << k;
        cout << "\n";

    }

}
