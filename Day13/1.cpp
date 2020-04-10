//
//  1.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;

int main()
{
    char s[10];
    char *p;
    cin>>s;
    p=&s[0];
    cout<<strlen(p)<<endl;
}
int strlen(char *p)
{
    int i=0;
    while(*p!='\0'){
        i++;
        p++;
    }
    return i;
}
