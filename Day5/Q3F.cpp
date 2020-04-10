//
//  Q3F.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//for 10 Q3

#include <iostream>
using namespace std;

int main()
{
    int i,s;
    cin >> i;
    for(;i>0;){
        s=i%10;
        cout<<s<<"";
        i=i/10;
    }
    return 0;
}
