//
//  String.cpp
//  
//
//  Created by Neera on 05/07/16.
//
//

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char string[200];
    
public:
    String( )
    {
        strcpy(string, " ");
    }
    String( char st[] )
    {
        strcpy(string, st) ;
    }
    String( String &s )
    {
        strcpy(string, s.string);
    }
    void Get( )
    {
        cin>>string;
    }
    String operator +(String s)
    {
        String temp;
        int i,j;
        for(i=0;this->string[i]!='\0';i++){
            temp.string[i]=this->string[i];
        }
        for(j=0;s.string[j]!='\0';i++,j++){
            temp.string[i]=s.string[j];
        }
        temp.string[i]='\0';
        return temp;
    }
    int operator ==( String s )
    {
        int i;
        for(i=0;this->string[i]==s.string[i]&&this->string[i]!='\0';i++){
        }
        
        if(this->string[i]-s.string[i]==0){
            return 1;
        }
        
        else
            return 0;
    }
    void Show( )
    {
        cout<<string<<endl;
    }
    
};
int main()
{
    String s1;
    String s2("Good");
    String s3("Day");
    String s4(s2);
    String s5;
    s5 = s2 + s3;
    String s6;
    s6= s5 - s2;
    
    s1.Show();
    s2.Show();
    s3.Show();
    s4.Show();
    s5.Show();
    s6.Show();
    if(s5==s4){
        cout<<"SAME"<<endl;
    }
    else
        cout<<"NOT"<<endl;
    
    return 0;
}
