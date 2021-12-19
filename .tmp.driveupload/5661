#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
}*head=NULL;

void create(int A[],int n)
{
    struct Node *p;
    struct Node *t;
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    p=head; //we have assigned p to head after creating a new node of head
    for(int i=1;i<n;i++)
    {
        t=new Node ;
        t->data=A[i];
        t->next=NULL:
        p->next = t; //now attaching the new node to the newly created linked list
        p=t; //now point to to t the new node
    }
}

void display(struct Node *p)
{
while (p!=NULL)
{
cout<<p->data<<"->";   
}
cout<<NULL:
}

//function to check if the given list is loop or not
bool isSorted()
{
    //we will need 2 pointers 
    //pointer p which will traverse only one node 
    //pointer q which will traverse 2 nodes that is i have to write the traversing statement twice 
    //but we will have a condition for the 2nd time traversing 
    struct Node *p=head; //initially point to head;
    struct Node *q=head; //same ,initially point to the head head node which is pointed by the head
    
    //we will use a do while loop as we will traverse the 2 pointer once and then check for elegibility
    do
    {
    p=p->next; //traverse p
    q=q->next; //traverse q one step first
    //then to traverse again i will check if q->next is NULL or not  if Null then just  stop 
    q=q?q->next:q; //this means if q is null then let q rmain null and it it is not null then traverse
    } while (p!=NULL && q!=NULL && p!=q); //that is any pointer become null means linear and if the p==q means loop so we have found that it is a loop 
    if(p==q)
    return true;
    else
    return false;

}

int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    struct Node *p= head->next->next; //to point the node at a particular posiytion we can write like that 
    struct Node *q= head->next->next->next->next; //to point the pointer to the last node i did ,i can use a for loop but i used this method
    //now i will poin the last node -> next to the 3 rd node of the linked list to form a loop
    q->next=p; //now it forms a loop

}