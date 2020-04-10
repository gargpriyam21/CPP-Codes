//
//  3.cpp
//  
//
//  Created by Neera on 22/06/16.
/
//
//STRING CONCATENATION

#include <iostream>
using namespace std;

int main()
{
    char s1[200], s2[100];
    int i, j;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    for(i=0; s1[i]!='\0'; ++i);
    
    for(j=0; s2[j]!='\0'; ++j, ++i){
        s1[i]=s2[j];
    }
    s1[i] = '\0' ;
    cout << "After concatenation: " << s1 << endl;
    return 0;
}
