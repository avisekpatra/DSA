#include<bits/stdc++.h>
using namespace std;

/*---------- STACK ----------*/
class Node
{   
    public:
    char data;
    Node *next;
};

class Stack
{
    public:
    Node *top;
    Stack();
    void push(char c);
    char pop();
    bool empty();
    ~Stack(){delete top;}
};

Stack::Stack()
{top=NULL;}

void Stack::push(char c)
{
    Node *t=new Node;
    if(t==NULL)
    cout<<"memmory is full\n";
    else
    {
        t->data=c;
        t->next=top;
        top=t;
    }
}

char Stack::pop()
{   int x=-1;
    if(top==NULL)
    cout<<"empty stack\n";
    else
    {
        Node *p=top;
        x=top->data;
        top=top->next;
        delete p;
    }

    return x;
}

bool Stack::empty()
{
    return (top==NULL);
}

/*---------- STACK ----------*/

//   INFIX TO POSTFIX

//fuction to check if the char is operand or operator

bool operand(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
    return false;
    else
    return true;
}

//fuction to return the precedence of the operator
int precedence(char c)
{
    if(c=='+' || c=='-')
    return 1;
    else if(c=='*' || c=='/')
    return 2;

    return 0;
}

char* infixToPostfix(char infix[])
{   //create a stack
    Stack s;
    //length of the array
    int len=0;
    while(infix[len]!='\0')
    {
        len++;
    }

    

    char *postfix = new char[len+1]; //craeting a new string of size n+1 as +1 for \0 the string terminator
    int i=0;  //for infix
    int j=0; //for postfix
    while(infix[i]!='\0')
    {
        if(operand(infix[i]))  //checking if the char is an operator or operand ,if operan then move it to the postfix array
        {
            postfix[j]=infix[i];
            i++; //go next char of the infix
            j++;  //go to next index of postfix
        }
        else  //if it is an operator
        {
            if(s.empty()) //if the stack is empty thrn just push the operator 
            {
                s.push(infix[i]);
                i++;
            }
            else
            {
                 if(precedence(infix[i])>precedence(s.top->data))
                 {
                     s.push(infix[i]);
                     i++;
                 }
                 else //if equal or less than 
                 {
                     postfix[j]=s.pop();
                     j++;
                 }
            }
       }        
    }

    //check if the stack is not empty then pop and add to postfix
    while(!s.empty()) //run the while loop till the stack is not empty
    {
        postfix[j++]=s.pop();     
    }
    //then add '\0' at the end of the psotfix as the string is now complete
    postfix[j]='\0';

    //then return postfix
    return postfix;

}



int main()
{
    char str[]="a+b*c-d/e";

    char *p=infixToPostfix(str);
    int i=0;
    cout<<"postfix is: ";
    while (p[i]!='\0')
    {
       cout<<p[i++];
    }
    cout<<endl;
    

    return 0;
}

