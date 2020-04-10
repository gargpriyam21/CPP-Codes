//
//  2.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile Q2

#include <iostream>
using namespace std;

int main()
{
    int i=50;
    do{
        if (i%2==1){
            cout<<i<<"\n";
        }
        i--;
    }while(i<=50);
    return 0;
}
