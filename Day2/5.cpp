//
//  5.cpp
//  
//
//  Created by Neera on 08/06/16.
//
//
//MARKS AND GRADE

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f ;
    cout << "enter the marks of 5 subjects\n" ;
    cin >>a>>b>>c>>d>>e ;
    f=a+b+c+d+e ;
    
    if (f>=450) {
        cout << "A" ;
    }
    else if (f>=350&&f<450) {
        cout << "B" ;
    }
    else if (f>=250&&f<350) {
        cout << "C" ;
    }
    else {
        cout << "Try Again" ;
    }
    return 0;
}
