#include<stdio.h>

//tail recurtion (staement first then function call)
void fun(int n)
{
    if(n>0)
    { 
        printf("%d ",n);    //first print 
        fun(n-1);           //then call the fuction
    }                       //then no instruction to exicute 
}

//haed recursion (fuction cal first then the statemnet after the fuction end)
void fun2(int n)
{
    if(n>0)
    {
       fun2(n-1);           //first call the fuction then solve the fuction then return
       printf("%d ",n);     //after return ing from the fuction call this statement will be exicute 
    }
}

int main()
{
    int x=3;  
    fun(x); 
    printf("\n");
  
    fun2(x);
    printf("\n");

    return 0;
}