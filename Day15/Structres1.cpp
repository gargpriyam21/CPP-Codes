//
//  Structres1.cpp
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
    float salary;
};
int main()
{
    Person p;
    p.age=25;
    p.salary=20000000;
    strcpy(p.name,"PRIYAM");
    cout<<p.name<<" "<<p.age<<" "<<p.salary<<endl;
}
