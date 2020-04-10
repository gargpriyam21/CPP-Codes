//
//  3.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile Q3

#include <iostream>
using namespace std;

int main()
{
    int a,b=1,c;
    cin>>a;
    do{
        c=a*b;
        cout<<a<<"*"<<b<<"="<<c<<endl;
        b++;
    }while(b<=10);
        return 0;
}