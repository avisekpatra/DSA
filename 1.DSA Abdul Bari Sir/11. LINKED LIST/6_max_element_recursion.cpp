#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}   *head=NULL; //create a head pointer and assigned it null

int create(int A[],int n)
{
    struct Node *p;
    struct Node *last;

    head = new Node;
    head->data=A[0];
    head->next=NULL;

    last=head;

    for(int i=1;i<n;i++){
        p= new Node;
        p->data=A[i];
        p->next=NULL;

        last->next=p;
        last= p;
    }
}

int max(struct Node *p)
{
    if(p==NULL)
    return INT_MIN;

    else
    {
        int x =max(p->next); //by recursion leap of faith we asume x will find the max elemnt 

        if(x>p->data) //now after recursive call on returning time compare the value of x with current data
        return x;
        else
        return p->data;
    }
}


int main()
{
    int A[]={7,4,67,4,2,2};
    create(A,6);
    cout<<"max elemnt is "<<max(head)<<endl;
    return 0;
}
