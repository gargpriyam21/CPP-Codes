//
//  4.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile Q4

#include <iostream>
using namespace std;

int main()
{
    int a,i=1;
    cin>>a;
    do{
        i=a*i;
        a--;
    }while(a>0);
    cout<<i<<"\n";
    return 0;
}
