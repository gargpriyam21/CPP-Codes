//
//  3.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//
//MATRIX MULTIPLICATION

#include <iostream>
using namespace std;

int main()
{
    int m1[3][3],m2[3][3],m3[3][3];
    int i,j,k;
    
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
            m3[i][j]=0;
            for(k=0;k<3;k++){
            m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<m3[i][j];
        }
        cout<<endl;
    }
}
