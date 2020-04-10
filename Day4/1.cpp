//
//  1.cpp
//  
//
//  Created by Neera on 10/06/16.
//
//
//Sum Of All Digits

#include <iostream>
using namespace std;

int main()
{
    int n,r,sum=0;
    cin >> n;
    while (n>0){
        r=n%10 ;
        sum = sum+r;
        n=n/10;
    }
    cout << sum << "\n";
    return 0;
}
