#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    
    int ym = 0;
    int mm = 0;

    for (int i = 0; i < N; i ++) {
        int k;
        cin >> k;

        int y = 10 + ( ( k / 30 ) * 10 );
        int m = 15 + (( k / 60 ) * 15 );   
        
        ym += y;
        mm += m;
    }

    int ans = min(ym, mm);

    if (ym == mm) {
        cout << "Y M ";
    }
    else if (ans == ym) {
        cout << "Y ";
    }
    else {
        cout << "M ";
    }
    cout << ans;




}
