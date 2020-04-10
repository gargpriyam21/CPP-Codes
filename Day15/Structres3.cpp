//
//  Structres3.cpp
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
    Person *ptr;
    ptr=&p;
    
    (*ptr).age=25;
    ptr->salary=20000000;
    strcpy(ptr->name,"ABC");
    
    cout<<ptr->name<<ptr->age<<ptr->salary;
}
