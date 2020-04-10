//
//  4.cpp
//  
//
//  Created by Neera on 08/06/16.
//
//
//AGE GROUP

#include <iostream>
using namespace std;

int main()
{
    int i ;
    cin >> i ;
    
    if (i>0&&i<13) {
        cout << "CHILD" ;
    }
    else if (i>=13&&i<18) {
        cout << "TEENAGER" ;
    }
    else {
        cout << "ADULT" ;
    }
    return 0;
}
