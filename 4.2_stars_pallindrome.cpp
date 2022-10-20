//        *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    // for first pyramid we will print space from 1 to n-row, and * for from 1 to 2n-1
    // iteration of rows will start from 1 till n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // for the second [inverted] pyramid we print from 1 to row-1 spaces from 1 to 2n-1
    // iteration will start from n till 1

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}