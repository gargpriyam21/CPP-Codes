//
//  Q1.cpp
//  
//
//  Created by Neera on 14/07/16.
//
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("/Users/Neera/Desktop/C++/abc.txt");
    
    char ch;
    
    cin.get(ch);
    while(!cin.eof()){
        ofile.put(ch);
        cin.get(ch);
    }
    
    ofile.close();
    
    ifstream ifile;
    ifile.open("/Users/Neera/Desktop/C++/abc.txt");
    ofile.open("/Users/Neera/Desktop/C++/xyz.txt");
    if(!ifile){
        cout<<"INVALID FILE!!!";
        return 1;
    }
    
    ifile.get(ch);
    while(!ifile.eof()){
        ofile.put(ch);
        ifile.get(ch);
    }
    
    ifile.close();
    ofile.close();
    return 0;
}
