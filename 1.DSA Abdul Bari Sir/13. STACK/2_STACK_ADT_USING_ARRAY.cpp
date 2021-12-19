#include<bits/stdc++.h>
using namespace std;

class Stack
{
int size;//for creating the size of the array that is teh size of the stack
int top; //store the index of the last/recently added elemnt that is consiter to be the tp most elemnt
int *s; //pointer to create an array in the heap
public:
//constructtor
Stack(int size);
//facilators
bool isEmpty();
bool isFull();
void push(int n);
int pop();
int peek(int index);
int stackTop();
void Display();
~Stack(){delete []s;}
};
//constructor to create a stack when the object of the class stack is created
Stack::Stack(int size)
{
    this->size=size; //assigned the size of the stack
    s= new int[this->size]; //create a array of the size in heap
    //assigning top to -1 as there is no element currently
    top=-1;
}

bool Stack::isFull() 
{
    if(top==size-1) //as the maximum index in the stack is size-1 and the top is pointing to that index means it is full
    return true;
    else
    return false;
}

bool Stack::isEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}


void Stack::push(int n)
{
    if(!isFull()) //fisrst check if the Stack is full or not
    {
    top++; //first move the top to the next index where we will add the new element
    s[top]=n; //then assign elemnet
    }
}

int Stack::pop()
{
    int x=-1; //a variable to store the pop elemnent and it is initially inisilised with -1 cause if the stack is empty then it will return this
    if(isEmpty())
    return x;
    else
    {
        x=s[top]; //stored the elemnt which will pop 
        top--;  //shift top one index down ,just by shifting the top to one index we have poped one elemnt as a stack is defined by the top index
        return x;
    }
    
}

int Stack::peek(int index)
{
    //check if the given index is valid or not
    if(index<1 && index>size)
    return -1;
    else
    return s[top-index+1];  //top-index+1 is the formula we dericved that the array is storing from downward but we want positiong from upward so obeserving we got the equation
}

int Stack::stackTop()
{
    return s[top]; 
}

void Stack::Display()
{
    for(int i=top;i>=0;i--) //run the for loop from the top index so that it will give output stored from top
    {cout<<s[i]<<endl;}
}

int main()
{
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.Display();

    cout<<"top elemnt is "<<s1.stackTop()<<endl;

    cout<<"elemnt poped is "<<s1.pop()<<endl;

    cout<<"top elemnt is "<<s1.stackTop()<<endl;

    cout<<"the elemnt in the position 3 is "<<s1.peek(3);
    return 0;
}







