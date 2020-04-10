//
//  Q5.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile 10 Q5

#include <iostream>
using namespace std;

int main()
{
    int i=2,j,flag;
    do{
        flag=0;
        j=2;
        do{
            if(i%j==0){
                flag=1;
                break;
            }
            j++;
        }while(j<=i/2);
        if(!flag){
            cout<<i<<"\n";
        }
        i++;
    }while(i<=50);
    return 0;
}
