#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
 * @brief rhombus patterm
 *
 *     ***** 1 (n-i space) and n number of
 *    ***** 2
 *   ***** 3
 *  ***** 4
 * ***** 5
 *
 * @return int
 */
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}