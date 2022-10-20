#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,count=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << count<<" ";
                count++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    count=0;

    return 0;
}