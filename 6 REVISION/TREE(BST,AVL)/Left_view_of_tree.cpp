#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
int data;
Node *left;
Node *right;
Node(int data)
{
    this->data=data;
    left=NULL;
    right=NULL;
}
};

void rightview(Node *root)
{
    if (root==NULL)
    return;
    //so we will traverse level by level order 
    //so we wll be using a queue for it
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* p;
        int n=q.size();
        for(int i=0;i<n;i++)
        {
          p=q.front();
          q.pop();
          if(i==n-1)
          cout<<p->data<<" ";   
        }
        
        if(p->left!=NULL)
        {
            q.push(p->left);
        }
        if(p->right!=NULL)
        {
            q.push(p->right);
        }

    }
    cout<<endl;
}



int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(78);
    root->left->left=new Node(8);
    root->left->right=new Node(7);
    root->right->left=new Node(5);
    root->right->right=new Node(9);
    root->right->left->right=new Node(13);
    rightview(root);

    return 0;
}