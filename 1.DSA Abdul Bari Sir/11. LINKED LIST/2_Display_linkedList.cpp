#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
struct Node* next;
};

struct Node *head=NULL;

void create(int A[],int n)
{
struct Node *t, *last;
head = new Node;
head->data=A[0];
head->next=NULL;
last=head;

for(int i=1;i<n;i++)
{
    t = new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}

}

void display(struct Node *p=head)
{
    if(p==NULL)
    return;
    else
    cout<<p->data<<" ";
    display(p->next);
}


int main()
{
    int A[]={7,8,13,7,56};
    create(A,5);
    display();

    return 0;

}