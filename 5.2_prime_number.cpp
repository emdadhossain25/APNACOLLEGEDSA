#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    bool flag=0;
    // as sqrt(n) will produce numbers range lesser and all the numbers will be checked which is prime upto n number can be divisible
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"not a prime number"<<endl;
            flag=1;
            break;
        }
    
    }

    if (!flag)
    {
        cout<<"prime number"<<endl;
    }
    
    
    return 0;
}