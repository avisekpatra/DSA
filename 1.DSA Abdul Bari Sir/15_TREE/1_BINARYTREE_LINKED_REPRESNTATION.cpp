#include<iostream>
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

//creating a stack
class sNode
{   
    public:
    struct Node** sdata;
    struct Node *next;
};

class Stack
{
    sNode *top;
    public:
    Stack()
    { 
       top=NULL;
    }
    void push(struct Node** add)
    {
        sNode *t= new Node;
        if(t==NULL)
        return;
         
        else
        {
            if(top==NULL)
            {
                t->sdata=add;
                t->next=NULL;
                top=t;
            }
            else 
            {
                t->sdata=add;
                t->next=top;
                top=t;
            }
        }
    }
    void pop()
    {
        if(top==NULL)
        return;
        else
        {
            sNode *p =top;
            top=top->next;
            delete p;
        } 
    }
    bool isempty()
    {
        return top==NULL;
    }
    struct Node** stop()
    {
        if(top==NULL)
        return NULL;
        else
        return top->sdata;
    }
};


struct Node* insert(struct Node* node,int key)
{
    struct Node *t;
   
    if(node==NULL)
    {
        t= new Node(key);
        return t;
    }
    
    if(key < node->data)
    node->left=insert(node->left,key);
    
    else if(key>node->data)
    node->right=insert(node->right,key);

    return node;
}

void inorder(struct Node*node)
{
    if(node==NULL)
    return ;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

//preorder using iterator
void preorder(struct Node* p)
{
    Stack s;
    while (!s.isempty())
    {
        if(p!=NULL)
        { 
            cout<<p->data;
            s.push(p);
            p=p->left;
        }
        else
        { 
            p=s.stop();
            s.pop();
            p=p->right;
        }
    }
}


int height(struct Node*node)
{
    int left;
    int right;
    if(node==NULL)
    return 0;

    left=height(node->left);
    right=height(node->right);
    
    if(left>right)
    return left+1;
    else
    return 1+ right;

}

int search(int in(),int key,start,int end)
{
    for(itn i=start;i<=end;i++)
    {
        if(in[i]==key)
        return i;
    }
}

snode* create_bt(int in(),int pre(),int start,int end)
{
    
    static int i=0;

    int key=pre[i++];
    Node* root=new Node(key);

    if(start==end)
    return root;
    if(start>end)
    return NULL;
     
    int pos;
    pos= search(in(),key,start,end);
    root->left=create_bt(in(),pre(),start,pos-1);
    root->right=create_bt(in(),pre(),pos+1,end);

    return root;

}

int main()
{
    struct Node* root= NULL;
    root=insert(root,6);
    root=insert(root,8);
    root=insert(root,9);
    cout<<endl;
    preorder(root);
   

    return 0;
}