#include<iostream>
using namespace std;

struct Node*node
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

class AVL
{
    public:
    struct Node* root;
    AVL()
    {
        root=NULL;
    }
   struct Node* insert(struct Node*node,int key);
   struct Node* deleteNode(struct Node*node,int key);
};
//-------------rotate Right------------//
struct Node* rotateRight(struct Node* node)
{
    struct Node* x=node->left;
    struct Node* y=x->right;

    x->right=a;
    a->left=y;

    return x;
}

//----------------rotate Left-----------------//
struct Node* rotateLeft(struct Node*node)
{
    struct Node* x= node->right;
    struct Node* y=x->left;

    x->left=node;
    node->right=y;

    return x;
}

//-------------height----------//
int height(struct Node* node)
{
    if(node==NULL)
    return 0;
    int l=height(node->left);
    int r=height(node->right);
    if(l>r)
    return l+1;
    else
    return r+1;
}

//-------------balance factor------------------//
int balanceFactor(struct Node*node)
{
    if(node==NULL)
    return -1;
    else
    {
       return height(node->left)-height(node->right);
    }
}

//------------insert-------------//
struct Node* AVL::insert(struct Node*node,int key)
{
    struct Node*t;
    if(node==NULL)
    {
      t= new Node(key);
      node=t;
      return node;
    }
    if(key<node->data)
    node->left=insert(node->left,key);
    if(key>node->data)
    node->right=insert(node->right,key);
    else
    {
        cout<<"duplicate found";
        return node;
    }
    int bf= balanceFactor(struct Node*node);

    if(bf>1 && key<node->left)
    return rotateRight(node);

    else if(bf<-1 && key>node->right->data)
    return rotateLeft;

    else if(bf<-1 && key<node->right->data)
    {
        node->right= rotateRight(node->right);
        return rotateLeft(node);
    }
    else if(bf>1 && key>node->left)
    {
        node->left= rotateLeft(node->left)
        return rotateRight(node);
    }
}