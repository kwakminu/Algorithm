#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count = 0;
    deque<int> D;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++){
        D.push_back(i);
    }
    for (int i = 0; i < M; i++){
        int k;
        cin >> k; 

        int target_idx = find(D.begin(), D.end(), k) - D.begin();
        int left_moves = target_idx;
        int right_moves = D.size() - target_idx;

        if (left_moves < right_moves){
            while (D.front() != k){
                D.push_back(D.front());
                D.pop_front();
                count++;
            }
            D.pop_front();
        }
        else {
            while (D.front() != k){
                D.push_front(D.back());
                D.pop_back();
                count++;
            }
            D.pop_front();
        }


    }

    cout << count;

}