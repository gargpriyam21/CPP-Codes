//
//  1.cpp
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
    
    ofile<<"Hello";
    ofile<<"World";
    
    ofile.close();
    return 0;
}
