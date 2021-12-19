#include<bits/stdc++.h>
using namespace std;

//we can have our own stack for this 
//------------binary tree ---------------//
class Node
{
    Node *left;
    int data;
    Node *right;
};

class tree
{
    public:
    Node *root;
    tree()
    {
        root=NULL;
    }
    void create()
    {
        int x;
        Node *p;
        Node *t;
        queue<Node *> q;
        cout<<"enter the root node\n";
        cin>>x;
        root=new Node;
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        q.push(root);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            cout<<"enter the left child\n";
            cin>>x;
            if(x!=-1)
            {
                t=new Node;
                t->data=x;
                t->left=NULL;
                t->right=NULL;
                p->left=t;
                q.push(p->left);
            }
            cout<<"enter the right child\n";
            cin>>x;
            if(x!=NULL)
            {
                t=new Node;
                t->data=x;
                t->left=NULL;
                t->right=NULL;
                p->right=t;
                q.push(p->right);
            }
        }


    }
    void preorder(Node *node) //initially it wiill take the root node as the parameter
    {
        //we will use a stack to store the node* 
        stack<Node*> s;
        while(s.empty() || node!=NULL)
        {
            if(node!=NULL)
            {
                s.push(node); //first push the node to the stack
                cout<<node->data; //print the data;
                node=node->left; //move the node pointer to the left side
            }
            else  //node is NULL then
            {
                node= s.top(); //the top value in the stack hold the adress of the pointer who is the parent of the cuurent child whiere it came left so it will go back to that node then go to right child of that node
                s.pop(); //after assigning to the node pop it
                node=node->right; //move to the right node
            }
        }
    }

}