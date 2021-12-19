#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void create(int A[],int n)
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


Node* lsearch(struct Node *p,int k)
{
//1st we will create a tail pointer which will follw p but it will be used to accsess previous node 
struct Node *q= NULL;

//now to traverse we will use the for loop
while(p!=NULL)
{
if(k==p->data)
{
     q=p->next; //now q will point to the no which is pointe by p on that time 
     p->next=head; //now p will point to the head node that is teh 1st node
     head=p; //now assign a new heap pointer

    return p; //after that return the addres of the p where it was
}

g=p;
p=p->next;
}
return NULL; //if the elemnt dont exist then retuen NULL
}

struct Node *q = NULL; //we will create 
while (p!=NULL)
{
    
 if(p->data == k)
 {
     q=p->next;
     p->next=head;
     head = p;
     return p;
 }
 
 q=p;
 p=p->next;
}

return NULL;



int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);

    cout<<"elemnt in the address "<<lsearch(head,4)<<endl;
    
    cout<<head->data<<endl;

    return 0;
}