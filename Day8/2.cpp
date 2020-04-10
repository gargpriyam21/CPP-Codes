//
//  2.cpp
//  
//
//  Created by Neera on 19/06/16.
//
//

#include <iostream>
using namespace std;

int Factorial(int x)
{
    if(x==1)
        return 1;
    else
        return x*Factorial(x-1);
}
int main()
{
    int x,fact;
    cin>>x;
    fact = Factorial(x);
    cout<<fact<<endl;
}
