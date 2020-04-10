//
//  Switch.cpp
//  
//
//  Created by Neera on 09/06/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    int i ;
    cin >> i;
    switch (i){
        case 0 : cout << "Zero";
            break;
            
        case 1 : cout << "One";
            break;
            
        case 2 : cout << "Two";
            break;
            
        default : cout << "Wrong Value";
    }
    return 0;
}
