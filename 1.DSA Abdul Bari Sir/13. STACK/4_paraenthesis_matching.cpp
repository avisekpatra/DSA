#include<iostream>
#include<stack>

using namespace std;

void matching(char str[])
{
    stack<char> s;
   int i=0;
   int flag=0;
   while (str[i]!='\0')
   {
       if(str[i]=='(')
       s.push(str[i]);

       if(str[i]==')')
       {
           if(s.empty())
           {flag=1;
           break;}
           else
           s.pop();
       }
       

    i++;
   }
   if(!s.empty())
       flag=1;


   if(flag)
   cout<<"not matching\n";
   else
   cout<<"Matching\n";
}

int main()
{
    char s[]= "(((a+b)*(a-b))))";
    matching(s);
    
    return 0;
}