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
    Node *head;
    public:   
    Linkedlist(int A[],int n);
    void Display();
    int middle();

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
int Linkedlist::middle()
{
    Node *p=head; //traverse once
    Node *q=head; //traverse twice step 
     while (q!=NULL)
     {
         q=q->next;  //first move q one step then check if q become null or what then onlyy decide to moove
         if(q!=NULL) //check if q become null that is no next node so where the fuck to move
         q=q->next;
         
         if(q!=NULL)  //if q is not null then only move p if q become null why move p
         p=p->next; 

     }

     return p->data;   
}


int main()
{
    int A[]={10,11,12,13,14,15,16};


    Linkedlist l1(A,8);

    cout<<endl<<l1.middle()<<" is the middle elemnt\n";


    l1.Display();


}