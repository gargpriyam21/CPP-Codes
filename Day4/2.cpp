//
//  2.cpp
//  
//
//  Created by Neera on 10/06/16.
//
//
//Sum Of First & Last Digit

#include <iostream>
using namespace std;

int main()
{
    int n,r,sum;
    cin >> n;
    r=n%10;
    while (n>10){
        n=n/10;
    }
    sum=n+r;
    cout << sum << "\n";
    return 0;
}
