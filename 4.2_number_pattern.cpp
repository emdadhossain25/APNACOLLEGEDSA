//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

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
        for (int j = 1; j <=n-i; j++)
        {
           cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}