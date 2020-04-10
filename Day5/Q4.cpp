//
//  Q4.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile 10 Q4

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,n=10;
    cin>>a>>b;
    do{
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\n";
        n--;
    }while(n>0);
    return 0;
}
