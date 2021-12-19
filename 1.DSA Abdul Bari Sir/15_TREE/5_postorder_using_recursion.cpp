#include<bits/stdc++.h>
using namespace std;

//we will crete a binary tree using linked representation
//class node
//class Bianry Tree
//fuction to create the binary treee

//function to dispaly the binnary tree in the postorder format using recursion

void postorder(Node *node)  //initially take the root node
{
    if(node==NULL) //if the node is null then just return from the function
    return; 
    else
    {
        
        postorder(node->left); //by using recursion will give output for left part
        postorder(node->right); //by using recursion will give output for right part
        cout<<node->data; //then print the data on the current node
    }
}