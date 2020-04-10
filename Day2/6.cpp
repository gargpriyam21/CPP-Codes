//
//  6.cpp
//
//
//  Created by Neera on 08/06/16.
//
//
//TRIANGLE SIDES

#include <iostream>
using namespace std;

int main ()
{
    int a, b, c ;
    cout << "enter the sides of the triangles\n" ;
    cin >> a >> b >> c ;

    if (a == b && b == c && c == a) {
        cout << "Equilateral" ;
    }
    else if (a == b || b == c || c == a) {
        cout << "Isoceless" ;
    }
    else {
        cout << "Scalene" ;
    }
    cout << endl;
    return 0;
}
