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

//insert function recursivly
//return node*
Node* insert(struct Node* node,int key)
{
    //we will be needing a node for inserting
    struct Node* t;

    //if the root is null then create a new node and return it
    if(node==NULL)
    {
        //creating a new node of 
        //t->data=key
        //t->left=t->right=NULL
        t= new Node(key);
        node=t; //assign node to t  or just simply return t
        return node;
    }

    //then if the node is not null then 
    
    //if key is less than the node data then it will be inserted in the left subtree 
    if(key<node->data)
    node->left=insert(node->left,key); //insert the lement in the left subtree by recursivly

    //if the key is greter than the node data then insert in the right side 
    else if(key>node->data)
    node->right=insert(node->right,key); //insert in the right node  or right subtree
    
    //if the key is found means already exits then just return the node 
    //for which i dont have to write an extra line

    //after inserting or finding the key then just return the node
    return node;
}

void inorder(struct Node* node)
{
    if(node==NULL)
        return;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

int main()
{
    struct Node* root=NULL;
    root=insert(root,78);
    root=insert(root,89);
    root=insert(root,90);
    root=insert(root,35);
    root=insert(root,39);
    inorder(root);

    return 0;

}