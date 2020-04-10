//
//  friend.cpp
//  
//
//  Created by Neera on 07/07/16.
//
//

#include <iostream>
using namespace std ;

class Wife ; //class declaration
class Husband
{
    int hsal ;
public:
    void Get_sal( )
    {
        cin >> hsal ;
    }
    //friend's declaration
    friend void Add( Husband, Wife ) ;
};
class Wife
{
    int wsal ;
public:
    void Get_sal( )
    {
        cin >> wsal ;
    }
    friend void Add( Husband, Wife ) ;
};
void Add( Husband h, Wife w )
{
    cout << "The combined salary: " << h.hsal + w.wsal << endl ;
}
int main()
{
    Husband h ;
    Wife w ;
    
    h.Get_sal() ;
    w.Get_sal() ;
    
    Add(h, w) ;
    
    return 0 ;
}
