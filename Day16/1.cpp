//
//  1.cpp
//  
//
//  Created by Neera on 01/07/16.
//
//
//OBJECT ORIENTED PROGRAM(OOP's)

#include <iostream>
#include <cstring>

using namespace std ;

class Person
{
private: //visibility modes
    char name[20] ;
    int age ;
    float salary ;
    
public:
    Person( ) // Default constructor
    {
        strcpy(name, "Nothing") ;
        age = salary = 0 ;
    }
    //Parameterized constructor
    Person( char nm[], int a, float f )
    {
        strcpy(name, nm) ;
        age = a ;
        salary = f ;
    }
    //copy constructor
    Person( Person &p )
    {
        strcpy(name, p.name) ;
        age = p.age ;
        salary = p.salary ;
    }
    void Get( )//methods
    {
        cin >> name >> age >> salary ;
    }
    void Show( )
    {
        cout << name << ' ' << age << ' ' << salary << endl ;
    }
    ~Person( )//tilde //Destructor
    {
        cout << "Deleting " << name << endl ;
    }
};
int main()
{
    Person p, p2 ;//objects
    
    Person p3("Abc", 23, 23000) ;
    Person p4("Def", 24, 24000) ;
    Person p5(p3) ;
    
    //p.Get() ;
    //p.age = 25 ;
    p.Show() ;
    p2.Show() ;
    p3.Show() ;
    p4.Show() ;
    p5.Show() ;
    
    return 0 ;
}
