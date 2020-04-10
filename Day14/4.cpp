//
//  4.cpp
//  
//
//  Created by Neera on 02/07/16.
//
//
//Shrink Length

#include <iostream>
using namespace std;

int main()
{
    int n,count[20],i,j;
    char a[200];
    cout<<"Enter The String: ";
    cin>>a;
    
    n=strlen(a);
    
    for(i=0;i<n;i++){
        count[i]=1;
    }
    i=0;
    j=0;
    while(i<n&&j<n){
        if(a[i]==a[i+1]){
            i++;
            count[j]++;
        }
        else{
            if(count[j]>1){
                cout<<count[j];
            }
            cout<<a[j];
            i++;
            j=i;
        }
    }
    cout<<"\n";
    return 0;
}
