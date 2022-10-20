//       1
//     2 1 2
//   3 2 1 2 3
//  4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
// space is n-i
// col is n to i-1 then i to n

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
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = n - (n - i); j > 1; j--)
        {
            cout << j << " ";
        }

        for (int j = 1; j <= n - (n - i); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int j;
//         for (j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         int k = i;
//         for (; j <= n; j++)
//         {
//             /* code */
//             cout<<k--<<" ";
//         }

//         k=2;
//         for (; j <=n+i-1; j++)
//         {
//            cout<<k++<<" ";
//         }
        
//         cout<<endl;
//     }

//     return 0;
// }