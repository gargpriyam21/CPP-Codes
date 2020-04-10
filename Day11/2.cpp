//
//  2.cpp
//  
//
//  Created by Neera on 22/06/16.
//
//
//To Change The Case of a String 

#include <iostream>
using namespace std;

int main()
{
    char s[100];
    int i;
    cout<<"Enter The String: ";
    cin>>s;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }
        else
            s[i]-=32;
    }
    cout<<s<<endl;
    return 0;
}
