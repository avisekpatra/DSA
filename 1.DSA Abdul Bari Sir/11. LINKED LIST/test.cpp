#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Linkedlist
{
    Node *head;
    public:
    Linkedlist(){head=NULL;}
    Linkedlist(int A[],int n)
    {
        Node *p;
        head = new Node;
        head->data=A[0];
        head->next=NULL;
        Node *t;
        p=head;
        for(int i=1;i<n;i++)
        {
            t=new Node;
            t->data=A[i];
            t->next=NULL;
           p->next=t;
           p=t;
        }
        
        }

void Display()
{
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
       p=p->next;
    }
    cout<<endl;
}
void insert(int index,int key)
{
    Node *p=head;
    Node *t=new Node;
    t->data=key;
    t->next=NULL;
    if(index==0)
    {
        t->next=head;
        head=t;
    }
    else
    {
        for(int i=1;i<index;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
~Linkedlist()
{
    delete head;
}
};

int main()
{
    int A[]={1,2,4,5,6};
    Linkedlist l(A,5);
    l.Display();
    l.insert(4,67);
    l.Display();
}

