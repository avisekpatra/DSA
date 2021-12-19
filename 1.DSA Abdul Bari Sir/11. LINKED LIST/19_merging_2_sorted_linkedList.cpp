#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first=NULL; //head pointers for 1st linked list 
struct Node *second=NULL; //for 2nd linked list
struct Node *third=NULL;  //for the result

//for first linked list
void create1(int A[],int n)
{
    struct Node *t;
    struct Node *p;
    first= new Node;
    first->data=A[0];
    first->next=NULL; 
    p=first;
  
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        p->next=t;
        p=t;
    }

}

//for 2nd linked list
void create2(int A[],int n)
{
    struct Node *t;
    struct Node *p;
    second= new Node;
    second->data=A[0];
    second->next=NULL; 
    p=second;
  
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        p->next=t;
        p=t;
    }

}
                 //first       //second
void merge(struct Node*p,struct Node*q)
{
    //for adding the node at the next of last node we need a pointer node
    struct Node *last;

    //as the new node which is going to form is empty and no pointer to point it so 
    //1st we will assign the pointer wich ever node is the smallest 
    //and also point last to it initially 
    //then move to next pointer of that linked list
    if(p->data<q->data)
    {
        third=p;  //as it is the first element
        last=p;
        p=p->next;
        last->next=NULL; //always initiaise the last next to NULL
    }
    else
    {
        third=q;
        last=q;
        q=q->next;
        last->next=NULL;
    }

    //now lets compare using loop
    //the loop will go on till one of the linked list is empty
    while (p!=NULL & q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p; //first add at the next of the node
            last=p; //then move last to the freshly added linked list
            p=p->next; //move p to next node as we just added p
            last->next=NULL; //now point nect of cureent node to NULL as it may be the last node
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }

    //suppose a linked is finished and the other linked list is still have elemnt then 
    //we will just point to it
    if(p!=NULL)
    last->next=p;

    if(q!=NULL)
    last->next=q;
      
 
}


void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<"NULL"<<endl;
   
}

int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8};
    create1(a,5);
    create2(b,4);
    
    display(first);
    display(second);
    merge(first,second);
    display(third);
    
    return 0;
}