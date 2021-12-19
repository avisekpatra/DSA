#include<bits/stdc++.h>
using namespace std;

//--------------STACK USING LINKED LIST--------------//
class Node
{
    int data;
    Node *next;
};
class Stack
{
    Node *top;
    public:
    Stack()
    {
        top=NULL;
    }
    void push(int x)
    {
        Node *t=new Node;
        if(t==NULL)
        cout<<"memmory full\n";
        else
        {
            t->data=x;
            t->next=top;
            top=t;
        }
    }
    int pop()
    {
        int x=-1;
        if(top==NULL)
        cout<<"stack is empty\n";
        else
        {
            Node *p=top;
            top=top->next;
            x=p->data;
            delete p;
        }
     return x;   
    }
    bool empty()
    {
        return top==NULL;
    }
    int stacktop()
    {
        if(empty())
        return -1;
        else
        return top->data;
    }
    ~Stack()
    {
        delete top;
    }
};


//-------------QUEUE USING 2 STACK-------------//
class Queue
{
    Stack stack1;
    Stack stack2;
    public:
    void enqueue(int x)
    {
        stack1.push(x); //just push to the stack1
    }
    int dequeue()
    {
        //if stack2 is empty then we will start filling it from stack1 while poping it
        if(stack2.empty())
        {
            //if stack1 is also emoty then the queue is empty
            if(stack1.empty())
            cout<<"queue is empty\n";
            else         //we will start the transefer remeber only trasfer if stack2 is empty
            {
             while(!stack1.empty())
             {
                  int x= stack1.pop();  //first pop AND STORE it in a variabel
                 stack2.push(x);   //thne push it to stack2 
             }
            }
        }

        //now return and delete the 1st elemnt that is the top now
        return stack2.pop();
    }
}
