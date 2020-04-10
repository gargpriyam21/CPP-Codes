//
//  1.cpp
//  
//
//  Created by Neera on 04/07/16.
//
//

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
    Distance operator +=( Distance d )
    {
        this->feet = this->feet + d.feet + (this->inches +d.inches)/12;
        this->inches = (this->inches + d.inches)%12;
    }
    void Show( )
    {
        cout<<feet<<"feet "<<inches<<"inches"<<endl;
    }
};
int main()
{
    Distance d1,d2;
    
    d1.Get();
    d2.Get();
    
    d1 += d2;
    d1.Show();
    
    return 0;
}
