#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
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
        int x;
        Node *p;
        Node *t;
        queue<Node*> q;

        cout<<"Enter the root Node elemnt\n";
        cin>>x;
        root = new Node;
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        q.push(root);
        while(q.empty())
        {
            p=q.front();
            q.pop();

            cout<<"Enter the left child or -1 for NULL \n";
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
            cout<<"Enter the right child or -1 for NULL\n";
            cin>>x;
            if(x!=-1)
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

    //fuction to display preorder traversal

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
};