#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int n)
    {
        data=n;

    }
};

//transfer from one teacher to anather
//return type is a Node*
//no dounle 

Node* BinarySearchTree(struct Node*node,int key)
{
    //run the loop if the node is not NULL or become NULL as node is NULL means usucessfull search
    while(node!=NULL)
    {
        //if we found the key in a node then return the node
        if(key==node->data)
        return node;
        //if the key is smaller than the current node then to the left node 
        else if(key<node->data)
        node=node->left;
        //if the key is greater then the current node move to the right node
        else
        node=node->right;
    }
    //for unsuccesfull search
    return NULL;
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

    struct Node* root= new Node(30);
    //created a binary search tree with the propertise
    //no duplicate elements
    //inorder must in the accending
    root->left=new Node(20);
    root->right=new Node(40);
    root->left->left=new Node(10);
    root->left->right=new Node(25);
    root->right->left=new Node(35);
    root->right->right=new Node(50);
    inorder(root);
    cout<<endl;
    struct Node*temp=BinarySearchTree(root,35);
    if(temp!=NULL)
    cout<<"35"<<" is found in the address "<<temp<<"\n";
    else
    cout<<"elemnt not found\n";

return 0;
}