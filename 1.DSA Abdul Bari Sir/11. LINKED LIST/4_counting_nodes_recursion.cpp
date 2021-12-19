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
    struct Node *t,*last;
    head = new Node;
    head->data=A[0];
    head->next=NULL;
    last = head;
    for(int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }

}

int count(struct Node *p)
{
    if(p==NULL)
    return 0;

    return count(p->next)+1;
}


int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    cout<<"no of elemnt is "<<count(head)<<endl;

    return 0;
}