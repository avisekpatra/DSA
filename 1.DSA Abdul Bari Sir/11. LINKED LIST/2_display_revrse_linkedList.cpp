#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};
Node * head=NULL;

void create(int A[],int n)
{
    Node *p,*last;
    head= new Node;
    head->data=A[0];
    head->next=NULL;
    last = head;
    for(int i=1;i<n;i++)
    {
        p = new Node;
        p->data =A[i];
        p->next=NULL;
        last->next=p;
        last= p;
    }
}


void display(Node *p=head)
{
    if(p!=NULL)
    {
        display(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    int A[]={7,3,6,2,1,76,89};
    create(A,7);
    display();
    return 0;
}

