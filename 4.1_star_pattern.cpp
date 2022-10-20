#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sol(int rows, int col){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int rows,col;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>col;
    sol(rows,col);

    return 0;
}