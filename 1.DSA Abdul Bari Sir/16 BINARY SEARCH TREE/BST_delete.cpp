#include<iostream>
using namespace std;
//-----------linked reprsentaion----------------//
struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
//------------bst class-----------------//
class BST
{
    public:
    struct Node* root;
    BST()
    {
        this->root=NULL;
    }
    struct Node* insert(struct Node*,int key);
    struct Node* deleteNode(struct Node*,int key);
    int height(struct Node*node);

};
//---------------height of the bst-------------------//
int BST::height(struct Node* node)
{
    if(node==NULL)
    return 0;
    int lh= height(node->left);
    int rh= height(node->right);
    if(lh>rh)
    return lh+1;
    else
    return rh+1;
}

//------------------insert in bst-------------------//
struct Node* BST::insert(struct Node*node,int key)
{
    if(node==NULL)
    {
        struct Node* t= new Node(key);
        node=t;
        return node;
    }
    else if(key<node->data)
        node->left=insert(node->left,key);
    else if(key>node->data)
        node->right=insert(node->right,key);
    else
        cout<<"Already Exist";

    return node;
}
//--------------------inorder predesesor-----------------//
struct Node* inorderPredesesor(struct Node*node)
{
    struct Node* p=node;
    while(p!=NULL && p->right!=NULL)
    {
        p=p->right;
    }
    return p;
}
//-------------------inorder Sucessor----------------------//
struct Node* inorderSucessor(struct Node* node)
{
    struct Node* p=node;
    while(p!=NULL && p->left!=NULL)
    {
        p=p->left;
    }
    return p;
}



//---------------------delete  node from bst-----------------------//
struct Node* BST::deleteNode(struct Node*node,int key)
{
    if(node==NULL)
    {
        return node;
    }
    else if(key<node->data)
        node->left=deleteNode(node->left,key);
    else if(key>node->data)
        node->right=deleteNode(node->right,key);
    else
    {   struct Node* temp;
        if(node->left==NULL)
        {
            temp=node->right;
            delete node;
            return temp;
        }
        else if(node->right==NULL)
        {
            temp=node->left;
            delete node;
            return temp;
        }
        else
        {
            struct Node* q;
        if(height(node->left)>height(node->right))
            {
            q=inorderPredesesor(node->left);
            node->data=q->data;
            node->left=deleteNode(node->left,q->data);
            }
        else
            {
            q=inorderSucessor(node->right);
            node->data=q->data;
            node->right=deleteNode(node->right,q->data);    
            }
        }
    }
  
    return node;
    
}

//-----------inorder traversal printing--------------//
void inorder(struct Node*node)
{
    if(node==NULL)
    return ;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

//------------main-----------//

int main()
{
    BST b;
    b.root=b.insert(b.root,12);
    

    inorder(b.root);

return 0;
}

