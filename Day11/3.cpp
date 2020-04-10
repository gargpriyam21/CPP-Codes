//
//  3.cpp
//  
//
//  Created by Neera on 22/06/16.
//
//
//To Delete a Character from the String

#include <iostream>
using namespace std;

int main()
{
    char s1[100],x;
    int i,j=0;
    cout<<"Enter the string: ";
    cin>>s1;
    cout<<"Enter the character you want to delete: ";
    cin>>x;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]!=x){
            s1[j]=s1[i];
            j++;
        }
    }
    s1[j]='\0';
    cout<<s1<<endl;
    return 0;
}
