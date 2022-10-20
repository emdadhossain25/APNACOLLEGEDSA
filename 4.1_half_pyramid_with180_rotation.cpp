//   half pyramid with 180 rotation
//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int num,countofStars;
    cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     countofStars=i;
    //     for (int j = num; j >i; j--)
    //     {
    //        cout<<" ";
    //     }
    //     while (countofStars)
    //     {
    //         cout<<"*";
    //         countofStars--;
    //     }
        

    //     cout << endl;
    // }

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=num; j++)
        {
            if (j<=num-i)
            {
               cout<<" ";
            }else{
                cout<<"*";
            }
            
        }
        cout<<endl;
        
    }
    

    return 0;
}