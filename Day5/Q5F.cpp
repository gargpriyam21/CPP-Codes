//
//  Q5F.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//for 10 Q5

#include <iostream>
using namespace std;

int main()
{
    int i,j,flag;
    for(i=2;i<=50;i++){
        for(j=2,flag=0;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<i<<"\n";
        }
    }
    return 0;
}
