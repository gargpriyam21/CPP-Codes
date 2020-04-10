//
//  Array1.cpp
//  
//
//  Created by Neera on 21/06/16.
//
//

#include <iostream>
using namespace std;
void Fun(int a[]);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    
    Fun(arr);
    
    for(i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}
void Fun(int a[])
{
    int i;
    for(i=0;i<10;i++){
        a[i]+=1;
    }
}
