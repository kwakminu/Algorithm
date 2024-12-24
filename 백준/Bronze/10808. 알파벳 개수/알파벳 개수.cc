#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    int alpha[27];
    fill (alpha, alpha+26, 0);

    cin >> a;


    for (int i = 0; i < a.length(); i++)
    {
      for (int k = 'a'; k <= 'z'; k++)
        {
            if (a[i] == k)
                alpha[k-'a']++;
        }
    }

    for (int k = 0; k<26; k++)
        cout << alpha [k] << ' ';

}
