#include <bits/stdc++.h>

using namespace std;

int arr[1000005];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   int n;
   cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    cout << *min_element(arr, arr + n) << ' ';    
    cout << *max_element(arr, arr + n);

} 