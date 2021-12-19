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
        left =NULL;
        right=NULL;
    }
};

void insert(struct Node*root,int key)
{
    struct Node* t; //for new node
    struct Node* q=NULL; //for following
    struct Node*p=root; //for traversing

    if(root==NULL)
    {
      t=new Node(key);
      t->left=NULL;
      t->right=NULL;
      root=t;
      return ;
    }

    while(p!=NULL)
    {
        if(p->data==key)
        {
            cout<<"elemnt already exist\n";
            return ;  //if the elemnt already exist then dont insert and exit
        }
        else if(p->data<key)
        {
            q=p;
            p=p->right;
        }
        else 
        {
            q=p;
            p=p->left;
        }
    }

    if(key>q->data)
   { 
       t=new Node(key);
       t->left=NULL;
       t->right=NULL;
       q->right=t;
   }
   else if(key<q->data)
   {
       t=new Node(key);
       t->left=NULL;
       t->right=NULL;
       q->left=t;
   }

}

void preorder(struct Node*node)
{
    if(node==NULL)
    return ;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}


int main()
{
    struct Node *root=new Node(56);
    insert(root,24);
    cout<<endl;
    preorder(root); 

    return 0;
}