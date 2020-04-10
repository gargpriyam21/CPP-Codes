#include <iostream>

using namespace std ;

void Add( int x, int y )
{
	cout << x+y << endl ;
}
void Add( double x, double y )
{
	cout << x+y << endl ;
}
int main()
{
	Add(2, 3) ;
	Add(4.44, 6.5) ;
	
	return 0 ;
}