#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class LinkedList
{
    public:
    Node* head;
    LinkedList()
    {
        head=NULL;
    }

   
    void insert(int key);
    void Reverse();
    
    void display();

};

 void LinkedList::insert(int key)
    {
        Node* t= new Node(key);

        if(head==NULL)
        {
            head=t;
            return;
        }
        else
        {
          Node *p=head;
          while(p->next!=NULL)
          {
              p=p->next;
          }
          p->next=t;
        }
    }

//reverse
void LinkedList::Reverse()
{
    Node *p=head;
    Node *q=NULL;
    Node *r=NULL;

    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;  
        q->next=r;  
    }

    head=q;

}

void LinkedList::display()
{
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


int main()
{
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(a[0]);
    LinkedList l;
    for(int i=0;i<n;i++)
    {
      l.insert(a[i]);
    }
    l.Reverse();
    l.display();
    return 0;
}