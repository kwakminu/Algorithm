#include <bits/stdc++.h>
using namespace std;

#define X first 
#define Y second  

tuple<string, int, int, int> tup[100005];

bool cmp(tuple<string, int, int, int> &a, tuple<string, int, int, int> &b){
    if (get<1>(a) == get<1>(b)){
        if(get<2>(a) == get<2>(b)) {
            if(get<3>(a) == get<3>(b)) {
                return get<0>(a) < get<0>(b);
            }
            else {
                return get<3>(a) > get<3>(b);
            }
        }
        else {
            return get<2>(a) < get<2>(b); 
        }
    }
    else {
        return get<1>(a) > get<1>(b);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i ++) {
        string k;
        int a, b, c;
        cin >> k >> a >> b >> c;
        tup[i] = make_tuple(k, a, b, c);
    }
    
    sort(tup, tup + N, cmp);

    for (int i = 0; i < N; i ++){
        cout << get<0>(tup[i]) << '\n';
    }


    return 0;
}