#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next ;
};

struct Node *head= NULL:

void create(int A[],int n)
{
    struct Node *t;
    struct Node *p=head;
    head = new Node;
    head->data=A[0];
    head->next=NULL:
    
    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=NULL:
        p->next=t;
        t=p;
    }
}

void reverse()
{
    struct Node *p=head;
    int l=0;
    while (p!=NULL)
    {
    l++;
    p=p->next;
    }
    int A[l]={0};
    int i=0;
    while (p!=NULL)
    {
        A[i]=p->data;
        p=p->next;
        i++;      
    }
    i--;
    p=head;
    while(p!=NULL)
    {
       p->data=A[i--];
       p=p->next;
    }    
} 