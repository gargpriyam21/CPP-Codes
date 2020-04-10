//
//  1.cpp
//  
//
//  Created by Neera on 16/06/16.
//
//

#include <iostream>
using namespace std;

int sum(int n)
{
    if(n>0)
        return n%10 + sum(n/10);
    else
        return 0;
}
int main()
{
    int n,Result;
    cin>>n;
    Result = sum(n);
    cout<<Result<<endl;
}
