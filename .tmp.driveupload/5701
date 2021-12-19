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
    private:
    struct Node *head;
    public:
    //constructors
    LinkedList();
    LinkedList(int A[],int n);
    //facilators
    void CircularLinkedListCreate();
    void CircularLinkedListDisplay();
    //destructor
    ~LinkedList(){delete head;}

};

LinkedList::LinkedList()
{
    head=NULL;
}

LinkedList::LinkedList(int A[],int n)
{
    Node *p; //for traversing
    Node *t; //for creating new node and add it to the linked list
    //but first create a node of head 
    head = new Node;
    head->data=A[0]; //initially asign the value to the 1st Node as the 1st elemnt of the array
    head->next=NULL; //then point the head node next to NULL:
    p=head; //after creating the head node we will point p to haed for strating point of the traversing
    for(int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        p->next=t; //then we will add this newly created node to the next of p as p will be pointiong to the lat node
        p=t; //now we move p to the last added node  
    }
}
//fuction to craete a linked list circular
void LinkedList::CircularLinkedListCreate()
{
    //first lets traverse to the last node of the linked list
    Node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    //as now p will be pointing to the last node so we wil point the next of the last node to head
    p->next=head;
}

void LinkedList::CircularLinkedListDisplay()
{
    //for traversing we need a pointer pointing to head
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;

        if(p==head)
        break;
    }
    //or
    //we use do while loop as 1st with the while condition till p!=HEAD; as if p==head then if have completed one rotation completely
    //why do while as one time we have traverse p without checking the while condition as initially p is head and while stop if p==head
    /* 
    do
    {
      cout<<p->data<<" ";
      p=p->next;
    }while(p!=head);
    */
}

int main()
{
    int a[]={2,3,5,7,1};
    LinkedList l(a,5);
    l.CircularLinkedListCreate();
    l.CircularLinkedListDisplay();

    return 0;
}


