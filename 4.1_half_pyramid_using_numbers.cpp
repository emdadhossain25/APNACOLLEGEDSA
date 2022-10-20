#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=i)
            {
                cout<<i;
            }else{
                cout<<" ";
            }
            
    
        }
        cout<<endl;
        
    }
    
    return 0;
}