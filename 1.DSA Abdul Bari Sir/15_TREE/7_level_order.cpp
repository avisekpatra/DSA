#include<bits/stdc++.h>
using namespace std;

//we will be needing our own queue of type Node** for this method

//initially take the root node
void levelorder(Node *node)
{
    //first we will declare a queue of the type node* we will be writing a stl queue but we will be needed to created our own one
    queue<node*> q;
    Node *p; //we will be needing a pointer
    
    //then print the value in the node that is the root node now and then others are repeted method
    cout<<node->data;
    //then push the adress of node to the queue
    q.push(node);
    
    //then we will run a while loop till the queue become epty means thw loop will run this queue is not empty
    while(!q.empty())
    {
        //now we will be assigning adress stoered at the to anaother node p
        p=q.front();
        q.pop();
        
        //check if the there is any elemnt at the right side if not then leaf it as it is
        if(p->left_child!=NULL)
        {
            cout<<p->left_child->data; //check the left child is not null then print add it to the queue
            q.push(p->left_child); //push it to the queue
        }
        //after cheking for the left child check for the right child is null or not
        if(p->right_child!=NULL)
        {
            cout<<p->right_child->data; //if not null then print the right child and add it to the queue
            q.push(p->left_child); //adding to the queue
        }
        //after that repaet it till the queue becomes empty
    }
}