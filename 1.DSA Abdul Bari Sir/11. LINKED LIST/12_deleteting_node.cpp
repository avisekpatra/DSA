#include<bits/stdc++.h>
using namespace std;

struct  Node {
    int data;
    struct Node *next;
};

struct Node *head =NULL;

void create(struct Node *p.int A[],int n)
{
    struct Node *t,*last;
    head = new Node;
    head->data=A[0];
    head->next=NULL:
    last = head;
    for (int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL:
        last->next=t;
        last=t;
    }
}
int length(struct Node *p)
{ int length=0;
    while(p!=NULL)
    {
        length++;
        p=p->next;

    }
return length;
}

int delete(int pos) //we will give the position to delete the node
{
    //we will create and need 2 nodes 1 to traverse to go to the positon and one to follow the other pointer or the previous node
    struct Node *p= head;
    struct Node *q= NULL:
     
     //check if the node is empty or not ,position is >0 and psoition is <length of the linkedlist
     if(pos>1 && pos<length(head))
     {
     //if we want to delete the 1st node the 
     if(pos==1)
     {
         head=head->next; //now point the head pointer to the next node point by the hread pointer
         int x = head->data; //then just store the value which we are going to delete 
         delete p; //delete the node why because p is pointer pointing to a node which is created in head so to prevent memmory leak we haveto delete the pointer
         return x; //then return the deleted value
     }
     else //if it is not the first node 
     {
         for(int i=1; i<pos && p!=NULL ;i++)  //we will run a for loop to traverse 2 pointers p will go on till it reaches teh position and q will follow p which will point the previous node pointed by p
         {                                    //for loop will go on till the pointer is null and till teh position
             q=p;
             p=p->next;
         }
         if(p!=NULL)  //this condtion is to vaerify if some onr gave position more thean the no of nodes in a linked list if the pointer p have pointing NULL then dont do any thingif not then we have found the position
         {
             q->next=p->next; //then point p->next to p->next that will end the conect linked list and formed a new one
             p->next=NULL;   //this is optironal to point the p->next=NULL
             int x = p->data;  //store the value we want to delete to return it
             delete p; //delete p as the pointer is pointiing to a node created in heap
             return x;
         }

     }

     }
    

  return -1; //if teh above condtion dont reach then return -1;
}