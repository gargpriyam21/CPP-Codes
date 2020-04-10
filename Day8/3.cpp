//
//  3.cpp
//  
//
//  Created by Neera on 19/06/16.
//
//

#include <iostream>
using namespace std;

int Power(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x*Power(x,y-1);
}
int main()
{
    int x,y,fact;
    cin>>x>>y;
    fact = Power(x,y);
    cout<<fact<<endl;
}

