//
//  4.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//TRANSPOSE

#include <iostream>
using namespace std;

int main()
{
    int m[3][3];
    int i,j,temp;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>m[i][j];
        }
    }
    
    for(i=1;i<3;i++){
        for(j=0;j<i;j++){
            temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}