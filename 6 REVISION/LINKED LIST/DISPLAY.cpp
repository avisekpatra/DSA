#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node(int data=0)
    {
     this->data=data;
     next=NULL;
    }
};

class Linkedlist
{
    public:
    struct Node *head;
    Linkedlist()
    {
        head=NULL;
    }
    void insert(int key);
    void display(struct Node*p);
    int size();
    void insertAtPosition(int key,int pos);
    void insertHead(int key);
    ~Linkedlist()
    {
        delete head;
    }
};


void Linkedlist::insert(int key)
{
    struct Node *t= new Node(key);
    if(t==NULL)
    {
        cout<<"Heap memmory full\n";
        return ;
    }

    if(head==NULL)
    {
        head=t;
        return;
    }
    struct Node*p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=t;
    
}

void Linkedlist::insertHead(int key)
{
    struct Node *t= new Node(key);
    if(t==NULL)
    {
        cout<<"Heap memmory full\n";
        return ;
    }

    if(head==NULL)
    {
        head=t;
        return;
    }

    t->next=head;
    head=t;
}

int Linkedlist::size()
{
    if(head==NULL)
    return 0;

    struct Node *p=head;
    int n=0;
    while (p)
    {
       n++;
       p=p->next;
    }
    return n;
}

//1 based inexing
void Linkedlist::insertAtPosition(int key,int pos)
{
    int s=size();
    if(pos>s+1 || pos<=0)
    {
        cout<<"error index\n";
        return;}

    struct Node*t=new Node(key);
    
    if(pos==1)
    {
        if(head==NULL)
        {
            head=t;
        }
        else
        {
            t->next=head;
            head=t;
        }

        return;
    }

    int cpos=1;
    struct Node*p=head;
    while (cpos!=pos-1)
    {
       p=p->next;
       cpos++;
    }

    t->next=p->next;
    p->next=t;
      
}


void Linkedlist::display(struct Node *p)
{
    if(p)
    {
       
        cout<<p->data;
        display(p->next);
       
    }
    
}



int main()
{
    Linkedlist l;
    int n;
   l.insert(1);
   l.insert(2);
   l.insert(3);
   l.insert(4);
   //l.insert(5);
   l.insert(6);
   l.insertAtPosition(7,7);
   l.display(l.head);
    return 0;

}