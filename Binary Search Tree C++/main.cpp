#include<iostream>

#define SPACE 10
using namespace std;

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value=0;
        left=NULL;
        right=NULL;
    }
    TreeNode(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }
};

class BST
{
    struct Trunk
    {
        //this class is for printing the tree
        //public:
        Trunk* prev;
        string str;
        Trunk(Trunk *prev,string str)
        {
            this->prev=prev;
            this->str=str;
        }
    };
public:
    TreeNode *root;

    BST()
    {
        root=NULL;
    }
    bool isEmpty()
    {
        if(root==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void insertNode(int val)
    {
        TreeNode *newNode=new TreeNode();
        newNode->value=val;
        if(root==NULL)
        {
            root=newNode;
            cout<<"Value Inserted as root Node!"<<endl;
        }
        else
        {
            TreeNode *temp=root;
            while(temp!=NULL)
            {
                if(newNode->value==temp->value)
                {
                    cout<<"This node already exists!"<<endl;
                    cout<<"Insert another value"<<endl;
                    return;
                }
                else if((newNode->value<temp->value) && (temp->left==NULL))
                {
                    temp->left=newNode;
                    cout<<"Value Inserted to the left!"<<endl;
                    break;
                }
                else if((newNode->value<temp->value))
                {
                    temp=temp->left;
                }
                else if((newNode->value>temp->value) && (temp->right==NULL))
                {
                    temp->right=newNode;
                    cout<<"Value Inserted to the right!"<<endl;
                    break;
                }
                else if((newNode->value>temp->value))
                {
                    temp=temp->right;
                }
            }
        }
    }

    void preOrderTraversal(TreeNode *tree)
    {
        if(tree==NULL)
        {
            return;
        }
        cout<<tree->value<<" ";
        preOrderTraversal(tree->left);
        preOrderTraversal(tree->right);
    }
    void inOrderTraversal(TreeNode *tree)
    {
        if (tree==NULL)
        {
            return;
        }
        inOrderTraversal(tree->left);
        cout<<tree->value<<" "; 
        inOrderTraversal(tree->right);
    }
    void postOrderTraversal(TreeNode *tree)
    {
        if(tree==NULL)
        {
            return;
        }
        postOrderTraversal(tree->left);
        postOrderTraversal(tree->right);
        cout<<tree->value<<" ";
    }

    void print2D(TreeNode *tree, int space)
    {
        if(tree==NULL)   //Base Case
        {
            return;
        }
        space+=SPACE; //Increase distance between levels
        print2D(tree->right,space); //Process right child first
        cout<<endl;
        for(int i=SPACE; i<space; i++) //print current node after space count
        {
            cout<<" ";
        }
        cout<<tree->value<<"\n";
        print2D(tree->left,space); //Process left child
    }
    void showTrunks(Trunk *t)
    {
        if(t==NULL)
        {
            return;
        }
        showTrunks(t->prev);
        cout<<t->str;
    }

    void printTree(TreeNode *tree, Trunk *prev,bool isLeft)
    {
        if(root==NULL)
        {
            return;
        }
        string prev_str=" ";
        Trunk *trunk=new Trunk(prev,prev_str);
        printTree(root->right,trunk,true);
        if(!prev)
        {
            trunk->str="----";
        }
        else if(isLeft)
        {
            trunk->str= "----";
            prev_str = "   |";
        }
        else
        {
            trunk->str = "----";
            prev->str = prev_str;
        }
        showTrunks(trunk);
        cout << " " << root->value << endl;

        if (prev)
        {
            prev->str = prev_str;
        }
        trunk->str = "   |";

        printTree(root->left, trunk, false);
    }

    TreeNode *iterativeSearch(int val)
    {
        if(root==NULL)
        {
            return NULL;
        }
        else
        {
            TreeNode *temp=root;
            while(temp!=NULL)
            {
                if(val==temp->value)
                {
                    return temp;
                    break;
                }
                else if(val<temp->value)
                {
                    temp=temp->left;
                }
                else
                {
                    temp=temp->right;
                }
            }
            return NULL;
        }
    }
    int heightOfBST(TreeNode * tree)
    {
        if(tree==NULL)
        {
            return -1;
        }
        else
        {
            int leftHeight=heightOfBST(tree->left);
            int rightHeight=heightOfBST(tree->right);
            if(leftHeight>rightHeight)
            {
                return(leftHeight+1);
            }
            else
            {
                return(rightHeight+1);
            }
        }
    }
    void breadthFirstTraversal(TreeNode *tree)
    {
        int height=heightOfBST(tree);
        for(int i=0; i<=height; i++)
        {
            printLevel(tree,i);
        }
    }
    void printLevel(TreeNode *tree,int level)
    {
        if(tree==NULL)
        {
            return;
        }
        else if(level==0)
        {
            cout<<tree->value<<" ";
        }
        else
        {
            printLevel(tree->left,level-1);
            printLevel(tree->right,level-1);
        }
    }
    TreeNode* minValueNode(TreeNode *node)
    {
        TreeNode *current=node;
        while(current->left != NULL)
        {
            current=current->left;
        }
        return current;
    }
    TreeNode *deleteNode(TreeNode *tree,int value)
    {
        if(tree==NULL)
        {
            return tree;
        }
        else if(value<tree->value)   //for if value is smaller go for left subtree
        {
            tree->left=deleteNode(tree->left,value);
        }
        else if(value>tree->value)   //for if value is larger go for right subtree
        {
            tree->right=deleteNode(tree->right,value);
        }
        else   //for if value matches
        {
            if(tree->left==NULL)  //to delete the node which has no child or only one right child
            {
                TreeNode *temp=tree->right;
                delete tree;
                return temp;
            }
            else if(tree->right==NULL)   //to delete the node which has only one left child
            {
                TreeNode *temp=tree->left;
                delete tree;
                return temp;
            }
            else   //to delete the node which has both right and left child
            {
                TreeNode *temp=minValueNode(tree->right);
                tree->value=temp->value;
                tree->right=deleteNode(tree->right,temp->value);
            }
        }
        return tree;
    }
};


int main()
{
    BST obj;
    int val;
    int option;
    int treeHeight;
    do
    {
        cout<<endl;
        cout<<endl;
        cout<<"What options you want to perform?"<<endl;
        cout<<"Select option number, Enter 0 to exit the program"<<endl;
        cout<<"1. Insert Node"<<endl;
        cout<<"2. Search Node"<<endl;
        cout<<"3. Delete Node"<<endl;
        cout<<"4. Print BST values"<<endl;
        cout<<"5. Perform PreOrder Traversal"<<endl;
        cout<<"6. Perform InOrder Traversal"<<endl;
        cout<<"7. Perform PostOrder Traversal"<<endl;
        cout<<"8. Perform Breadth First(BFS) Traversal"<<endl;
        cout<<"9. Find the height of the BST"<<endl;
        cout<<"10. Clear Screen"<<endl;
        cout<<"0. Exit Program"<<endl;
        cout<<endl;
        cout<<"Enter your choice:";
        cin>>option;

        TreeNode *newNode=new TreeNode();
        switch (option)
        {

        case 0:
            cout<<endl;
            cout<<"Exiting Program!"<<endl;
            break;

        case 1:
        {
            cout<<endl;
            cout<<"You are in the insert Node Operation!"<<endl;
            cout<<endl;
            cout<<"Enter how many values you want to enter in the BST:";
            int numberOfInserts;
            cin>>numberOfInserts;
            cout<<"Enter the values you want to insert in the tree: ";
            while(numberOfInserts!=0)
            {
                cin>>val;
                obj.insertNode(val);
                numberOfInserts--;
            }
            cout<<endl;
            break;
        }
        case 2:
        {
            cout<<endl;
            cout<<"You are in the search Node Operation!"<<endl;
            int valueToSearch;
            cout<<"Enter a value to search in the binary tree: "<<endl;
            cin>>valueToSearch;

            newNode=obj.iterativeSearch(valueToSearch);
            if(newNode!=NULL)
            {
                cout<<valueToSearch<<" was found in the BST"<<endl;
            }
            else
            {
                cout<<valueToSearch<<" was not found in the BST"<<endl;
            }
            break;
        }
        case 3:
        {
            cout<<endl;
            cout<<"You are in the delete Node Operation!"<<endl;
            cout<<"Enter the value you want to delete:";
            int valueToDelete;
            cin>>valueToDelete;
            TreeNode *newNode=new TreeNode();
            newNode=obj.iterativeSearch(valueToDelete);
            if(newNode==NULL)
            {
                cout<<"There is no value as "<<valueToDelete<<" in the BST"<<endl;
                cout<<"Cannot perform Delete Operation!!"<<endl;
            }
            else
            {
                obj.deleteNode(obj.root,valueToDelete);
                cout<<valueToDelete<<" is deleted from the BST!"<<endl;
            }
            break;
        }
        case 4:
        {
            cout<<endl;
            cout<<"Printing BST Values"<<endl;
            obj.print2D(obj.root,4);
            //obj.printTree(obj.root,NULL,false);
            break;
        }

        case 5:
        {
            cout<<endl;
            cout<<"The PreOrder Traversal is: "<<endl;
            obj.preOrderTraversal(obj.root);
            break;
        }
        case 6:
        {
            cout<<endl;
            cout<<"The InOrder Traversal is: "<<endl;
            obj.inOrderTraversal(obj.root);
            break;
        }
        case 7:
        {
            cout<<endl;
            cout<<"The PostOrder Traversal is: "<<endl;
            obj.postOrderTraversal(obj.root);
            break;
        }
        case 8:
        {
            cout<<endl;
            cout<<"The BFS Traversal is: "<<endl;
            obj.breadthFirstTraversal(obj.root);
            break;
        }
        case 9:
        {
            cout<<endl;
            cout<<"Finding the height of the tree...."<<endl;
            treeHeight=obj.heightOfBST(obj.root);
            cout<<"Height of the tree is: "<<treeHeight<<endl;
            break;
        }
        case 10:
        {
            cout<<endl;
            system("cls");
            break;
        }
        default:
            break;
        }
    }
    while(option!=0);

}
