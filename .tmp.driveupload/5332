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
    struct Node *t; //for creating new node
    struct Node *last; //point to the previous or last node
    //creating a new node of head pointer which will be the first node
    head = new Node;
    head->data=A[0];
    head->next=NULL;
    //as we will be sTARTING from head so we will point last to head
    last = head;
    for(int i=1;i<n;i++)
    {
        //craeting new node for each array elemnts
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void removeDuplicate(struct Node *p)
{
    //we will be needing 2 pointer 
    //one to point at the head pointer which is the pointer  p which is in  the formal arguments of thr function
    //second one q which will be pointing p->next  that is p will be tailing q
    
}