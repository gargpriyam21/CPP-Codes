//
//  4.cpp
//  
//
//  Created by Neera on 10/06/16.
//
//
//FIBONICII

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,n=10;
    cin>>a>>b;
    while (n>0){
        c=a+b;
        a=b;
        b=c;
        cout << c << "\n";
        n--;
    }
    return 0;
}
