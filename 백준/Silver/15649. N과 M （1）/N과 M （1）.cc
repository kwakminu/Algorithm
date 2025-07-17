#include <bits/stdc++.h>

using namespace std;

int arr[10];
bool used[10];
int n, m;

void func(int k) {
    if (k == m) {
        for (int i = 0; i < m; i ++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++){
        if (used[i] == false) {
            arr[k] = i;
            used[i] = true;
            func(k+1);
            used[i] = false;
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);
} 