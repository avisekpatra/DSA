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

int sum(Node* node)
{
    int left_sum;
    int right_sum;

    if(node=NULL)
    return 0;

    left_sum=sum(node->left); 
    right_sum=sum(node->right);
     
    //retunr the sum found in left and right subtree of a node and add the the data of the node itself 
    return left_sum + right_sum + node->data; 
}



int main()
{
    struct Node* root= new Node(10);
    root->left=new Node(5);
    root->right=new Node(6);

    return 0;
}