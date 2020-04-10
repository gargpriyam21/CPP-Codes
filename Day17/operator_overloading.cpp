//
//  Q1.cpp
//
//
//  Created by Neera on 02/07/16.
//
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
    Distance operator +( Distance d )
    {
		Distance temp ;
        temp.feet = this->feet + d.feet + (this->inches + d.inches)/12;
        temp.inches = (this->inches + d.inches)%12;
		
		return temp ;
    }
    void operator +=( Distance d )
    {
        this->feet = this->feet + d.feet + (this->inches + d.inches)/12;
        this->inches = (this->inches + d.inches)%12;
    }
    Distance operator ++( )
    {
        feet = this->feet + 1 + (this->inches + 1)/12;
        inches = (this->inches + 1)%12;
    }
    bool operator ==( Distance d )
    {
        if (this->feet==d.feet && this->inches == d.inches){
		return true ;
	}
	return false ;
    }

    void Show( )
    {
        cout<<feet<<"feet "<<inches<<"inches"<<endl;
    }
    Distance operator++( int )
    {
	    Distance temp ;
	    temp.feet = feet++ ;
	    temp.inches = inches++ ;

	    return temp ;
    }

};
int main()
{
    Distance d1,d2,d3;
    
    d1.Get();
    d2 = d1++ ;
    d1.Show() ;
    d2.Show() ;

    //d2.Get();
    	
	
	/*d3 = d1 + d2 ; //Operator overloading
    d3.Show();
    
	d1 += d2 ;
    d1.Show();
    
	d2 = ++ d1 ;
    d1.Show();
  
    if(d2==d1){
        cout<<"SAME";
    }
    else
        cout<<"NOT";
	*/
    return 0;
}
