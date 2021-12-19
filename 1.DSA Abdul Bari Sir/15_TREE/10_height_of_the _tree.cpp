#include<bits/stdc++.h>
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

int height(Node *node)
{
    int left_subtree_height;
    int right_subtree_height;
    
    if(node==0)
    return 0;

    //by faith recurstion will give the left subtree height
    left_subtree_height=height(node->left);
    //recursion will give me right subtree
    right_subtree_height=height(node->right);

    //after getting the heights from left subtree and right subtree
    //i will compare which is bigger then whiever is bigger i will retuen that side heigt+1
    if(left_subtree_height>right_subtree_height)
    return left_subtree_height+1;
    else
    return right_subtree_height+1;
}

int main()
{
    return 0;
}