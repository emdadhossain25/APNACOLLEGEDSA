/**
 * @file 4.1_hollow_rectangle.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-09-29
 *  ****
 *  *  *
 *  *  *
 *  ****
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int rows, col;
    cin >> rows >> col;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == rows)
            {
                cout << "*";
            }
            else if (j == 1 || j == col)
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