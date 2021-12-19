#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
}*head = NULL;

void create(int A[],int n)
{
    struct Node *t;
    struct Node *last;

    head = new Node;
    head->data=A[0];
    head->next=NULL;

    last=head;
    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int max(struct Node *p)
{
    int max = INT_MIN;
    while (p!=NULL)
    {
        if(p->data > max)
        {
            max=p->data;
        }

    p=p->next;
    }
    return max;
}

void removeDuplicate(struct Node *p)
{
    //we will be needed anather pointer to store the previous of p
    struct Node *q=NULL;
    //create an array for hashing of size max elemnt + 1  and assign it to zero
    int size = max(head)+1;
    int A[size] = {0};

    while (p!=NULL)
    {
        //1st check if p->data index zero or not
        if (A[p->data]==0) 
        A[p->data]++;
        else if(A[p->data]>0) //if A[p->data]>0 means already marked that is duplicate exist 
        {
            //now lets remove
          q->next=p->next; //then point q next to p next to end  the linking
          delete q;
        } 
    q=p; //point q to where p is pointing 
    p=p->next;  //then move p to next node
    }  
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    int a[]={1,1,2,6,4,77,8,1};
    create(head,a,8);
    display(head);
    removeDuplicate(head);
    display(head);
    return 0;
}