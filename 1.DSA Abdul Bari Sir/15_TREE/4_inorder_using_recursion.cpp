#include<bits/stdc++.h>
using namespace std;

//we will crete a binary tree using linked representation
//class node
//class Bianry Tree
//fuction to create the binary treee

//function to dispaly the binnary tree in the inorder format using recursion

void inorder(Node *node)  //initially take the root node
{
    if(node==NULL) //if the node is null then just return from the function
    return; 
    else
    {
        
        inorder(node->left); //by using recursion will give output for left part
        cout<<node->data; //then print the data on the current node which is the nose which sould be prited in inorder
        inorder(node->right); //by using recursion will give output for right part
    }
}