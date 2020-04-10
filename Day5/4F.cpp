//
//  4F.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//for Q4

#include <iostream>
using namespace std;

int main()
{
    int a,i;
    cin >> a;
    for(i=1;a>0;a--){
        i=a*i;
    }
    cout<<i<<"\n";
    return 0;
}
