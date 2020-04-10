//
//  4.cpp
//  
//
//  Created by Neera on 19/06/16.
//
//

#include  <iostream>
using namespace std;

int sum(int n)
{
    if(n>=1)
        return sum(n/10);
    else
        return 0;
}
int main()
{
    int n,Result;
    cin>>n;
    Result = n%10 + sum(n);
    cout<<Result<<endl;
}

