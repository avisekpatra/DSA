#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class LinkedList
{
    private:
    struct Node *head;
    public:
    //constructors
    LinkedList();
    LinkedList(int A[],int n);
    //facilators
    //fuction to create a linked List
    void CircularLinkedListCreate();
    //fuction to display a circular Linkedlist display
    void CircularLinkedListDisplay();
    //function to insert a data at a particular index in a linked list and index is based on programer defined
    void insert(int index,int key);
    //function to know the length of the circular linkedlist
    int length();
    //fuction to delete a node and return the deleted data
    int Delete(int index);
   
    //destructor
    ~LinkedList(){delete head;}

};



LinkedList::LinkedList()
{
    head=NULL;
}

LinkedList::LinkedList(int A[],int n)
{
    Node *p; //for traversing
    Node *t; //for creating new node and add it to the linked list
    //but first create a node of head 
    head = new Node;
    head->data=A[0]; //initially asign the value to the 1st Node as the 1st elemnt of the array
    head->next=NULL; //then point the head node next to NULL:
    p=head; //after creating the head node we will point p to haed for strating point of the traversing
    for(int i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=NULL;
        p->next=t; //then we will add this newly created node to the next of p as p will be pointiong to the lat node
        p=t; //now we move p to the last added node  
    }
}
//fuction to craete a linked list circular
void LinkedList::CircularLinkedListCreate()
{
    //first lets traverse to the last node of the linked list
    Node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    //as now p will be pointing to the last node so we wil point the next of the last node to head
    p->next=head;
}

void LinkedList::CircularLinkedListDisplay()
{
    //for traversing we need a pointer pointing to head
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;

        if(p==head)
        break;
    }
    //or
    //we use do while loop as 1st with the while condition till p!=HEAD; as if p==head then if have completed one rotation completely
    //why do while as one time we have traverse p without checking the while condition as initially p is head and while stop if p==head
    /* 
    do
    {
      cout<<p->data<<" ";
      p=p->next;
    }while(p!=head);
    */
}

int LinkedList::length()
{   
    Node *p=head;
    int len=1;
    while (p->next!=head)
    {
        len++;
        p=p->next;
    }
    return len;
}

void LinkedList::insert(int index,int key)
{
    if(index>=0 && index<=length()) //first check if the given index is valid or not
    {   
        Node *p=head; //a pointer to traverse

        //create a new node to insert
        Node *t=new Node; 
        t->data=key;
        t->next=NULL;
        
        //if user want to add before the head pointer
        if(index==0)
        {
        //check if the linkedlist is empty or not
        if(head==NULL) 
        { 
              head=t; //then point head to the new node t
              t->next=head; //and that new node next or head next to head ,that is it self
        }
        //that is head is not null and to add node just before head node
        else    
        {
          while(p->next!=head) //then we will traverse the pointer p to the last node of the circular linked list and as teh last node will be pointing to the head so we used this condition
          {
              p=p->next;
          }
          p->next=t; //then point the next of the last node to the new node
          t->next=head; //then point the new node next to head
          // we dont need to change a head as it really dont matter so if you want to then this is syntax head=t;
        }
        }
        //that is index is > 0 that is to add node after the head node 
        else
        {
        for(int i=1;i<index;i++) //for this as we have defined a index system so we will run a for loop from 1 to less than index as p shoude traverse for index-1 time
        {
            p=p->next;
        }
        t->next=p->next; //as p is at right position so t next will point to p next 
        p->next=t; //and p->next is gonna point to the new node
        }
    }
    //if index is invalid
    else
    cout<<"invalid index\n";

}



//delete fuction
int LinkedList::Delete(int index)
{
    Node *p=head; //for traversing

    if(head!=NULL && index>0 && index<=length())
    {
        if(index==1) //that is to delete the head node 
        {
            if(head->next==head)//that is only one node 
            {
                delete head;
                int x= head->data;
                head=NULL;
                return x;
            }
            else //that is just to delete the head node from a circular node that is more nodes are present
            {
             //move p to the last node
             while (p->next!=head)
             {
                p=p->next;
             }
             //then point p->next to head next as we are removing the head node
             p->next=head->next;
             int x= head->data;
             delete head; //now delete the head pointing node
             head=p->next; //now we can make any node as it a circular linked list head but philal we will make the next node head
             return x;
            }
        }
        else //that is not the head node other index
        {
            Node *q=NULL; //we will be needing anather node for folowing p
            //by using a for loop we will traverse the p 
            //now a trick
            //instead traversng both pointer p and then q 
            //we can just go to the previous node of the given index and then point q t= p->next that is the node we want to delte then we can modify and delete
            for(int i=1;i<index-1;i++)
            p=p->next;

            q=p->next; //now q is pointing to the node which is going to be deleted 
            
            p->next=q->next;
            int x=q->data;
            delete q;
            return x;
        }

    }
    else
    {
        cout<<"\ncannot perform deletion\n";
        return 0;
    }

}


int main()
{
    int a[]={2,3,5,7,1};
    LinkedList l(a,5);
    l.CircularLinkedListCreate();
    l.CircularLinkedListDisplay();
    cout<<endl<<"length is "<<l.length()<<endl;
    l.insert(3,67);
    l.CircularLinkedListDisplay();
    cout<<endl;
    l.Delete(4);
    l.CircularLinkedListDisplay();

    return 0;
}


