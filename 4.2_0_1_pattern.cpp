// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     int n;
//     string nextElement;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 == 0 && j == 1)
//             {
//                 cout << "0 ";
//                 nextElement="1";
//             }
//             else if (i % 2 == 1 && j == 1)
//             {
//                 cout << "1 ";
//                 nextElement="0";
//             }else{
//                 if(i>1){
//                     cout<<nextElement<<" ";
//                     if (nextElement=="0")
//                     {
//                         nextElement="1";
//                     }else{
//                         nextElement="0";
//                     }

//                 }
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // when col+row is odd then value is 0
            if ((i + j) % 2)
            {
                cout << "0 ";
            }
            // when col+row is even then the value is 1
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }

    return 0;
}