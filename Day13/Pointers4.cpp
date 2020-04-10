

//
//  Pointers4.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int *p,i;
    p=&arr[0];
    
    for(i=0;i<10;i++){
        cin>>*(p+i);
    }
    for(i=0;i<10;i++){
        cout<<*(p+i)<<endl;
    }
}
