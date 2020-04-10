//
//  EDetails1.cpp
//  
//
//  Created by Neera on 01/07/16.
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
void Change(int code,int option,emp e[]);
void Sort(int code,int option,emp e[]);
int main()
{
    emp e[5]={
        {1,"PRIYAM",17,200000},
        {2,"AKSHAJ",18,180000},
        {3,"LAKSHAY",18,190000},
        {4,"NAMAN",17,210000},
        {5,"CHERUB",18,220000}
        };
    int choice,code,option;
    while(1){
        system("clear");
        cout<<"\t0.Exit"<<endl;
        cout<<"\t1.Display"<<endl;
        cout<<"\t2.Change"<<endl;
        cout<<"\t3.Sort"<<endl;
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 0:exit(0);
                
            case 1:cout<<"Enter The E-Code: ";
                cin>>code;
                search(code,e);
                break;
                
            case 2:system("clear");
                cout<<"\t1.Age"<<endl;
                cout<<"\t2.Salary"<<endl;
                cout<<"\tEnter The Choice: ";
                cin>>option;
                switch(option){
                    case 1:cout<<"Enter The E-Code: "<<endl;
                        cin>>code;
                        Change(code,option,e);
                        break;
                        
                    case 2:cout<<"Enter The E-Code: "<<endl;
                        cin>>code;
                        Change(code,option,e);
                        break;
                }
            case 3:system("clear");
                cout<<"\t1.Age"<<endl;
                cout<<"\t2.Salary"<<endl;
                cout<<"\tEnter The Choice: ";
                cin>>option;
                switch(option){
                    case 1:Sort(code,option,e);
                        break;
                        
                    case 2:Sort(code,option,e);
                        break;
                }
        }
        char ch ;
        cin.ignore() ;
        cin.get(ch) ;
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
void Change(int code,int option,emp e[])
{
    int i;
    for(i=0;i<5;i++){
        if(option==1){
            if(code==e[i].ecode){
            cout<<"Enter The New Age: ";
            cin>>e[i].age;
            }
        }
        if(option==2){
            if(code==e[i].ecode){
                cout<<"Enter The New Salary: ";
                cin>>e[i].salary;
            }
        }
    }
    if(code>5){
        cout<<"Employ Not Found"<<endl;
    }
}
void Sort(int code,int option,emp e[])
{
    
}
