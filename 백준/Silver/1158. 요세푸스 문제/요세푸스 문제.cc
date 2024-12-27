#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   int N, K;
   cin >> N >> K;

   list<int> L;
   for (int i = 1; i <= N; i++){
    L.push_back(i);
   }
   auto cursor = L.begin();

   cout << '<'; 
   while (L.size() != 0){
    for (int i = 0; i < K-1; i++){
        cursor++;
        if (cursor == L.end()) cursor = L.begin();
    }
    cout << *cursor;
    if (L.size() > 1) cout <<", ";
    cursor = L.erase(cursor);
    if (cursor == L.end()) cursor = L.begin();

   }
   cout << '>';


}
