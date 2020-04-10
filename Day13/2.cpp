//
//  2.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;
void copy_string(char *p1,char *p2);
int main()
{
    char s1[100], s2[100];
    char *p1, *p2;
    cin>>s1;
    p1=&s1[0];
    p2=&s2[0];
    copy_string(p1,p2);
    cout<<p2<<endl;
}
void copy_string(char *p1,char *p2)
{
        int i=0;
    while(*p1!='\0'){
        *p2=*p1;
        i++;
        p1++;
        p2++;
    }
}

