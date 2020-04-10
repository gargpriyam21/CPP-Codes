//
//  1.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile Q1

#include <iostream>
using namespace std;

int main()
{
    int i=0;
    do{
        if(i%2==0){
            cout << i << "\n";
        }
        i++;
    }while(i<=50);
    return 0;
}
