//
//  3.cpp
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
    ifstream ifile;
    ifile.open("/Users/Neera/Desktop/C++/file.txt");
    
    if(!ifile){
        cout<<"INVALID FILE!!!";
        return 1;
    }
    char ch;
    
    ifile.get();
    while(!ifile.eof()){
        cout.put(ch);
        ifile.get(ch);
    }
    
    ifile.close();
    
    return 0;
}
