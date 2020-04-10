//
//  levelwise.cpp
//  
//
//  Created by Neera on 31/07/17.
//
//

#include <iostream>
using namespace std;

int main()
{
    
}

void callprint(int size){
    for(int i=0;i<size;i++){
        printatlevel(i);
        cout<<endl;
    }
}

void printatlevel(int level){
    printatlevel(root,level);
}

void printatlevel(TreeNode<int>* root,int level){
    if(level==0){
        cout<<temp->data<<" ";
        return;
    }
    
    for(int i=0;i<numChildren();i++){
        this.printatlevel(temp->getChild(i),level-1);
    }
    
}