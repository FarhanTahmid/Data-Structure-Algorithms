#include<iostream>
#include "NodeClass.h"
#include "SinglyLinkedList.h"
using namespace std;

SinglyLinkedList1::SinglyLinkedList1(){
    head=NULL;    
}
SinglyLinkedList1::SinglyLinkedList1(NodeClass *n){
    head=n;
}
NodeClass*
SinglyLinkedList1::nodeExists(int k){
    NodeClass* temp=NULL;
    NodeClass* ptr=head;
    while (ptr!=NULL)
    {
        if(ptr->key==k){
            temp=ptr;
        }
        ptr=ptr->next;
    }
    return temp;
}
void
SinglyLinkedList1::appendNode(NodeClass *n){
    if(nodeExists(n->key)!=NULL){
        cout<<"The node already exists in the data structure with same key Value!"<<endl;    
    }else{
        if(head==NULL){
            head=n;
            cout<<"Node appended"<<endl;
        }else{
            NodeClass* ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=n;
            cout<<"Node Appended"<<endl;
        }
    }
}
void
SinglyLinkedList1::prependNode(NodeClass* n){
    if(nodeExists(n->key)!=NULL){
        cout<<"The node already exists in the data structure with same key Value!"<<endl;    
    }else{
        n->next=head;
        head=n;
        cout<<"Node prepended befor the list!"<<endl;
    }
}
void
SinglyLinkedList1:: insertNodeAfter(int k,NodeClass* n){
    NodeClass* ptr=nodeExists(k);
    if(ptr==NULL){
        cout<<"No node exist with key value: "<<k<<endl;
    }else{
        if(nodeExists(n->key)!=NULL){
            cout<<"The node exists with the same key value "<<k<<" already"<<endl;
        }else{
            n->next=ptr->next;  //linking up the next node of n with N
            ptr->next=n;  //linking up the node N with its previous Node
            cout<<"Node inserted after NodeKey "<<k<<endl;
        }
    }
}
void 
SinglyLinkedList1::deleteNode(int k){
    if(head==NULL){
        cout<<"The list already is empty! Cannot delete any item!"<<endl;
    }else if(head!=NULL){
        if(head->key==k){
            head=head->next;
            cout<<"Node Deleted!"<<endl;
        }else{
            NodeClass* temp=NULL;
            NodeClass *previousPointer=head;
            NodeClass *currentPointer=head->next;
            while(currentPointer!=NULL){
                if(currentPointer->key==k){
                    temp=currentPointer;
                    currentPointer=NULL;
                }else{
                    previousPointer=previousPointer->next;
                    currentPointer=currentPointer->next;
                }
            }
            if(temp!=NULL){
                previousPointer->next=temp->next;
                cout<<"Node deleted with the key value "<<k<<endl;
            }else{
                cout<<"The node with Key value "<<k<<" does not exist!"<<endl;
            }

        }
    }
}

void
SinglyLinkedList1::updateNodeByKey(int k,int d){
    NodeClass* ptr=nodeExists(k);
    if(ptr!=NULL){
        ptr->data=d;
        cout<<"Node with key value "<<k<<"'s data value updated successfully"<<endl;
    }else{
        cout<<"Node with key "<<k<<" does not exist!"<<endl;
    }
}
void 
SinglyLinkedList1:: displayList(){
    if(head==NULL){
        cout<<"The list is Empty"<<endl;
    }else{
        cout<<"Data in the list:"<<endl;
        cout<<"(key,Value):     ";
        NodeClass *temp=head;
        while(temp!=NULL){
            cout<<"("<<temp->key<<","<<temp->data<<")--->";
            temp=temp->next;
        }
        cout<<endl;

    }
}
void
SinglyLinkedList1 :: popFront(){
    NodeClass *temp=head;
    head=head->next;
    delete temp;
    cout<<"Deleted the first Node!"<<endl;
}
void
SinglyLinkedList1::popBack(){
    NodeClass* current=head;
    while (current->next->next!=NULL)
    {   
        current=current->next;
    }
    NodeClass *temp=current->next;
    current->next=NULL;
    delete temp;
    cout<<"Deleted the last Node!"<<endl;
    
}
void
SinglyLinkedList1::showBack(){
    NodeClass *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"Data inside the last node is "<<temp->data<<endl;
}
void
SinglyLinkedList1::showFront(){
    NodeClass* temp=head;
    cout<<"Data inside the first node is "<<temp->data<<endl;
}

//Have to redo this method
void 
SinglyLinkedList1::insertNodeBefore(int k,NodeClass* n){
    cout<<"In the method"<<endl;
    NodeClass* current=head;
    if(nodeExists(n->key)!=NULL){
        cout<<"The node already exists in the list!"<<endl;
    }else{
        while(current->next->key==k){
            current=current->next;
        }
        NodeClass *temp=current->next;
        n=current->next;
        n->next=temp;
        cout<<"Node added befor the node with key value "<<k<<endl;
    }
    
}