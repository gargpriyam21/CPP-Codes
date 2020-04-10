//
//  multiple_inheritance.cpp
//  
//
//  Created by Neera on 07/07/16.
//
//

#include <iostream>


using namespace std ;

class Lion
{
protected:
    int lion_no ;
public:
    void Get_lion( )
    {
        cin >> lion_no ;
    }
};
class Tiger
{
protected:
    int tiger_no ;
public:
    void Get_tiger( )
    {
        cin >> tiger_no ;
    }
};
class Zoo:public Lion, public Tiger
{
public:
    void Show( )
    {
        cout << lion_no << ' ' << tiger_no << endl ;
    }
};
int main()
{
    Zoo z ;
    z.Get_lion() ;
    z.Get_tiger() ;
    
    z.Show() ;
    
    return 0 ;
}
