#include<iostream>
using namespace std;

//craeting a linked representAtion of the binarry tree
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
//preorder traversal 
void preorder(Node *node)
{
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
//inorder traversal
void inorder(Node *node)
{
    if(node==NULL)
    return;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
//postoreder traversal
void postorder(Node *node)
{
    if(node==NULL)
    return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

//TO CREATE A BINARY TREE USING PREORDER AND INORDER

//search fuction to get index 
int serach(int inorder[],int start,int end,int key)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==key)
        return i;
    }
}
//fuction to create a tree using preorder and inorder
//start and end index of the inorder
Node* create(int preorder[],int inorder[],int start,int end)
{
    
   

    //a static int iterator for traversingin the preorder array to find the key ellement
    static int itr=0;
    //a int var key to store the current node value of pre order which we will search in which index in inorder array it is
    
    int key=preorder[itr++];
    //itr++;

    //a Node is required to add in add key to it first 
    Node *node=new Node(key);
    
     //if some point start is greter then the end just return NULL
    if(start>end)
    return NULL;
    //if there is only one node then we will return the node
    if(start==end)
    return node;

    
    //pos variable which is the index in the inorder where we have found the key that is preorder[itr]
    //then we will split the array acordingly left part for the left subtree and right part for right subtree
    int pos= serach(inorder,start,end,key);
    
    //then by recursion we will create the left subtree and asign it to the node->left in left side the array will be start from the start but end at pos-1
    node->left=create(preorder,inorder,start,pos-1);

    //creating right subtree  and assign it to the node->right from post+1 to the end of the inorder array
    node->right=create(preorder,inorder,pos+1,end);


    return node;
    
}




int main()
{
    
    int pre[]={5,6,8,4,9,2,1,4,7};
    int in[]= {4,8,6,2,9,1,5,4,1};
    int n= sizeof(pre)/sizeof(pre[0]);
    int start=0;
    int end=n-1;

    
    Node *root1= create(pre,in,start,end);
    preorder(root1);

    return 0;

}
