//
//  4.cpp
//  
//
//  Created by Neera on 24/06/16.
//
//

#include <iostream>
using namespace std;
void comp_string(char *p1,char *p2);
int main( )
{
    char s1[100], s2[100];
    char *p1, *p2;
    cin>>s1;
    cin>>s2;
    p1=&s1[0];
    p2=&s2[0];
    comp_string(p1,p2);
}
void comp_string(char *p1,char *p2)
{
    int i;
    for(i=0;*p1==*p2&&*p1!='\0'&&*p2!='\0';i++){
        p1++;
        p2++;
    }
    
    if(*p1-*p2==0){
        cout<<"0"<<endl;
    }
    else if(*p1-*p2<0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
}