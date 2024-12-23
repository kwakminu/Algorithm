#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    int X;

    cin >> N;
    cin >> X;

    vector<int> v(N);

    for (int i = 0 ; i < N; i++)
    {
        cin >> v[i];
    }

    for (int k = 0; k < N; k++)
    {
        if (v[k] < X)
        {
            cout << v[k] << " ";
        }
    }
}