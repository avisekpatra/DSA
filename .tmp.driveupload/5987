#include<iostream>
#include<stack>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Linkedlist
{   
    public:
    Node *head;
    
    Linkedlist(int A[],int n);
    void Display();
};

Linkedlist::Linkedlist(int A[],int n)
{
    Node *t;
    Node *p;
    head= new Node;
    head->data=A[0];
    head->next=NULL;
    p=head;
    for(int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        p->next=t;
        p=t;
    }
}

void Linkedlist::Display()
{
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void intersextionwala(Linkedlist &l1 ,Linkedlist &l2)
{
    Node *a=l1.head;
    Node *b=l2.head;
    for(int i=0;i<5;i++)
    {
        a=a->next;
    }
    while (b->next!=NULL)
    {
        b=b->next;
    }
    b->next=a;
}

int main()
{
    int A[]={10,11,12,13,14,15,16,17};
    int B[]={1,2,3,4,5};

    Linkedlist l1(A,8);
    Linkedlist l2(B,5);


    l2.Display();


}