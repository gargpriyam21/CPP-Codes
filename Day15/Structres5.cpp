//
//  Structres5.cpp
//  
//
//  Created by Neera on 30/06/16.
//
//

#include <iostream>
using namespace std;

struct complexx
{
    int a;
    int b;
};
complexx Add(complexx , complexx);
int main()
{
    complexx c1,c2,c3;
    c1.a=3,c1.b=2;
    c2.a=1,c2.b=7;
    c3=Add(c1,c2);
    cout<<c3.a<<"\n"<<c3.b<<endl;
}
complexx Add(complexx c1, complexx c2)
{
    complexx temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

