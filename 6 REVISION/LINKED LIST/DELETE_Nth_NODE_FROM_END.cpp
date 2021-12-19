#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class linkedlist
{
    public:
    struct Node* head;
    linkedlist()
    {
        head=NULL;
    }
    int countNode();  //function to count the no of nodes
    void insert(int key); //to isert in the linked list
    int deleteFromEnd(int n); //delete the node in nth position from the end
    void display();
    ~linkedlist()
    {
        delete head;
    }
};

int linkedlist::countNode()
{
    struct Node* p= head;
    int count=0;
    while (p)
    {
       count++;
       p=p->next;
    }
    return count;
}

void linkedlist::insert(int key)
{
    struct Node* t= new Node(key);
    if(t==NULL)
    {
        cout<<"memmory full\n";
        return ;
    }
    if(head==NULL)
    {
        head=t;
        return;
    }
    struct Node* p = head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=t;  
}

int linkedlist::deleteFromEnd(int n)
{
    if(head==NULL)  //if no elemnt is there then nothing to delete
    return -1;
    int count=countNode(); //to know the no of node in the linked list
    struct Node* q=NULL; //pointer which will be folowing p for deletion purpose
    struct Node* p=head;
    int x=-1;
    
    if(n>count || n<=0)
    {
        cout<<"invalid position\n";
        return -1;
    }
    if(n==count)
    {
      x=head->data;
      head=head->next;
      delete p;
      return x;    
    }


    int position=count-n+1;
    int i=1;
    while(i<position)
    {
        q=p;
        p=p->next;
        i++;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    return x;
}

void linkedlist::display()
{
    struct Node* p= head;
    while (p)
    {
       cout<<p->data<<"->";
       p=p->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    linkedlist l;
    int arr[]={3,13,26,8,12,19};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        l.insert(arr[i]);
    }
    l.display();
    cout<<l.deleteFromEnd(4)<<endl;
    l.display();
    return 0;
}
