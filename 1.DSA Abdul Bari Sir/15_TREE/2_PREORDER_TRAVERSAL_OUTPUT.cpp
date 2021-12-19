#include<iostream>
using namespace std;

//--------------queueu---------------//
class Qnode
{   
    public:
    Qnode **data;
    Qnode *next;
};

class Queue
{
    Qnode *qfront;
    Qnode *rear;
    public:
    Queue()
    {
        qfront=NULL;
        rear=NULL;
    } 
    void push(Qnode *x)
    {
        Qnode *t=new Qnode;
        if(t==NULL)
        cout<<"memmory full\n";
        else
        {
            t->data=x;
            t->next=NULL;
            if(qfront==NULL)
            {        
                qfront=t;
                rear=t;
            }
            else
            {
                rear->next=t;
                rear=rear->next;
            }
            
        }
    }
    void pop()
    {
        if(qfront==NULL)
        cout<<"empty\n";
        else
        {
            Qnode *p=qfront;
            qfront=qfront->next;
            delete p;     
        }
    }
    int front()
    {
        if(qfront==NULL)
        return NULL;
        else
        return qfront->data;
    }
    bool empty()
    {
        return qfront==NULL;
    }
    void display()
    {
        if(qfront!=NULL)
        { Qnode *p=qfront;
            while(p)
            {
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }
    }
};

//------------BINARY TREE LINKED REPRESNTATION--------------//
class Node
{
    public:
    Node *left;
    int data;
    Node *right;
};

class BinaryTree
{
    public:
    Node *root;
    BinaryTree()
    {
    root=NULL;
    }
    void BinaryTreeCreate()
    {
        Queue q;
        int x;
        Node *p;
        Node *t;
        root = new Node;
        cout<<"enter the root elemnt\n";
        cin>>x;
        root->left=NULL;
        root->data=x;
        root->right=NULL;
        q.push(root);
        while (q.empty())
        { 
            p = q.front();
            q.pop();

            cout<<"enter the left child or -1 for null\n";
            cin>>x;
            if(x!=-1)
            {
               t= new Node;
               t->data=x;
               t->left=NULL;
               t->right=NULL;
               p->left=t;
               q.push(p->left);
            }
            cout<<"enter the right child or -1 for Null\n";
            cin>>x;
            if(x!=-1)
            {
                t=new Node;
                t->data=x;
                t->right=NULL;
                t->left=NULL;
                p->right=t;
                q.push(p->right);
            }     
        }    
    }
    void preorder(Node *node)
    {
        if(node==NULL)
        return;
        else
        {
            cout<<node->data<<" ";
            preorder(node->left);
            preorder(node->right);
        }
    }

};

int main()
{
    BinaryTree t;
    t.BinaryTreeCreate();
    t.preorder(t.root);
    return 0;
}