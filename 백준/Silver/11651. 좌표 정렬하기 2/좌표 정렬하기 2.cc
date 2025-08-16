#include <bits/stdc++.h>
using namespace std;

#define X first 
#define Y second  

pair<int, int> arr[100005];

bool cmp(const pair<int, int>& a, const pair<int,int>& b){
    if(a.second < b.second) return true;
    else if (a.second == b.second) {
        return (a.first < b.first);
    }
    else {
        return false;
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i ++) {
        cin >> arr[i].X >> arr[i].Y;
    }

    sort(arr, arr+N, cmp);
    for (int i = 0; i < N; i++ ){
        cout << arr[i].X << ' ' << arr[i].Y << '\n';
    }

    return 0;
}