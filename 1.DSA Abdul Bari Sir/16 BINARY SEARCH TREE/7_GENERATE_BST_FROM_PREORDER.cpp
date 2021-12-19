#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data ;
    struct Node* left;
    struct Node* right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};


//function to create a BST from preorder array so we will take parameter the preorder array and the size of the array n
//function return a the root node of the bst
struct Node* create(int preorder[],int n)
{
    struct Node* p; //for traversing
    struct Node* t; //for new node
    struct Node* root// for root node
    stack<Node**> s; //stack of type node Node** to store the node in it
    int i=0; //iterator for preorder array

    //first create the root node as in pre order the 1st elemnt is the root node of the bst
    root= new Node(preorder[i]);
    i++;  //then move i to the next elemnt
    p=root;  //point p to the root

    //now the repeating steps till the we have completely iterate the preorder array
    while(i<n)
    {
        //if the current preorder elemnt is smaller than the currennt node data means it will be inserted in the left side so creae a node; pont p->left to it ,then push p to the stack the move p to teh new node
        if(preorder[i]<p->data)
        {
            t=new Node(preorder[i]);
            i++;
            p->left=t;
            s.push(p);
            p=p->right;
        }
        else if(preorder[i]>p->data) //that is if the preordeer[i] is greter than the curent Node data it willinserted in the right side
        {
            //in the right we have to also check if it will lie on this node->right or not for which we will check it in the stack top value if the 
            //if the preorder[i] lies in the range of current node data and the s.top wala node data then inserrt
            if(preorder[i]<(s.empty()?INT_MAX : s.top()))  //if the top is empty then treat it as inifini that is intmax
            {
                t= new Node(preorder[i]);
                i++;
                p->right=t;
                p=p->right;
            }
            else  //when it isnt lie in the range then just move the p to the s.top and s.pop the node from the stack
            {
                p=s.top();
                s.pop();
            }
        }
        }
    }

    return root;

}









