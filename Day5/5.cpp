//
//  5.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile 5

#include <iostream>
using namespace std;

int main()
{
    int l=1,m,n;
    cin>>m>>n;
    do{
        l=l*m;
        n--;
    }while(n>0);
    cout<<l<<"\n";
    return 0;
}
