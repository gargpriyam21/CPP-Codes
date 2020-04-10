//
//  3.cpp
//  
//
//  Created by Neera on 02/07/16.
//
//
//Occurences

#include <iostream>
using namespace std;

int main()
{
    char s1[100];
    int c=0,count[26]={0},d;
    cout<<"Enter The String: ";
    cin.getline(s1,100);
    while(s1[c]!='\0'){
        if(s1[c]>='a'&&s1[c]<='z'){
            d=s1[c]-'a';
            count[d]++;
            c++;
        }
    }
    for(c=0;c<26;c++){
        if(count[c]!=0){
            char d=c+'a';
            cout<<d<<" occurs "<<count[c]<<" times in entered string"<<endl;
        }
    }
    return 0;
}
