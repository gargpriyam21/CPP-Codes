//
//  2.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//
//MATRIX ADDITION

#include <iostream>
using namespace std;

int main()
{
    int m1[3][3],m2[3][3],m3[3][3];
    int i,j;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>m1[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>m2[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
}