//
//  Structres4.cpp
//  
//
//  Created by Neera on 30/06/16.
//
//

#include <iostream>
using namespace std;

struct Person
{
    char name[20];
    int age;
};
struct emp
{
    int ecode;
    Person p;
};
int main()
{
    emp e;
    e.ecode=5;
    e.p.age=25;
    strcpy(e.p.name,"ABC");
    
    cout<<e.ecode<<e.p.age<<e.p.name<<endl;
}