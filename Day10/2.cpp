//
//  2.cpp
//  
//
//  Created by Neera on 22/06/16.
//
//
//STRING COPY

#include <iostream>
using namespace std;
int main()
{
    char s1[100], s2[100];
    int i;
    cout << "Enter string s1: ";
    cin >> s1;
    for(i=0; s1[i]!='\0'; ++i){
        s2[i]=s1[i];
    }
    cout << "String s2: " << s2 << endl;
    return 0;
}
