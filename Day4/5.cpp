//
//  5.cpp
//  
//
//  Created by Neera on 10/06/16.
//
//
//PRIME NUMBERS

#include <iostream>
using namespace std;

int main()
{
    int x,i=1,a;
    while (i<=50){
        x=0;
        a=1;
        while (a<=i){
        if (i%a==0)
            x++;
            a++;
        }
    if (x==2)
        cout << i << "\n";
        i++;
    }
    return 0;
}
