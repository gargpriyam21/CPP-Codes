//
//  Q3.cpp
//  
//
//  Created by Neera on 13/06/16.
//
//
//dowhile 10 Q3

#include <iostream>
using namespace std;

int main()
{
    int i,s;
    cin>>i;
    do{
        s=i%10;
        cout<<s<<"";
        i=i/10;
    }while (i>0);
    return 0;
}
