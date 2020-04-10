//
//  1.cpp
//  
//
//  Created by Neera on 19/07/16.
//
//

#include <iostream>
#include <cstdlib>
#include <fstream>
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
    emp e[5];
    int i,j;
    fstream ffile("/Users/Neera/Desktop/C++/emp.txt",ios::out|ios::binary);
    for(i=0;i<2;i++){
        cin>>e[i].ecode>>e[i].name>>e[i].age>>e[i].salary;
        ffile.write((char*)&e[i],sizeof(e[i]));
    }
    ffile.close();
    int choice,code,option;
    while(1){
        system("clear");
        cout<<"\t0.Exit"<<endl;
        cout<<"\t1.Display"<<endl;
        cout<<"\t2.Change"<<endl;
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 0:exit(0);
                
            case 1:cout<<"Enter The E-Code: ";
                cin>>code;
                ffile.open("/Users/Neera/Desktop/C++/abc.txt",ios::in);
                ffile.seekg(0,ios::beg);
                for(j=0;j<2;j++){
                    if(code==e[j].ecode){
                        ffile.read((char*)&e[j],sizeof e[j]);
                        cout<<e[j].name<<endl<<e[j].age<<endl<<e[j].salary<<endl;
                    }
                }
                ffile.close();
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
        }
        char ch ;
        cin.ignore() ;
        cin.get(ch) ;
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

