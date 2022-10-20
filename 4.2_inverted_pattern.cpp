/**
 * @file 4.2_inverted_pattern.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-01
 * 1 2 3 4 5
 * 1 2 3 4
 * 1 2 3
 * 1 2
 * 1
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j =1; j <=n-i+1; j++)
        {
            
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}