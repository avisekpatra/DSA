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
    }

};

int count(Node *node)
{
    int left_count;
    int right_count;

    if(node==NULL)
    return 0;

    left_count=count(node->left);
    right_count=count(node->rigth);
    
    //condition for the node with degree 1 is that one of the node that is left or right one of them must be null or zero
    if((node->left==NULL && node->right!=NULL) || (node->left!=NULL && node->right==NULL))
    return left_count + right_count + 1;
    else
    return left_count + right_count;

}

int main()
{
    return 0;
}