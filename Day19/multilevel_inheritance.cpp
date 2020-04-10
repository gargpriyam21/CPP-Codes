//
//  multilevel_inheritance.cpp
//  
//
//  Created by Neera on 07/07/16.
//
//

#include <iostream>
using namespace std ;

class Student
{
protected:
    int roll_no ;
public:
    void Get_rollno( )
    {
        cin >> roll_no ;
    }
    
};
class Marks:public Student
{
protected:
    int sub_1 ;
    int sub_2 ;
public:
    void Get_marks( )
    {
        cin >> sub_1 >> sub_2 ;
    }
};
class Total:public Marks
{
    int total ;
public:
    void Sum( )
    {
        total = sub_1 + sub_2 ;
    }
    void Show( )
    {
        cout << roll_no << endl ;
        cout << sub_1 << ' ' << sub_2 << endl ;
        cout << total << endl ;
    }
};
int main()
{
    Total t ;
    t.Get_rollno() ;
    t.Get_marks() ;
    t.Sum() ;
    t.Show() ;
    
    return 0 ;
}