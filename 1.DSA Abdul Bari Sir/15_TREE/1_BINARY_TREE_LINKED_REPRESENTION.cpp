#include<iostream>
#include<queue>
using namespace std;


//-------- BINARY TREE ----------//
class Node
{
    Node *left; //store the addres of the left child //basicallly craeting a link to the left child
    int data;
    Node *right;  //point to the right child or link to right child
};

class Tree
{
    Node *root; //this will point the root of the tree that is where it is all started
    public:
    Tree() //construct or tree
    {
        root=NULL; //initially root is NULL
    }
    //function to create a binarytree
    void create()
    {
        Node *p; //for traversing
        Node *t; //for creating new Node an add to the tree
        
        //queue of the type node pointer pointer to store adresss of node pointer  
        queue<Node**> q; //we will needed a queue to store the adress of the node in the tree and by the help of this q we will traverse 
        
        //first lets fill the root node
        int x; //varabel to take the data from the user to add in the tree acordingly
        cout<<"enter the root node value\n";
        cin>>x;
       
        //we will craete a root node and initialise it at first 
        root=new Node;
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        
        //thien pus the address of the root to the queue
        q.push(root); //pusing the root to the queue we just have created
        //run the loop till the queue is empty
        while(!q.empty())
        {
            //first point p to the node of the tree where we will add value and if it is the forst time the loop is entering then for teh root node
            //p will point to the node whose right and left child will be filled 
            p=q.front(); //in the queue the front will have the next node to traverse as we are going level by level
            q.pop(); //after storing the value it is important to pop that addres so that we will go to the next node when the loop starts again

            //for left child
            cout<<"enter the left chlid data and if no left child enter -1 please\n";
            cin>>x;
            if(x!=-1)
            {
                //craete a new node and initialise with the user given data and initially point the left and right to NULL
                t=new Node;
                t->data=x;
                t->left=NULL;
                t->right=NULL;

                p->left=t; //point the current node's left to the to the newly created node

                q.push(t); //then pus the adress of this node 
                //remeber every time a new node is craeted its adress will be pushed
            }

            //for rigth child
            cout<<"enter the right child elemnt or enter -1 for no child\n";
            cin>>x;
            if(x!=-1)
            { 
                //craete a new node to push
                t=new Node;
                t->data=x;
                t->right=NULL;
                t->left=NULL;
                
                p->right=t; //point this node to the right pointer of the current node

                q.push(t); //push t to the queue after that
            }
        }

        //after here the while loop will start again and then it will assign the p to the next node
        //we are here doing a level by level traversal
        //so by this algorithm it will do that 

    }
    
    
}