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
void reverse();
void createcircular();
void DisplayCircular();

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

void Linkedlist::createcircular()
{
    Node *p=head;
    while(p->next!=NULL)
    {p=p->next;}
    p->next=head;
    head->prev=p;
}

void Linkedlist::DisplayCircular()
{
    Node *p=head;
    while (p->next!=head)
    { cout<<p->data<<" ";
      p=p->next;
    }
    cout<<endl;    
}


void Linkedlist::reverse()
{
   Node *p=head;
   Node *q=NULL;
   Node *temp;

   while(p)
   {
       temp=p->next;
       p->next=p->prev;
       p->prev=temp;
        
        q=p;
       p=p->prev;
   }

   head=q;
  
}


int main()
{
    int A[]={1,2,3,4,5};
    Linkedlist l(A,5);
    l.Display();
    l.reverse();
    l.Display();
    return 0;
}