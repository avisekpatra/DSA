#include<bits/stdc++.h>
using namespace std;

struct Node 
{
int data;
struct Node *next;
};
struct Node *head=NULL:

void create(int A[],int n)
{
    struct Node *p=head;
    struct Node *t;
    head->data=A[0];
    head->next=NULL;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL:
        p->next=t;
        p=p->next;
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
    
}

void slidingPointer()
{
    struct Node *p=head; //leading pointer
    struct Node *q= NULL; //following p that is the middile pointer 
    struct  Node *r=NULL: //last poiinter that is folloeing the pointer q
    //remeber that the last pointer will be onr to move first then the middle then the leading pointer 
    //while p is leading the loop flow will go on till p becomes NULL
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
    }
}