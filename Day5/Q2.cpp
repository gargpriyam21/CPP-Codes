//
//  Q2.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile 10 Q2

#include <iostream>
using namespace std;

int main()
{
    int n,r,sum;
    cin>>n;
    r=n%10;
    do{
        n=n/10;
    }while(n>10);
    sum=n+r;
    cout<<sum<<"\n";
    return 0;
}
