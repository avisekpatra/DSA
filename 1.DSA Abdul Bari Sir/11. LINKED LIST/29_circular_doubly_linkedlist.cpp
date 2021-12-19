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
int length();
void createcircular();
void DisplayCircular();
//insert function
void insert(int index,int num);
//delter function
int Delete(int index);
//function to if the dobly linked list is circular or not
bool isCirular();

~Linkedlist(){delete head;}

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
//function to count the no of nodes in the length
int Linkedlist::length()
{
    Node *p=head;
    int len=1;
    while(p->next!=head)
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
    do
    {
        cout<<p->data<<" ";
        p=p->next;

    }while(p!=head);
    cout<<endl;    
}

//insert at any place by index
void Linkedlist::insert(int index,int num)
{
    Node *p=head;
    if(index<0 && index > length())
    return;
    Node *t=new Node;
    t->data=num;
    t->next=t->prev=NULL;
    
    if(head==NULL)
    {
        head=t;
        t->next=t->next;
        t->prev=t->prev;
    }

    else if(index==0) //inserting before the head node
    {
        //head->prev
        t->next=head; 
        t->prev=head->prev;
        head->prev->next=t;
        head->prev=t; 
    }
    else
    {
        for(int i=1;i<index;i++)
        {
            p=p->next;
        }

        t->next=p->next;
        p->next->prev=t;
        t->prev=p;
        p->next=t;
    }

}

//function to cheeck if the doubly linked list is circlar of not
bool Linkedlist::isCirular()
{
    Node *p=head;
    int flag=0;
     
    while (p!=NULL)
    {  
     if(p->next==head)
     return true;

     p=p->next;
    }
    return false;    
}

//delete function
int Linkedlist::Delete(int index)
{
if(index<0 && index>length() && head==NULL)
return -1;

Node *p=head;

if(index==1)
{
    if(head->next==head && head->prev==head) //only one node
    {
    delete head;
    head=NULL;
    }
    else
    {
        head->prev->next=head->next;
        head->next->prev=head->prev;
        head=head->next;
        int x=p->data;
        delete p;
        return x;
    }

}
else
{
    for(int i=1;i<index;i++)
    {
        p=p->next;
    }
    p->prev->next=p->next;
    p->next->prev=p->prev;
    int x=p->data;
    delete p;
    return x;
}

}


int main()
{
    int A[]={1,2,3,4,5};
    Linkedlist l(A,5);
    l.createcircular();
    l.DisplayCircular();
    cout<<l.length()<<endl;
    if(l.isCirular())
    cout<<"it is circular"<<endl;
    else
    cout<<"not circular"<<endl;
   
    return 0;
}