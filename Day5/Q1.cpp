//
//  Q1.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile Q-10-1

#include <iostream>
using namespace std;

int main()
{
    int n,r,sum=0;
    cin>>n;
    do{
        r=n%10;
        sum=sum+r;
        n=n/10;
    }while(n>0);
    cout<<sum<<"\n";
    return 0;
}
