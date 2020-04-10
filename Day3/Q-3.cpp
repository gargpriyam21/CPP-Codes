//
//  Q-3.cpp
//  
//
//  Created by Neera on 09/06/16.
//
//
//TABLE

#include <iostream>
using namespace std;

int main()
{
    int a,b=1,c ;
    cin >>a ;
    while (b<=10) {
        c=a*b;
        cout << a << "*" << b << " = " << c << endl ;
        ++b ;
    }
    return 0;
}