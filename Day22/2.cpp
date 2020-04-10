//
//  2.cpp
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
    ofile.open("/Users/Neera/Desktop/C++/file.txt");
    char ch;
    
    cin.get(ch);
    while(!cin.eof()){
        ofile.put(ch);
        cin.get(ch);
    }
    ofile.close();
    return 0;
}
