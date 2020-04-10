//
//  EDetails.cpp
//  
//
//  Created by Neera on 30/06/16.
//
//

#include <iostream>
#include <cstdlib>
using namespace std;

struct emp
{
    int ecode;
    char name[20];
    int age;
    float salary;
};
void search(int i, emp e[]);
int main()
{
    emp e[5]={{1,"PRIYAM",17,200000},
              {2,"AKSHAJ",18,200000},
              {3,"LAKSHAY",18,200000},
              {4,"NAMAN",17,200000},
              {5,"CHERUB",18,200000}};
    int choice,code;
    while(1){
        system("cls");
        cout<<"\t0.Exit"<<endl;
        cout<<"\t1.Display"<<endl;
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 0:exit(0);
                
            case 1:cout<<"Enter The E-Code: ";
                cin>>code;
                search(code,e);
                break;
        }
    }
}
void search(int code,emp e[])
{
    int i;
    for(i=0;i<5;i++){
        if(code==e[i].ecode){
        cout<<e[i].name<<endl<<e[i].age<<endl<<e[i].salary<<endl;
        }
    }
    if(code>5){
        cout<<"Employ Not Found"<<endl;
    }
}
