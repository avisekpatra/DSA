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

class tree
{
    public:
    struct Node* root;
    tree()
    {
        root=NULL;
    }
  struct Node* create();
};

struct Node* tree::create()
{ 
    queue<Node*> q;
    struct Node* t;
    struct Node* p;
    int x;
    cout<<"Enter the elemnt in root node\n";
    cin>>x;
    root= new Node(x);
    q.push(root);
    while (!q.empty())
    {
       p=q.front();
       q.pop();
       //for elemnts in p left
       cout<<"Enter the elemnts in left child if there or enter -1\n";
       cin>>x;
       if(x!=-1)
       {
           t= new Node(x);
           p->left=t;
           q.push(p->left);
       }
       //for elemnts in p right
       cout<<"Enter the elemnts in the right child if there or enter -1\n";
       cin>>x;
       if(x!=-1)
       {
           t= new Node(x);
           p->right=t;
           q.push(p->right);
       }

    }
    return root;
 
}

void inorder(struct Node*node)
{   
    struct Node*p=node;
    stack<Node*> s;
    while(p!=NULL && !s.empty())
    {
        if(p!=NULL)
        {
            s.push(p);
            node=node->left;
        }
        else
        {
            p=s.top();
            s.pop();
            cout<<p->data<<" ";
            node=node->right;
        }
    }

}

void level(struct Node* node)
{
    struct Node*p=node;
    cout<<p->data;
    queue<Node*> q;
    q.push(p);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        if(p->left)
        {
            cout<<p->left->data;
            q.push(p->left);
        }
        if(p->right)
        {
            cout<<p->right->data;
            q.push(p->right);
        }
    }
}

int search(int in[],int start,int end,int key)
{
    for(int i=start;i<=end,i++)
    {
        if(in[i]==key)
        return key;
    }
    return -1;
}

Node* create(int pre[],int in[],int start,int end)
{
static itr=0;
int key= pre[itr];
struct Node* node=new Node(key);
if(start==end)
return node;

if(start>end)
return NULL;

int pos= search(in[],start,end,key);
node->left= create(pre[],in[],start,pos-1);
node->right= create(pre[],in[],pos+1,end);

return node;
}

int countnode(struct Node* node)
{
    int l;
    int r;
    if(node==NULL)
    return 0;

    l=countnode(node->left);
    r=countnode(node->right);
    if(node->right==NULL && node->left==NULL)
    return l + r+1;
    else 
    return l+r;
}


int height(struct Node* node)
{
    if(node==NULL)
    return 0;

    int l= height(node->left);
    int r= height(node->right);

    if(l>r)
    return l+1;
    else
    return r+1;
}

