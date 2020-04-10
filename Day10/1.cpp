//
//  1.cpp
//  
//
//  Created by Neera on 22/06/16.
//
//
//STRING LENGTH

#include <iostream>
using namespace std;

int strlen(char s[]);
int main()
{
    int i=0;
    char s[100];
    cin>>s;
    
    while(s[i]!='\0'){
        i++;
    }
    cout<<i<<endl;
    return 0;
}
