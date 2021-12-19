#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

//creating a head pointer of Node type gloabally 
struct Node *head = NULL;

void create(int A[],int n)
{
    struct Node *p,*last;
    head = new Node;
    head->data=A[0];
    head->next=NULL;

    last = head;
    for(int i=1;i<n;i++)
    {
        p = new Node;
        p->data=A[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
}

void display(struct Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    
}


int length(struct Node* p)
{
    int length=0;
    while(p!=NULL)
    {
      length++;
       p=p->next;
    }
    return length;
}

void insert(struct Node *p,int pos,int x) //*p will take head pointer ,int pos take the position ,int x is the valur we want to add
{

    if(pos<0 && pos > length(p)) //check if the given position exist or not like bigger than the length of the linked list 
     {cout<<"can not add elemnt\n";
     return ;}

     else
     {
         struct Node *t; //pointer to craete a new node to insert
         t = new Node;
         t->data=x;

        //to add before the head pointer
         if(pos==0)
         {
             t->next=head; //pointing to the node where the head node is currenly pointing then 
             head=t;      //point the head to the newly added node as this node is the new head node
           
         }
         else if(pos>0) //to add anywhere after the head at any position asuming we are positioning the nodes from 1 to n.. that is 1st node is 1 ,then 2nd is 2 ...
        {
            //first to have to point the traversing pointer p to the node at that position 
            for(int i=0;i<pos-1;i++)  //we will be moving teh pointer for pos-1 time from its current position which is the head
            {  
             p=p->next;
            }
            //now after this for loop poinetr p will be pointing to the node at the positon where after we are going to add elemnt
            //now t->next will point to the pointer which p is currnetly pointing
            t->next=p->next;
            //point p->next to t and here we have justinserted an node 
            p->next=t; 
       
        }


     }


}


int main()
{
    // int A[]={1,2,3};
    // create(A,3);
    // display(head);
    insert(head,0,35);
    insert(head,0,65);
    insert(head,2,89);
   

    display(head);

    return 0;
}
