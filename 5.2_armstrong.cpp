// define armstrong-> cube of all digits and then adding them returns the same number
// for example 153 is armstrong number;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int sum = 0;
    int originaln=n;

    while (n)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }

    if (sum == originaln)
        cout << "armstrong" << endl;
    else
        cout<< "not armstrong"<<endl;

    return 0;
}