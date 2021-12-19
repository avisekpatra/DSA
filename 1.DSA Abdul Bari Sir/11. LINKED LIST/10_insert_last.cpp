#include<bits/stdc++.h>
using namespace std;

struct Node {
int data;
struct Node *next;
};

struct Node *head=NULL;
struct Node *tail=NULL;

void insert(int x)
{
    struct Node *t;
    t = new Node;
    t->data=x;
    t->next=NULL;

    if(head==NULL && tail==NULL)
     {
         head=t;
         tail=t;       
     }
     else
     {
         tail->next=t;
         tail=t;
     }
}

void display(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    insert(5);
    insert(6);
    insert(8);
    display(head);
    return 0;
}