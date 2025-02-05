#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  multiset<int> s;
  int N, t;
  priority_queue<int> maxHeap;
  priority_queue<int, vector<int>, greater<>> minHeap;

  cin >> N;
  for (int i = 0; i < N; i ++){
    cin >> t;
    if (maxHeap.size() <= minHeap.size()){
      maxHeap.push(t);
    }
    else {
      minHeap.push(t);
    }
    if (!minHeap.empty() && minHeap.top() < maxHeap.top()) {
      minHeap.push(maxHeap.top()); // 큰 값을 옮김
      maxHeap.pop();
      maxHeap.push(minHeap.top()); // 작은 값을 옮김
      minHeap.pop();
    }
    cout << maxHeap.top() << '\n';
  }
  // 항상 원소들의 큰 쪽 절반은 minHeap에 저장되고, 작은 쪽 절반은 maxHeap에 저장되도록 관리
  
}
 