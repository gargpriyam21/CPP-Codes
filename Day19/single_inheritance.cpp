//
//  single_inheritance.cpp
//  
//
//  Created by Neera on 07/07/16.
//
//

#include <iostream>
using namespace std ;

class Base
{
    int x ;
public:
    int y ;
    void Get_xy( )
    {
        x = 10 ;
        y = 20 ;
    }
    int return_x( )
    {
        return x ;
    }
    void Show( )
    {
        cout << x << endl ;
    }
};
class Derived:private Base
{
    int z ;
public:
    void Mult( )
    {
        Get_xy() ;
        z = y * return_x() ;
    }
    void Display( )
    {
        Show() ;
        cout << y << ' ' << z << endl ;
    }
    
};
int main()
{
    Derived d ;
    
    d.Mult() ;
    d.Display() ;
    
    return 0 ;
}
/*
class Derived:public Base
{    int z;
public:
    void Mult( )
    {
        z = y * return_x() ;
    }
    void Display( )
    {
        cout << y << ' ' << z << endl ;
    }
};
int main()
{
    Derived d ;
    d.Get_xy() ;
    d.Mult() ;
    d.Show() ;
    d.Display() ;
    
    return 0 ;
}
*/