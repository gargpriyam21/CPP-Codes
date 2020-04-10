#include <iostream>

using namespace std ;

class Base
{
public:
	virtual void Show( )    //
	{
		cout << "base class" ;
	}
	virtual void Display( )
	{
		cout << "base class" ;
	}
};
class Derived:public Base
{
public:
	void Show( )
	{
		cout << "Derived class" ;
	}
	void Display( )
	{
		cout << "Derived class" ;
	}
};
int main()
{
	Base *p ;
	p = new Base ;
	p->Show() ;
	p->Display() ;
	delete p ;
	
	p = new Derived ;
	p->Show() ;
	p->Display() ;
	delete p ;
	
	/*Base b ;
	Base *p ;
	p = &b ;
	p->Show() ;
	p->Display() ;
	
	Derived d ;
	p = &d ;
	p->Show() ;
	p->Display() ;
	*/
	return 0 ;
}