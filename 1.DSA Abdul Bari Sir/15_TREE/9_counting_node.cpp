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

//take the root node initiall
int count(Node *node)
{
    int left_count;
    int right_count;
    //base condition that if the node is null then return 0
    if(node==NULL)
    return 0;
    //recursion will give the no of nodes in the left subtree
    left_count=count(node->left);
    //recursion will give the no of nodes in the right subtree
    right_count=count(node->right);
    //total nodes will be sum of all nodes in left and right subtree + 1 as  the parent node itseft
    return left_count+right_count+1;
}

int main()
{
    return 0;
}