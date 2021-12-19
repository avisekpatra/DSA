#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void created(int A[],int n)
{
    struct Node *p; //to create new nodes
    struct Node *last ;
    head = new Node;
    head->data=A[0];
    head->next=NULL;
    last = head;

    for(int i=1;i<n;i++)
    {
        p= new Node;
        p->data=A[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }

}

int count(struct Node *p)
{
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}

int main()
{
    int A[]={1,2,3,4,5,6};
    created(A,6);
    cout<<"no of nodes are "<<count(head);
    return 0;
}