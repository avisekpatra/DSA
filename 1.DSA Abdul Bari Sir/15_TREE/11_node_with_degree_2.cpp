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
        right=NULL:
    }
};

//to count the no of nodes with degree 2 

int count(Node* node)
{
    int left_count;
    int right_count;
    if(node==NULL)
    return 0;
    
    left_count=count(node->left);
    right_count=count(node->right);

    //as for a node to be dgree 2 we have to check it have both child or not
    //if yes remebr the total will be no of nodes found in left and right subtree and then add 1 as the node whose left and right subtree we found
    if(node->left!=NULL && node->right!==NULL)
    return left_count + right_count + 1;
    else
    return left_count + right_count;
}

int main()
{
    return 0;
}