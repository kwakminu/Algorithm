#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v1(4);
    vector<int> v2(4);
    vector<int> v3(4);

    int bae1 = 0;
    int bae2 = 0;
    int bae3 = 0;
    int dng1 = 0;
    int dng2 = 0;
    int dng3 = 0;

    for (int k ; k < 4; k++)
        cin >> v1[k];
    for (int k ; k < 4; k++)
        cin >> v2[k];
    for (int k ; k < 4; k++)
        cin >> v3[k];
    
        
    for (int l; l < 4; l++)
    {
            if (v1[l] == 1)
                dng1++;
            else
                bae1++;
        
 
        
    } 

     if (bae1 == 1 && dng1 ==3)
            cout << "A\n";
        else if (bae1 == 2 && dng1 == 2)
            cout << "B\n";
        else if (bae1 == 3 && dng1 == 1)
            cout << "C\n";
        else if (bae1 == 4)
            cout << "D\n";
        else
            cout << "E\n";  


    for (int l; l < 4; l++)
    {
            if (v2[l] == 1)
                dng2++;
            else
                bae2++;
          
        
    } 

    if (bae2 == 1 && dng2 ==3)
          cout << "A\n";
    else if (bae2 == 2 && dng2 == 2)
          cout << "B\n";
     else if (bae2 == 3 && dng2 == 1)
         cout << "C\n";
    else if (bae2 == 4)
         cout << "D\n";
    else
         cout << "E\n";    

    for (int l; l < 4; l++)
    {
            if (v3[l] == 1)
                dng3++;
            else
                bae3++;
        

        
    } 

    if (bae3 == 1 && dng3 ==3)
          cout << "A\n";
    else if (bae3 == 2 && dng3 == 2)
          cout << "B\n";
     else if (bae3 == 3 && dng3 == 1)
         cout << "C\n";
    else if (bae3 == 4)
         cout << "D\n";
    else
         cout << "E\n";    


}
