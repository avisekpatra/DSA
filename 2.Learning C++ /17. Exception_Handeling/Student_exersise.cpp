#include<iostream>
using namespace std;

class StackOverFlow:public exception{};
class StackUnderFloaw: public exceptiom{};

class stack
{
private:
int *stk;
int top=-1;
int size;
public:
//constructor
stack(int sze)
{
    size = sze;
    stk= new int[size];
}
try
{
void push(int x)
{
    if (top==size-1)
    throw StackOverFlow()
    top++;
    stk[top]=x;
}
int pop()
{
    if(top==-1)
    throw StackUnderFloaw()
    return stk[top--];
}
}
catch(StackOverFlow o)
{
    cout<<"stack over flow";
}
catch(StackUnderFloaw u)
{
    cout<<"stack underflow";
}
};

int main()
{
    stack s(5);
}

