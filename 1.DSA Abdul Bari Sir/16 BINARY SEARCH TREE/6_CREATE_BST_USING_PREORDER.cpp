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

struct Node*create(int preorder[],int n)
{
    struct Node*t; //for creating new node and adding
    struct Node*p; //for traversing
    struct Node*root; //root node of the bst
    stack<Node*> s; //stack is needed
    int i=0; //iterator for ipreorder
    
    //initailaly as we know that the 1st elemnt of the preorder is the root node so
    //we will create a root node of thr 1st elemnt of the preorder
    root= new Node(preorder[i]);
    i++; //increment the iterator to the next elemnt of the preorder
    p=root; //poin p to the root
    
    while (i<n)
    {
        //that is smallermno go to the left 
        //remeber only in left we will push the node to stack
        if(pre[i]<p->data)
        {
            t=new Node(pre[i]); //create a new node
            i++; //move the iterator
            p->left=t; //asign the newly crreted node to the p->left
            s.push(p); //push the addres
            p=p->left; //move tp the newly added node
        }
        else if(pre[i]>p->data) //if the pre[i] is greater then it will go to right subtree
        {                            //in right subtree we dont add the node
            if(pre[i]<(s.empty? INT_MAX:s.top()))  //then check if it is in the layer
            {
                t= new Node[pre[i]];  //create new node
                i++;
                p->right=t;   //assgin it to the right
                p=p->right;  //move to the next elemnt
            }
            else
            {
                p=s.top(); //just assgin the s.top()) 
                s.pop();  //and delete it
            }
        }
     
    }

    return root;
}