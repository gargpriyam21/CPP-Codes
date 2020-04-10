//
//  virtual_base_classes.cpp
//  
//
//  Created by Neera on 07/07/16.
//

#include <iostream>

using namespace std ;

class Base
{
protected:
    int base_var ;
};
class D1:virtual public Base
{
protected:
    int x ;
public:
    void Get_x( )
    {
        cin >> x ;
    }
};
class D2:virtual public Base
{
protected:
    int y ;
public:
    void Get_y( )
    {
        cin >> y ;
    }
};
class D3:public D1, public D2
{
public:
    void Get( )
    {
        cin >> base_var ;
    }
    void Show( )
    {
        cout << base_var << endl ;
        cout << x << ' ' << y << endl ;
    }
};
int main()
{
    return 0 ;
}