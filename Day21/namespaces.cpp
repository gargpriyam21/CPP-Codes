#include <iostream>

using namespace std ;

namespace first
{
	int x = 10 ;
}
namespace second
{
	int x = 20 ;
}
int main()
{
	cout << first::x << endl ;
	cout << second::x << endl ;
	return 0 ;
}