#ifndef NODECLASS_H_INCLUDED 
#define NODECLASS_H_INCLUDED
#include<iostream>
using namespace std;
class NodeClass
{
private:
    
public:
    int key;
    int data;
    NodeClass *next;
    NodeClass();
    NodeClass(int ,int);
};



#endif 