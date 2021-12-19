#include<iostream>
#include<stack>
using namespace std;

bool operand(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
     return false;
     else
     return true;
}
float postfixevaluation(char postfix[])
{
    stack<float> s; //create a stack of int as we are goin to perform integer operation
    int i=0;
    float x1,x2,res;
    while(postfix[i]!='\0')
    { 
        if(operand(postfix[i])) //checking if it is an operand or opreator if operand then just push it
         {
             s.push(postfix[i]-'0'); //we have going to push the number so we will convert that char into its no that is its ASCII value - ASCII value of 0 
             i++;
         }
         else //that is a operator then we check whichi operator and perfor accordingly
         {
             //before performing we will be needing the coresponding operand so we will pop 2 oprand from  the stack and store it a variabel
             x2=s.top(); //1st poped no is the 2nd operand 
             s.pop();
             x1=s.top(); //wnd pped no is the 1st operand 
             s.pop();
             //we will chaeck the char that is which operator it is
             switch (postfix[i])
             {
                 case '+': res=x1+x2;
                 break;
                 case '-':res=x1-x2;
                 break;
                 case '*':res=x1*x2;
                 break;
                 case '/':res=x1/x2;
                 break;
             }
             //then we will push the result to the stack
             s.push(res);
             i++; //traverse in to the next char in the postfix expresion
         }
    }
    //now the last elemnt in the satck is the final answer and we retuen it and aslo pop is
    return s.top();
}
int main()
{
    char str[]="52-64*3/+";
    cout<<"the ealuation of the postfix is : "<<postfixevaluation(str)<<endl;
    return 0;
}

