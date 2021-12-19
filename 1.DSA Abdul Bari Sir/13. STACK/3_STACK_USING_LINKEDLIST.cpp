#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
int data;
Node *next;
};

class Stack
{
Node *top;
public:
Stack();

int length();
void push(int n);
int pop();
bool isEmpty();
bool isFull();
void Display();
int peek(int index);
int peekTop();
void clear();

~Stack(){delete top;}
};

Stack::Stack()
{
    top=NULL;
}

int Stack::length()
{
    Node *p=top;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void Stack::push(int num)
{
    //first check if there is space in heap to create node and indert it
    Node *t=new Node;
    if(t==NULL) //this means the node is not created
          cout<<"no heap meemory\n";
       
    else
        {
            //fill the data
           t->data=num;
           //we will just insert from front thant t->next =top
           t->next=top;
           top=t;
           //this also work for empty stack
        }
    
}

int Stack::pop()
{
    Node *p=top; //pointer pointing to top as we will move the top to the next node cause we are poinping the top node
    int x=-1;
    //check if the stack is empty or not if empty just return -1 that is x
    if(top==NULL)
    return x;
    else
    {
        top=top->next; //shifted the top to the next node as this node is going to delete
        x=p->data;
        delete p;
        return x;
    }
    
}

//fuction to check if the given stack is empty or not
bool Stack::isEmpty()
{
    return top==NULL;
}

//fuction to know that the heap memmory is full or not cause if full then  we cannot create node and add to is
//so we will create a node and check if it is created or not and we will know
//that is the node created is NULL then headmemmory is full
bool Stack::isFull()
{
    Node *t=new Node; //create a new node 
   
   return t==NULL;   //if the node create is NULL means it is node created 
}

void Stack::Display()
{
    if(top==NULL)
    cout<<"nothing to Display\n";
    else
    {
        Node *p=top;
        while (p)     //this means p!=NULL
        {
            cout<<p->data<<endl;
            p=p->next;
        }
        
    }
    
}

int Stack::peek(int index)
{
    Node *p=top;
if(top!=NULL && index>0 && index < length())
{
    for(int i=1;i<index;i++)
    {
        p=p->next;
    }    
    return p->data;
}
}


int Stack::peekTop()
{
    if(top==NULL)
    return -1;
    else
    return top->data;
}

void Stack::clear()
{
    delete top;
    top=NULL;
}

int main()
{
  Stack s1;
  s1.push(5);
  s1.push(6);
  s1.push(7);
  s1.push(10);
  s1.Display();

  cout<<"top elemnt is that is the netx elment to be poped\n "<<s1.peekTop();
  cout<<"pop elemnt\n"<<s1.pop();
  cout<<"stack after poping "<<endl;
  s1.Display();

    return 0;
}


