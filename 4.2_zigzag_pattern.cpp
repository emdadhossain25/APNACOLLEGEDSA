/**
 * @file 4.2_zigzag_pattern.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-10-15
 *
 *     *      *
 *   *   *  *   *
 * *      *       *
 *
 * @copyright Copyright (c) 2022
 *
 */

// zigzag pattern here n is 9 (number of stars)
// row numbers is fixed which is 3
// so i will iterate from 1 to 3
// where ever (row+column)%4 = 0 we will put star (plotting on a graph)
// where row ==2 and c%4==0 we will put star (example 2+4, 2+8 in graph)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((j + i) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}