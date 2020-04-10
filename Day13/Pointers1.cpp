//
//  Pointers1.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    int x=10;
    int *ptr;
    
    ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=*ptr+10;
    cin>>*ptr;
}
