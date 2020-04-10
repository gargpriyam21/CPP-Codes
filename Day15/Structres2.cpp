//
//  Structres2.cpp
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
    Person p[5];
    int i;
    for(i=0;i<5;i++){
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }
    for(i=0;i<5;i++){
        cout<<p[i].name<<" ";
        cout<<p[i].age<<" ";
        cout<<p[i].salary<<" "<<endl;
    }
}
