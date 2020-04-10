//
//  Pointers5.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;
void Fun(int *p);
int main()
{
    int x=10;
    int *p=&x;
    Fun(p);
    cout<<x<<endl;
}
void Fun(int *p)
{
    *p=*p+10;
}