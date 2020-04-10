//
//  Q1.cpp
//  
//
//  Created by Neera on 02/07/16.
//
//
//ADITION USING CLASS (OOP's)

#include <iostream>
#include <cstring>

using namespace std;

class Distance
{
private:
    int feet,inches;
    
public:
    void Get( )
    {
        cin>>feet>>inches;
    }
    void Add(Distance d1,Distance d2)
    {
        feet = d1.feet + d2.feet + (d1.inches + d2.inches)/12;
        inches = (d1.inches + d2.inches)%12;
    }
    void Show( )
    {
        cout<<feet<<"feet "<<inches<<"inches"<<endl;
    }
};
int main()
{
    Distance d1,d2,d3;
    
    d1.Get();
    d2.Get();
    d3.Add(d1,d2);
    d3.Show();
    
    return 0;
}