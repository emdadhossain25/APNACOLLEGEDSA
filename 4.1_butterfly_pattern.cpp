#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// butterfly pattern ->  this will be dividied into two parts
// first part we count number of rows n
// first part wen count number of columns 2n
// we count spaces 2n-2
// we count stars from 1 to number of rows

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // number of stars in the starting of the first half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // number of spaces in rows for example if i is 1 then there will be 2*4-2*1 = 6 spaces (considering input is n = 4)
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }

        // number of stars in the ending of the first half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        // number of stars in the starting of the first half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // number of spaces in rows for example if i is 1 then there will be 2*4-2*1 = 6 spaces (considering input is n = 4)
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }

        // number of stars in the ending of the first half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}