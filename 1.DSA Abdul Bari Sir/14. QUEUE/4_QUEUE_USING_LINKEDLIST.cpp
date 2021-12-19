#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Queue
{
    Node *front;
    Node *rear;
    public:
    Queue();
    void enqueue(int x);
    int dequeue();
    void display();
    int length();
    int first();
    int last();
    bool empty();
    int position(int pos);
    ~Queue()
    {
        delete front;
        delete rear;
    } 
};

void Queue::enqueue(int x)
{
    //cheking that if the queue if full or not as it is a linked list so we checki if the heap memmory is full or not
    Node *t=new Node;
    if(t==NULL)
    cout<<"memmory full\n";
    else
    {
        t->data=x;
        t->next=NULL;
        //condition 1 that is if the queue is empty or what 
        if(front==NULL)
        {
            front=NULL;
            rear=NULL;
        }
        else
        {
            rear->next=t; //insertion is done from the last in queue as it follow FIFO priciple that is first in first out
            rear=t;
        }
    }
}

int Queue::dequeue()
{
    int x=-1;
    //checking if the queue is empty or not
    if(front==NULL)
    cout<<"empty queue\n";
    else
    {
      Node *temp=front; 
      front=front->next;
      x=temp->data;
      delete temp;
    }

 return x;  
}

void Queue::display()
{
    Node *p=front;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

bool Queue::empty()
{
    return front==NULL;
}

int Queue::length()
{
    Node *p=front;
    int len=0;
    while (p)
    {
        len++;
        p=p->next;
    }
    return len;
}

int Queue::first()
{
    if(front==NULL)
    return -1;
    else
    return front->data;
}

int Queue::last()
{
    if(rear==NULL)
    return -1;
    else
    return rear->data;
}

int Queue::position(int pos)
{
    Node *p=front;
    for(int i=1;i<=pos;i++)
    {p=p->next;}
    return p->data;
}

int main()
{
    Queue q;
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(78);
    q.enqueue(89);
    q.display();
   
   
    return 0;
}