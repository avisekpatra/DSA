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
while (p!=NULL)
{
    if(k==p->data)
    return p;

    p=p->next;
}
return NULL;
}

int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);

    cout<<"elemnt in the address "<<lsearch(head,4)<<endl;
    

    return 0;
}