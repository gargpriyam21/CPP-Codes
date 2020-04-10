//
//  1.cpp
//  
//
//  Created by Neera on 22/06/16.
//
//
//Occurence of a Character in a String

#include <iostream>
using namespace std;

int main()
{
    char s[100],x;
    int i,count=0;
    cout<<"Enter The String: ";
    cin>>s;
    cout<<"Enter The Character: ";
    cin>>x;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==x){
            count++;
    }
    }
    cout<<count<<endl;
    return 0;
}
