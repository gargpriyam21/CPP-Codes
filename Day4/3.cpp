//
//  3.cpp
//  
//
//  Created by Neera on 10/06/16.
//
//
//Reverse Of A Number

#include <iostream>
using namespace std;

int main()
{
    int i,s;
    cin >> i;
    while (i>0){
        s=i%10;
        cout << s << "";
        i=i/10;
    }
    return 0;
}
