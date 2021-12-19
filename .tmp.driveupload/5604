#include<bits/stdc++.h>
using namespace std;

struct Node 
{
int data;
struct Node *next;
};

struct Node *head=NULL;

void created(int A[],int n)
{
    struct Node *p; //to create new nodes
    struct Node *last ;
    head = new Node;
    head->data=A[0];
    head->next=NULL;
    last = head;

    for(int i=1;i<n;i++)
    {
        p= new Node;
        p->data=A[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }

}

void display()
{
    struct Node *p=head;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
      cout<<endl;
}

//now reversing the linked list using recursing
//we need 2 pointers one to traverse and other one to follow as tail
void reverse(struct Node *q,struct Node *p)
{
    //we will 1st traverse till p become NULL after when p become nulll we will point the last elemnt which is imitially pointed by q as from now we will going to revesr the linked list
    if(p!=NULL)
    {

    reverse(p,p->next) ;  //first q will go to p then p will go to the next node 
    p->next=q; //as we are reversing in the returning phase why as in calling face if we reesre the list then how p will go to next node 
    }
    else //when p become null means we have gone to end of the linked list so now we will point the last node that is the q is pointing wiill be pointed by head
    {  
    head=q;
    }

}


int main()
{
    int a[5]={1,2,3,4,5};
    created(a,5);
    display();
    reverseLinkedList();
    display();
     
    return 0;
}