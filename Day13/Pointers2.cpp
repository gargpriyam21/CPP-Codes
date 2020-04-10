//
//  Pointers2.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    char a='A',b='B';
    char *p1=&a,*p2=&b;
    char t;
    
    t=*p1;
    *p1=*p2;
    *p2=t;
    cout<<*p1<<""<<*p2<<endl;
}
