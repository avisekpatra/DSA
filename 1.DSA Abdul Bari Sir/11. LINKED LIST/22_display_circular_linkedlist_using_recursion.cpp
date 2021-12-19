#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
int data;
Node *next;
};
class LinkedList
{
    Node *head;
    public:
    LinkedList(){head=NULL;}
    LinkedList(int A[],int n);
    void create();
    void Display(Node *p); //display function using recursion
    ~LinkedList(){delete head;}
};
LinkedList::LinkedList(int A[],int n)
{
    Node *p;
    Node *t;
    head=new Node;
    head->data=A[i];
    head->next=NULL;
    p=head;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->next=NULL;
        p->next=t;
        p=t;
    }
}

void LinkedList::create()
{
    Node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=head;
}
//display function using recursion
void LinkedList::Display(Node *p)
{
    //we will use anather staTIC varaibel flag which is initaially 0
    //and we will use this flag variabel to chek if we have traversing the head pointer in the circular linked list again or not
    //concept is that initally it is 0 so we will have a condition that if (p!=head or flag==0)
    static int flag=0;
    if(p!=head || flag==0)
    {   //update the flag as 1
         flag=1;
         //then print in calling time
        cout<<p->data<<" "; 
        //then call recursively
        Display(p->next);
    }
    //after this block ends
    //asign flag with 0 as it the fuction can be use again 
    flag=0; //its like reseting 

}

int main()
[
    int A[]=
    return 0;
]