#include <iostream>
using namespace std ;

//template<typename T>
template<typename T_1, typename T_2> 
void Add( T_1 x, T_2 y )
{
	cout << x+y << endl ;
}
int main()
{
	Add<int, double>(4, 5) ;
	Add<double, long>(5.6, 700) ;
	
	return 0 ;
}