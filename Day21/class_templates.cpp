#include <iostream>
using namespace std ;

template<typename T_1, typename T_2>
class Abc
{
	T_1 x ;
	T_2 y ;
public:
	Abc( T_1 a, T_2 b )
	{
		x = a ;
		y = b ;
	}
	void Show( )
	{
		cout << x << ' ' << y << endl ;
	}
};
int main()
{
	Abc <int, double>A(2, 5.6) ;
	A.Show() ;
	
	Abc <double, long>B(3.66, 3000) ;
	B.Show() ;
	
	return 0 ;
}
	
		