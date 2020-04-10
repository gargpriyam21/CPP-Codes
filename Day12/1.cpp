//
//  1.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//
//MATRIX

#include <iostream>
using namespace std;

int main()
{
    int m[5][5];
    int i,j;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>m[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<m[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
