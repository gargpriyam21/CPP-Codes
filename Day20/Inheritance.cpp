//
//  Inheritance.cpp
//  
//
//  Created by Neera on 09/07/16.
//
//

#include <iostream>
using namespace std;

class Person
{
protected:
    char name[20];
    char add[100];
    int age;
    float phone;
public:
    void Get_Details( )
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cin.ignore() ;
        cout<<"Address: ";
        cin.getline(add,10);
        cout<<"Phone: ";
        cin>>phone;
    }
};
class emp:public Person
{
protected:
    float salary;
public:
    int ecode;
    void Get_emp( )
    {
        cout<<"ECode: ";
        cin>>ecode;
        cout<<"Salary: ";
        cin>>salary;
    }
};
class voter
{
protected:
    char nam[20];
    char ad[100];
public:
    int voter_id;
    void Get_voter( )
    {
        cout<<"Voter Id: ";
        cin>>voter_id;
        cout<<"Name: ";
        cin>>nam;
        cin.ignore() ;
        cout<<"Address: ";
        cin.getline(ad,100);
    }
};
class customer:public emp
{
protected:
    float balance;
    char ac_type;
public:
    int ac_no;
    void Get_bank( )
    {
        cout<<"A/C No.: ";
        cin>>ac_no;
        cout<<"Balance: ";
        cin>>balance;
        cout<<"S=Saving"<<endl;
        cout<<"R=Reccuring"<<endl;
        cout<<"C=Current"<<endl;
        cout<<"A/C Type: ";
        cin>>ac_type;
    }
    void Check_Balance( )
    {
        if(ac_type=='S'){
            cout<<"The Balance Is: "<<balance + (balance*4)/100<<endl;
        }
        else if(ac_type=='R'){
            cout<<"The Balance Is: "<<balance + (balance*7)/100<<endl;
        }
        else if(ac_type=='C'){
            cout<<"The Balance Is: "<<balance<<endl;
        }
    }
};
class Show:public customer, public voter
{
public:
    void Show_emp( )
    {
        cout<<ecode<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<add<<endl;
        cout<<salary<<endl;
        cout<<phone<<endl;
    }
    void Show_voter( )
    {
        cout<<voter_id<<endl;
        cout<<nam<<endl;
        cout<<ad<<endl;
    }
    void Show_Bank( )
    {
        cout<<ac_no<<endl;
        cout<<name<<endl;
        cout<<phone<<endl;
        cout<<add<<endl;
        cout<<balance<<endl;
        cout<<ac_type<<endl;
        cout<<age<<endl;
    }
    void Change_add( )
    {
        cin>>ad;
    }
};
int main()
{
    int choice,option,i,code;
    Show p[3];
    while(1){
        system("clear");
        cout<<"\t0.Exit"<<endl;
        cout<<"\t1.Employee"<<endl;
        cout<<"\t2.Voter"<<endl;
        cout<<"\t3.Bank"<<endl;
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 0:exit(0);
                
            case 1:system("clear");
                cout<<"\t1.Enter The Details"<<endl;
                cout<<"\t2.Display"<<endl;
                cout<<"\tEnter The Choice: ";
                cin>>option;
                switch(option){
                    case 1:for(i=0;i<3;i++){
                            p[i].Get_Details();
                            p[i].Get_emp();
                        }
                        break;
                    case 2:cout<<"Enter ECode: ";
                        cin>>code;
                        for(i=0;i<3;i++){
                            if(code==p[i].ecode){
                                p[i].Show_emp();
                            }
                        }
                        break;
                }
                break;
                
            case 2:system("clear");
                cout<<"\t1.Enter The Details"<<endl;
                cout<<"\t2.Display"<<endl;
                cout<<"\t3.Change"<<endl;
                cout<<"\tEnter The Choice: ";
                cin>>option;
                switch(option){
                    case 1:for(i=0;i<3;i++){
                            p[i].Get_voter();
                        }
                        break;
                    case 2:cout<<"Enter Voter ID: ";
                        cin>>code;
                        for(i=0;i<3;i++){
                            if(code==p[i].voter_id){
                                p[i].Show_voter();
                            }
                        }
                        break;
                    case 3:cout<<"Enter Voter ID: ";
                        cin>>code;
                        for(i=0;i<3;i++){
                            if(code==p[i].voter_id){
                                p[i].Change_add();
                            }
                        }
                        break;
                }
                break;
                
            case 3:system("clear");
                cout<<"\t1.Enter The Details"<<endl;
                cout<<"\t2.Check Balance"<<endl;
                cout<<"\tEnter The Choice: ";
                cin>>option;
                switch(option){
                    case 1:for(i=0;i<3;i++){
                            p[i].Get_bank();
                        }
                        break;
                    case 2:cout<<"Enter The A/C No.: ";
                        cin>>code;
                        for(i=0;i<3;i++){
                            if(code==p[i].ac_no){
                                p[i].Check_Balance();
                            }
                        }
                        break;
                }
                break;
        }
        char ch;
        cin.ignore();
        cin.get(ch);
    }
}