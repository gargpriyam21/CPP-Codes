//
//  Q-5.cpp
//  
//
//  Created by Neera on 09/06/16.
//
//
//POWER

#include <iostream>
using namespace std;

int main()
{
    int m,n,l=1;
    cin >>m>>n ;
    while (n>0){
        l=l*m;
        n--;
    }
    cout << l << "\n" ;
    return 0;
}
