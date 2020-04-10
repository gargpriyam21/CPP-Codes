//
//  Q1F.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//for 10 Q1

#include <iostream>
using namespace std;

int main()
{
    int n,r,sum;
    cin>>n;
    for(sum=0;n>0;){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<sum<<"\n";
    return 0;
}
