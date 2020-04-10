#include <iostream>
using namespace std ;

class Person
{
	char name[20] ;
	int age ;
	float salary ;
	static int count ;
public:
	void Get( )
	{
		count += 1 ;
		cin >> name >> age >> salary ;
	}
	static int count_objects( )
	{
		return count ;
	}
};
//static's declaration
int Person::count = 10;
int main()
{
	Person p1, p2, p3 ;
	
	p1.Get() ;
	p2.Get() ;
	cout << Person::count_objects() ;
	//cout << p1.count_objects() ;
	
	return 0 ;
}
