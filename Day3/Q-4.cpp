//
//  Q-4.cpp
//
//
//  Created by Neera on 09/06/16.
//
//
//FACTORIAL

#include <iostream>
using namespace std;

int main()
{
	int a, i = 1;
	cin >> a ;

	while (a > 0) {
		i = a * i;
		--a ;
	}
	cout << i;
	return 0;
}
