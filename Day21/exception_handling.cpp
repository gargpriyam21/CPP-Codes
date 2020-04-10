#include <iostream>

using namespace std ;

int main()
{
	int a, b, c ;
	cin >> a >> b ;
	
	try{
		if (b == 0)
			throw b ;
		
		c = a/b ;
		cout << c << endl ;
	}
	catch( int i )
	{
		cout << "Can't divide by " << i << endl ;
	}
	return 0 ;
}