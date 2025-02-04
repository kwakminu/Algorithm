#include <bits/stdc++.h>
using namespace std;

int heap[100005];
int sz = 0; // heap에 들어있는 원소의 수

void push(int x){
  sz++;
  heap[sz] = x;
  int idx = sz;
  while(idx != 1){
    int par = idx/2;
    if(heap[par] <= heap[idx]) break;
    swap(heap[par], heap[idx]);
    idx = par;
  }
}

int top(){
  if (sz == 0) return 0;
  return heap[1];
}

void pop(){
  heap[1] = heap[sz];
  sz--;
  int idx = 1;
  while (2*idx <= sz){
    int lc = 2*idx, rc = 2*idx+1;
    int min_child = lc;
    if (rc <= sz && heap[rc] < heap[lc])
      min_child = rc;
    if(heap[idx] <= heap[min_child]) break;
    swap(heap[idx], heap[min_child]);
    idx = min_child;
  }
}


int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--){
    int x;
    cin >> x;
    if (x == 0){
      cout << top() << '\n';
      if (sz != 0) pop();
    }
    else {
      push(x);
    }
  }
}
