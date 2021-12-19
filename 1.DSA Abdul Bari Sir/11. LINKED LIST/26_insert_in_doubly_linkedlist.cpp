#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next; //pointer to next node
    Node *prev; //pointer to the previous node in the linked list
};

class Linkedlist
{
Node *head; //the head pointer pointing to the head node and it is in private so that only member fuction can acsse it
public:
//constructors
Linkedlist(){head=NULL;}
Linkedlist(int A[],int n);
//facilators
void Display();
int length();

//insert function
void insert(int index,int n);


};
//constructor to convert a array into a doubly LinkedList
Linkedlist::Linkedlist(int A[],int n)
{
    Node *t;//for adding a new node 
    Node *last; //which will point to the last node
    //first crete a head node
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    head->prev=NULL;

    //point the last node initially at head
    last = head;
    //creating a doubly linked list uisng for loop
    for(int i=1;i<n;i++)
    {
        //create a new node
        t=new Node;
        t->data=A[i];
        t->next=NULL; 
        t->prev=last; //the newly created node will point to the last node 

        last->next=t;
        last=t;
    }
}
//function to display
void Linkedlist::Display()
{
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

//function to count the no of nodes in the length
int Linkedlist::length()
{
    Node *p=head;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

//function to insert a node at a particular index 
void Linkedlist::insert(int index,int n)
{
    if(index>=0 && index<=length())  //check if the index given by the user is invalid or not
    {   
         //creating a node of the data to insert
         Node *t=new Node;
         t->data=n;
         t->next=t->prev=NULL;

        //1st test case that is if the linked list is empty
        if(head==NULL)
        {
            head=t;
        }
        //case if the index 0 that is before the head pointer 
        else if(index==0)
        {
            t->next=head; //point t next to head 
            head->prev=t; //point head previous node to t
            head=t; //now the new head node is t
        }
        else 
        {
             Node *p=head; //for traversing
             for(int i=1;i<n;i++)
             {p=p->next;}
             t->next=p->next;
             t->prev=p;
             if(p->next!=NULL) //that is if there is a next node then only the next node's prev pointer will point t
             p->next->prev=t;
             
             p->next=t;
            
        }
    }
}


int main()
{
    int A[]={1,2,3,4,5};
    Linkedlist l(A,5);
    l.Display();
    l.insert(2,45);
    l.Display();
    return 0;
}