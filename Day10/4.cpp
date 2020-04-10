//
//  4.cpp
//  
//
//  Created by Neera on 22/06/16.
//
//
//STRING COMPARE

#include <iostream>
using namespace std;

int main( )
{
    char s1[100], s2[100];
    
    cout<<"Enter first string: ";
    cin>>s1;
    
    cout<<"Enter second string: ";
    cin>>s2;
    
    int i;
    for (i=0;s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0';i++){
    }
    
    if(s1[i]-s2[i]==0){
        cout<<"0"<<endl;
    }
    else if(s1[i]-s2[i]<0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
}
