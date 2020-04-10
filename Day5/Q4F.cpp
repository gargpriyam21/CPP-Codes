
//
//  Q4F.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//for 10 Q4

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>a>>b;
    for(n=10;n>0;n--){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\n";
    }
    return 0;
}
