
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
class Sports
{
protected:
    int score ;
public:
    void Get_score( )
    {
        cin >> score ;
    }
};
class Total:public Marks, public Sports
{
    int total ;
public:
    void Sum( )
    {
        total = sub_1 + sub_2 + score ;
    }
    void Show( )
    {
        cout << roll_no << endl ;
        cout << sub_1 << ' ' << sub_2 << endl ;
        cout << score << endl ;
        cout << total << endl ;
    }
};
int main()
{
    Total t ;
    t.Get_rollno() ;
    t.Get_marks() ;
    t.Get_score() ;
    t.Sum() ;
    t.Show() ;
    
    return 0 ;
}