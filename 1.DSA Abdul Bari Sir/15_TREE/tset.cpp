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

int height(Node* node)
{
    int left_height;
    int right_height;

    if(node==NULL)
    return 0;

    left_height=height(node->left);
    right_height=height(node->right);

    if(left_height>right_height)
    return left_height+1;
    else
    right_height + 1;
}

Node* create(int pre[],int in[],int start,int end)
{

    static int itr=0;
    int key=pre[itr++];
    Node *node=new Node(key);
    if(start==end)
    return node;

    if(start>end)
    return NULL:

    int pos=search(in[],start,end)
    node->left=create(pre[,in[],start,pos-1]);
    node->right=create(pre[],in[],pos+1,end);

}

void inorder(Node* node)
{}


int pre[]={4,6,8,4,7,3,2};
int in[]= {8,6,4,4,3,7,2};
