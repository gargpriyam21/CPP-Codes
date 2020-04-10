//
//  Q-2.cpp
//  
//
//  Created by Neera on 09/06/16.
//
//
//50 to 1 Odd Numbers

#include <iostream>
using namespace std;

int main()
{
    int i=50 ;
    while (i<=50){
        if (i%2==1)
            cout<< i << "\n" ;
        --i ;
    }
    return 0;
}
