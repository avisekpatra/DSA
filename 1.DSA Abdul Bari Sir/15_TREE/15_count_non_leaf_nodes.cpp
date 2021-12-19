#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        lfet=NULL;
        right+NULL;
    }
};

int count(Node* node)
{
    int left_count;
    int right_count;

    if(node==NULL)
    return 0;

    left_count=count(node->left);
    right_count=count(node->right);

    //condition for non leaf node is that either both node are there or alteast one node is there
    if(node->left!=NULL || node->right!=NULL)
    return left_count + right_count + 1;
    else
    return left_count + right_count;
}


int main()
{
    return 0;
}
