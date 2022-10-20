#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int reverse =0;
    while (n)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}