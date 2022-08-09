#include<iostream>
#include "SinglyLinkedList.cpp"
#include "NodeClass.cpp"
using namespace std;
int main(){

    SinglyLinkedList1 s;
    int key,data,k1,option;

    do{
        cout<<"What do you want to do? Select from the menu! Enter 0 to exit the whole Program"<<endl;
        cout<<"(1). Insert New Node"<<endl;
        cout<<"(2). Prepend Node"<<endl;
        cout<<"(3). Insert a node after a particular node"<<endl;
        cout<<"(4). Delete a node by key"<<endl;
        cout<<"(5). Update the node by key"<<endl;
        cout<<"(6). Display the whole list"<<endl;
        cout<<"(7). Clear screen"<<endl;
        cout<<"(8). Pop Front"<<endl;
        cout<<"(9). Pop Back"<<endl;
        cout<<"(10). First Node Value"<<endl;
        cout<<"(11). Last Node Value"<<endl;
        cout<<"(12). Insert a node before a particular node"<<endl;

        cin>>option;
        NodeClass *n1=new NodeClass();
        
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Append node: "<<endl;cout<<"Enter the key and data you want to append: "<<endl;
            cin>>n1->key;
            cin>>n1->data;
            s.appendNode(n1);
            break;
        case 2:
            cout<<"Prepend Node: "<<endl;cout<<"Enter the key and data of the node you want to prepend:"<<endl;
            cin>>n1->key;
            cin>>n1->data;
            s.prependNode(n1);
            break;
        case 3:
            int nodeKey;
            cout<<"Insert Node After a particular Node: "<<endl;cout<<"Enter the key of the node afer you want to insert the new node: "<<endl;cin>>nodeKey;cout<<"Enter the key and data of the node you want to prepend:"<<endl;
            cin>>n1->key;
            cin>>n1->data;
            s.insertNodeAfter(nodeKey,n1);
            break;
        case 4:
            cout<<"Delete Node: "<<endl;cout<<"Enter the key of the node you want to delete:"<<endl;
            int deleteKey;
            cin>>deleteKey;
            s.deleteNode(deleteKey);

            break;
        case 5:
            cout<<"Update Node: "<<endl;cout<<"Enter the key and new data of the node you want to update: "<<endl;
            cin>>key;
            cin>>data;
            s.updateNodeByKey(key,data);
            break;
        case 6:
            s.displayList();
            break;
        case 7:
            system("cls");
            break;
        case 8:
            cout<<"Pop Front operation!"<<endl;
            s.popFront();
            break;
        case 9:
            cout<<"Pop Back operation!"<<endl;
            s.popBack();
            break;
        case 10:
            
            s.showFront();
            break;
        
        case 11:
            s.showBack();
            break;
        
        case 12:
            int keyOfnNode;
            cout<<"Insert Node Before a particular Node: "<<endl;
            cout<<"Enter the key of the node before you want to insert the new node: "<<endl;
            cin>>keyOfnNode;
            cout<<"Enter the key and data of the node you want to append:"<<endl;
            cin>>n1->key;
            cin>>n1->data;
            s.insertNodeBefore(keyOfnNode,n1);
            break;
        default:
            cout<<"Wrong input! Enter the correct number"<<endl;
        }
    }while (option!=0);

    return 0;
}