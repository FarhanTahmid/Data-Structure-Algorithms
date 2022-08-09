#ifndef SINGLYLINKEDLIST_H_INCLUDED 
#define SINGLYLINKEDLIST_H_INCLUDED
#include<iostream>
#include "NodeClass.h"
using namespace std;
class SinglyLinkedList1
{
private:
    
    
public:
    NodeClass* head;
    SinglyLinkedList1();
    SinglyLinkedList1(NodeClass*);
    NodeClass* nodeExists(int); //check if node exists with key Value
    void appendNode(NodeClass*); //appending node to the last
    void prependNode(NodeClass*); //appending node before a the whole list
    void insertNodeAfter(int ,NodeClass*); //appending a node after a node
    void deleteNode(int k); //deleting a node with Key Value
    void updateNodeByKey(int , int); //updating a node with key value
    void displayList(); //printing the whole singly linked list
    //Methods to test 
    void popFront(); //popping the front node
    void popBack(); //popping the last node
    void showBack(); //returns the lastNode
    void showFront(); //returns the first node
    void insertNodeBefore(int ,NodeClass*); //insertion of node before another node

};



#endif 