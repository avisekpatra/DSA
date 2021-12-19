#include<iostream>
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

class AVL_TREE
{
    public:
    struct Node* root;
    AVL_TREE()
    {
        root=NULL;
    }
    struct Node* insertNode(struct Node*node,int key);
    struct Node* deleteNode(struct Node*node,int key);

};


//----------------insertNode-----------------//


int height(struct Node* node)
{
    if(node==NULL)
    return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh)
    return lh+1;
    else
    return rh+1;
}

int balanceFactor(struct Node* node)
{
    if(node==NULL)
    return -1;

    return height(node->left)=height(node->right);

}

struct Node* rotateRight(struct Node* node)
{
    struct Node* x=node->left;
    struct Node* y=x->left;

    x->left=node;
    node->left=y;

    return x;
}

struct Node* rotateLeft(struct Node* node)
{
    struct Node* x= node->right;
    struct Node* y= x->left;

    x->left=node;
    node->right=y;

    return x;
}


struct Node* AVL_TREE::insertNode(struct Node*node,int key)
{
    if(node==NULL)
    {
        struct Node*  t =new Node(key);
        node=t;
        return node;
    }
    if(key<node->data)
    node->left=insertNode(node->left,key);
    else if(key>node->data)
    node->right-insertNode(node->right,key);
    else
    {
        cout<<"Already Exist\n";
        return node;
    }
    int bf=balanceFactor(node);
    if(bf>1 && key<node->left->data)
    return rotateRight(node);
    if(bf>1 && key>node->right->data)
    {
        node->left= rotateLeft(node->left);
        return rotateRight(node);
    }
    if(bf<-1 && key>node->right->data)
    return rotateLeft(node);
    if(bf<-1 && key<node->right->data)
    {
        node->right= rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;

}

struct Node* AVL_TREE::deleteNode(struct Node*node,int key)
{
    if(node==NULL)
    return NULL;
    if(node->left==NULL && node->right==NULL)
    {
        delete node;
        return NULL;
    }
    

}