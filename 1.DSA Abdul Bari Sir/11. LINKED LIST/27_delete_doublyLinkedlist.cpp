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

//function to delete a node and return the delted value 
int Delete(int index);

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

int Linkedlist::Delete(int index)
{
    //check if the index is valid or not and also that the linked is empty or not
    if(index<0 || index>length() || head==NULL)
    return -1;
     
    //pointer p for travesring and deleteing
    Node *p=head;

    //for delteing the first node
    if(index==1)
    {
        head=head->next; //shift the head pointer to its next
        if(head!=NULL)//that is there is a node or some node after the head node then point thats prev to null
        head->prev=NULL;
        //store the value to be deleted
        int x=p->data;
        //then delete the priviously head node
        delete p;
        //return the value
        return x;
    }
    else  //for any index
    {
        //we will tarverse the p to the node is going to be deleted
        for(int i=1;i<index;i++)
        {p=p->next;}

        //by using the p as it is a doubly linked list we have accces to its previous and next node so no need of an external node
        //first point the previous node of the p(deleted node) to next of the p(deletd node) next
        p->prev->next=p->next;
        //we will check if there is any next node after the deleting node
        //then we also update that node prev
        if(p->next!=NULL)
        p->next->prev=p->prev;  //next node of the delteting node will point to the previous node of the deleteing node
        //after a linking 
        delete p;
    }


}


int main()
{
    int A[]={1,2,3,4,5};
    Linkedlist l(A,5);
    l.Display();
    l.Delete(2);
    l.Display();
    return 0;
}