//
//  3.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;
void cat_string(char *p1,char *p2);
int main()
{
    char s1[100], s2[200];
    char *p1,*p2;
    cin>>s1;
    cin>>s2;
    p1=&s1[0];
    p2=&s2[0];
    cat_string(p1,p2);
    cout<<p1<<endl;
}
void cat_string(char *p1,char *p2)
{
    int i,j;
    for(i=0;*p1!='\0';i++){
        p1++;
    }
    
    for(j=0;*p2!='\0';i++,j++){
        *p1=*p2;
        p1++;
        p2++;
    }
}