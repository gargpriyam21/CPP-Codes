//
//  5F.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//for Q5

#include <iostream>
using namespace std;

int main()
{
    int l,m,n;
    cin>>m>>n;
    for(l=1;n>0;n--){
        l=l*m;
    }
    cout<<l<<"\n";
    return 0;
}
