#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

class BST
{
public:
struct Node* root;
BST()
{
    root=NULL;
}
void createBST();
~BST()
{
    delete root;
}
};

void BST::createBST()
{
    int x;
    //first create fill the root node
    struct Node *t;
    cout<<"Enter the data to be inserted in the root\n";
    cin>>x;
    t=new Node(x);
    root=t;
    queue<Node*> q;
    q.push(root);
    struct Node* p;

    while (!q.empty())
    {
    p=q.front();
    q.pop();

    cout<<"Enter the elemnt in the left tree else enter -1 for no elements\n";
    cin>>x;
    if(x!=-1)
    {
        t=new Node(x);
        p->left=t;
        q.push(p->left);
    }

    cout<<"Enter the right elemnt or -1\n";
    cin>>x;
    if(x!=-1)
    {
        t=new Node(x);
        p->right=t;
        q.push(p->right);
    }
    }

}

void preorder(struct Node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    BST b;
    b.createBST();
    preorder(b.root);
    return 0;
}