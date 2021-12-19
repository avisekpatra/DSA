#include<iostream>
using namespace std;

class Node
{
    public::
    int data;
    Node* next;
};
class Stack
{
    Node *top;
    public::
    Stack()
    {
        top=NULL;
    }
    void push(int num)
    {
        Node *t= new Node;
        if(t==NULL)
        cout<<"heap memmory is full";
        else
            {
                t->data=num;
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
            return x;
        }
        
        return x;
    }
    bool empty()
    {
        return top=NULL:
    }
    int stacktop()
    {
        if(top==NULL)
        return -1;
        else
        return top->data;
    }
    void display()
    {
        if(empty())
        cout<<"stack is empty\n";
        else
        {
            Node *p=top;
            while(p)
            {
                cout<<p->data<<endl;
                p=p->next;
            }
        }
    }

};

int main()
{
    Stack s;
    s.push(5);
    s.push(7);
    s.display();
    return  0;
}
