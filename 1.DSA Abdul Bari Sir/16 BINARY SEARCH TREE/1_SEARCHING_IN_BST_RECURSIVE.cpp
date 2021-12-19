#include<iostream>
using namespace std;

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

//searching in a binary search tree
//returns the node where the elemnt is which we want to find
//the fuction is recursive 
//this function take the root node of the binary tree and the key elemnt to be searched as the parameter

Node* BinarySearchTree(struct Node* node,int key)
{
    //if node is NULL then it is a unsucefull serach so return NULL
    if(node==NULL)
    return NULL;

    //if elment is found 
    if(key==node->data)
    return node;

    //if the key elemnt is greater than the current node data then move to the right subtree using a recursive call
    if(key>node->data)
    return BinarySearchTree(node->right,key);

    //if the key elemnt is smaller than the current node data then move to the left subtree recursively
    if(key<node->data)
    return BinarySearchTree(node->left,key);

    //as this function is ending with recursive call so it is a tail recursion

}

void inorder(struct Node*node)
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
    struct Node*temp=BinarySearchTree(root,11);
    if(temp!=NULL)
    cout<<"10"<<" is in the address "<<temp<<"\n";
    else
    cout<<"elemnt not found\n";

return 0;
}