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

void reverseLinkedList()
{
    struct Node *p=head; //leading pointer which will required to go to the next pointer for reversing the link acttually the q will be reversing the link but we will not just reverse the link of only one Node
    struct Node *q=NULL; //following p that is the middle pointer and the reversing will be done using this middle pointer
    struct Node *r=NULL; //following q that is the last pointer and we need r so that we will able to reverse the conect tion from the middle pointer -q to r 
    //as p is leading so till p is NULL
    while(p) //is same as p!=NULL
    {
        //1st slide the 3 pointers then revrse the link 
        r=q;
        q=p; //remember that we will be chaning the linking conecttion uisng middle pointer
        p=p->next;
        //2nd now we change the linking 
        //as q->next pointing to p
        //but we will change it to r and continue this till p becomes null
        q->next=r;

    }
    head=q; //after that point head to the last elemnt of the original linked list wichi is now pointed by q as p would be become null
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