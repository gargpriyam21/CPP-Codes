//
//  Read.cpp
//  
//
//  Created by Neera on 21/07/16.
//
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream ffile;
    ffile.open("/Users/Neera/Desktop/C++/abc.txt",ios::in);
    char ch;
    
    ffile.get(ch);
    while(!ffile.eof()){
        cout.put(ch);
        ffile.get(ch);
    }
    
    return 0;
}
