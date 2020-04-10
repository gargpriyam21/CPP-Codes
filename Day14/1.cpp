//
//  1.cpp
//  
//
//  Created by Neera on 29/06/16.
//
//
//REVERSE

#include <iostream>
using namespace std;
int strlen(char s[]);
int main()
{
    char s1[100],s2[100];
    int l,i=0,j;
    cin.getline(s1,100);
    l=strlen(s1)-1;
    while(l>=0){
        if(s1[l]==' '||(l==0)){
            if(l==0)
                j=l;
            else if(s1[l]==' ')
                j=l+1;
            while((s1[j]!='\0')&&(s1[j]!=' '))
                s2[i++]=s1[j++];
            s2[i]=' ';
            i++;
        }
        l--;
    }
    s2[i]='\0';
    cout<<s2<<endl;
}
int strlen(char s[])
{
    int p=0;
    while(s[p]!=0){
        p++;
    }
    return p;
}