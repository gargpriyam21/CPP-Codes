//
//  2.cpp
//  
//
//  Created by Neera on 02/07/16.
//
//
//Alphabettically

#include <iostream>
using namespace std;

int main()
{
    char ch,input[100],output[100];
    int no[26]={0},n=0,c,t,x;
    cout<<"Enter The String"<<endl;
    cin>>input;
    while(input[n]!=0){
        n++;
    }
    for(c=0;c<n;c++){
        ch=input[c]-'a';
        int d=ch;
        no[d]++;
    }
    t=0;
    for(ch='a';ch<='z';ch++){
        x=ch-'a';
        for(c=0;c<no[x];c++){
            output[t]=ch;
            t++;
        }
    }
    output[t]='\0';
    cout<<output;
    return 0;
}

