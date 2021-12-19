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

int count(Node* node)
{
    int left_leaf_count;
    int right_leaf_count;

    if(node==NULL)
    return 0;

    left_leaf_count=count(node->left);
    right_leaf_count=count(node->right);
    
    //condition for a node to leaf node is to have both left and right child is null
    if(node->left==NULL && node->right==NULL)
    return left_leaf_count + right_leaf_count + 1;
    else
    return left_leaf_count + right_leaf_count;
}