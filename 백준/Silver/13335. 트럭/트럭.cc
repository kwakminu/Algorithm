#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w, L; // n : 다리를 건너는 트럭의 수, w : 다리의 길이, L : 다리의 최대 하중
    cin >> n >> w >> L;
    
    queue<int> truck;
    for (int i = 0; i < n; i ++) {
        int k;
        cin >> k;
        truck.push(k);
    }

    deque<int> bridge(w, 0);
    int time = 0;
    int cur_weight = 0; // 다리 위 트럭들의 현재 무게

    while (!truck.empty() || cur_weight > 0) {
        time ++;

        //1. 트럭 내보내기 (항상 내보내긴 하는 것, 0으로 되면 그냥 현상 유지 되는 느낌)
        int gonetruck = bridge.front();
        bridge.pop_front();
        cur_weight -= gonetruck;

        // 2. 새로운 트럭 올릴 수 있는지 확인
        if (!truck.empty()) {
            int next_truck = truck.front();
            if (cur_weight + next_truck <= L) {
                bridge.push_back(next_truck);
                cur_weight += next_truck;
                truck.pop();
            }
            else {
                bridge.push_back(0);
            }
        } else {
            bridge.push_back(0);
        }
    }

    cout << time;

    return 0;
}