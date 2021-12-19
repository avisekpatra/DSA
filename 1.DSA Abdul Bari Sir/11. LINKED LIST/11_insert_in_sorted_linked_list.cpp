#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    head = new Node;
    head->data=A[0];
    head->next=NULL;
    last = head;

    for(int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        last ->next=t;
        last=t;
    }
}


void insert(int x)
{
    struct Node *p=head;
    struct Node *q= NULL;
    struct Node *t=new Node;
    t->data=x;
    t->next=NULL;

    if(head==NULL)
    {
        head=t;
    }
    else if(head->next==NULL)
    {
        if(head->data<x)
        head->next=t;
        else
        {
        t->next=head;
        head=t;
        }
    }
    else 
    {
        while (p!=NULL && p->data<x)
        {
            q=p;
            p=p->next;
        }
        q->next=t;
        t->next=p;
    }

}


void display()
{
    struct Node *p=head;
    while (p!=NULL)
    {
       cout<<p->data<<" ";
       p=p->next;
    }
    cout<<endl;
    
}

int main()
{
    int A[]={1,2,3,6,9};
    create(A,5);
    display();
    insert(5);
    insert(12);
    display();

    
    return 0;
}
